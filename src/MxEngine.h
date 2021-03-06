// Copyright(c) 2019 - 2020, #Momo
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met :
// 
// 1. Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and /or other materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once

#include "Core/Macro/Macro.h"
#include "Core/Application/Application.h"
#include "Core/Application/Rendering.h"
#include "Core/Application/Runtime.h"
#include "Core/Application/Physics.h"
#include "Core/Application/Timer.h"
#include "Core/Application/Scene.h"
#include "Core/MxObject/MxObject.h"
#include "Core/Config/GlobalConfig.h"
#include "Core/Components/Camera/PerspectiveCamera.h"
#include "Core/Components/Camera/OrthographicCamera.h"
#include "Core/Components/Camera/FrustrumCamera.h"
#include "Core/Components/Components.h"
#include "Core/Application/Event.h"
#include "Core/Events/Events.h"
#include "Core/BoundingObjects/Line.h"
#include "Core/BoundingObjects/Frustrum.h"
#include "Core/BoundingObjects/Cone.h"
#include "Core/BoundingObjects/Rectangle.h"
#include "Core/BoundingObjects/Circle.h"
#include "Platform/GraphicAPI.h"
#include "Platform/Compute/Compute.h"
#include "Platform/Window/Input.h"
#include "Platform/Window/WindowManager.h"
#include "Utilities/Math/Math.h"
#include "Utilities/ImGui/ImGuiUtils.h"
#include "Utilities/Format/Format.h"
#include "Utilities/Random/Random.h"
#include "Utilities/Array/Array2D.h"
#include "Utilities/Image/ImageConverter.h"
#include "Utilities/Image/ImageManager.h"
#include "Utilities/Memory/Memory.h"
#include "Utilities/Logging/Logger.h"
#include "Utilities/FileSystem/FileManager.h"
#include "Library/Primitives/Primitives.h"
#include "Library/Primitives/Colors.h"
#include "Core/Components/Scripting/Scriptable.h"

/*!
Main namespace of MxEngine framework. All classes are located here or in nested namespaces
*/
namespace MxEngine { }