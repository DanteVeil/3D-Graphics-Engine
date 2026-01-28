# 3D Console Graphics Engine

A lightweight, custom-built 3D graphics engine written in C++. This project demonstrates the fundamentals of 3D projection, matrix mathematics, and rendering pipelines by drawing 3D geometry directly into the console window.

It currently utilizes the [olcConsoleGameEngine](https://github.com/OneLoneCoder/olcPixelGameEngine/tree/master/olcConsoleGameEngine.h) to handle the screen buffer.

**🚧 Project Status:** *Active Development. Currently rendering a rotating 3D Cube with back-face culling.*

## 📸 Demo

![Console Engine Demo](https://via.placeholder.com/800x400?text=Rotating+Cube+in+Console)

## ✨ Features implemented

* **Software Rendering:** Pure mathematical rendering without GPU APIs (OpenGL/DirectX).
* **Projection Matrix:** Converts 3D space coordinates into 2D screen space.
* **Matrix Transformations:** Supports rotation (X and Z axes) and translation.
* **Back-Face Culling:** Calculates surface normals to determine visibility, drawing only faces facing the camera.
* **Rasterization:** Draws triangle primitives to the console buffer.

## 🛠️ Built With

* **Language:** C++
* **Framework:** `olcConsoleGameEngine.h` (Single header console game engine)
* **Math:** Custom vector and matrix structs (`vec3d`, `mat4x4`)

## 🚀 Getting Started

### Prerequisites

* A C++ Compiler (Visual Studio, G++, or Clang).
* **olcConsoleGameEngine.h**: You need to download this header file and place it in your project directory. [Download it here](https://github.com/OneLoneCoder/olcPixelGameEngine/tree/master/olcConsoleGameEngine.h).
* *Note: If you are on Linux/Mac, you may need ncurses dependencies for the OLC engine.*

### Building the Project

1.  **Clone the repository**
    ```bash
    git clone [https://github.com/DanteVeil/3D-Graphics-Engine.git](https://github.com/DanteVeil/3D-Graphics-Engine.git)
    cd 3D-Graphics-Engine
    ```

2.  **Ensure dependencies**
    Make sure `olcConsoleGameEngine.h` is in the same folder as your `.cpp` file.

3.  **Compile**
    * **Visual Studio:** Add the file to a standard Win32 Console Project.
    * **G++ (Linux):**
        ```bash
        g++ -o 3d_engine main.cpp -lX11 -lGL -lpthread -lpng -lstdc++fs
        ```
        *(Note: Linux flags depend on the specific version of the OLC header used).*

4.  **Run**
    ```bash
    ./3d_engine
    ```

## 🎮 How it Works

The engine currently runs an automatic loop:
1.  **Define a Cube:** A mesh is created using coordinate vectors.
2.  **Update Loop:**
    * Calculates rotation matrices based on elapsed time (`fTheta`).
    * Transforms triangles (Rotate -> Translate).
    * Calculates the **Normal** vector of the triangle.
    * Performs **Back-Face Culling** (if the normal points away, skip drawing).
    * Projects the 3D points to 2D space.
    * Scales to the console window size and draws the triangle.

## 🔮 Roadmap

Future improvements planned:
- [ ] Camera System (WASD Movement)
- [ ] Lighting & Shading
- [ ] Loading complex meshes from files (e.g., .obj)
- [ ] Texture Mapping
- [ ] Clipping (against screen edges)


## 👤 Author

**DanteVeil**
* GitHub: [@DanteVeil](https://github.com/DanteVeil)
