# 3D Graphics Engine

A custom-built 3D graphics engine created to explore rendering techniques and game development fundamentals. This project serves as a sandbox for implementing 3D algorithms, shader programming, and real-time rendering.

**🚧 Project Status:** *In active development. More features coming soon.*

## 📸 Screenshots

![Engine Demo](https://via.placeholder.com/800x400?text=Your+Engine+Screenshot+Here)

## ✨ Features

* **Rendering Pipeline:** Basic 3D rendering loop.
* **Camera System:** First-person flying camera (WASD + Mouse).
* **Model Loading:** Support for loading basic meshes (e.g., .OBJ, .FBX).
* **Shaders:** Custom shader support for lighting and materials.
* **Lighting:** Basic implementation (e.g., Phong/Blinn-Phong).

## 🛠️ Built With

* **Language:** [C++ 17]
* **Graphics API:** [e.g., OpenGL / Vulkan / DirectX 12]
* **Windowing:** [e.g., GLFW / SDL2]
* **Math Library:** [e.g., GLM / Eigen]
* **Asset Loading:** [e.g., Assimp / tinyobjloader]

## 🚀 Getting Started

### Prerequisites

Ensure you have the following installed on your machine:
* [Compiler, e.g., GCC / Clang / MSVC]
* [Build System, e.g., CMake 3.10+]
* [Dependencies, e.g., GPU Drivers]

### Building the Project

1.  **Clone the repository**
    ```bash
    git clone [https://github.com/DanteVeil/3D-Graphics-Engine.git](https://github.com/DanteVeil/3D-Graphics-Engine.git)
    cd 3D-Graphics-Engine
    ```

2.  **Generate build files**
    ```bash
    mkdir build && cd build
    cmake ..
    ```

3.  **Compile and Run**
    ```bash
    make
    ./YourEngineName
    ```

## 🎮 Controls

| Key | Action |
| :--- | :--- |
| **W, A, S, D** | Move Camera |
| **Mouse** | Look Around |
| **Space / Shift** | Fly Up / Down |
| **Esc** | Close Application |

## 🔮 Roadmap

I plan to add the following features in the near future:
- [ ] Shadows (Shadow Mapping)
- [ ] Post-processing effects (Bloom, HDR)
- [ ] Physics integration
- [ ] Scene graph hierarchy

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👤 Author

**DanteVeil**
* GitHub: [@DanteVeil](https://github.com/DanteVeil)
