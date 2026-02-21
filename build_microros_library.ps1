# Build micro-ROS static library for Raspberry Pi Pico 2W (Cortex-M33)
# Prerequisites: Docker Desktop must be installed and running

Write-Host "Building micro-ROS static library for Pico 2W..." -ForegroundColor Cyan

docker run -it --rm `
    --entrypoint bash `
    -v "${PWD}:/project" `
    microros/micro_ros_static_library_builder:humble `
    -c "chmod +x /project/microros_static_library/library_generation/library_generation.sh && dos2unix /project/microros_static_library/library_generation/library_generation.sh && /project/microros_static_library/library_generation/library_generation.sh"

if ($LASTEXITCODE -eq 0) {
    Write-Host "Library built successfully!" -ForegroundColor Green
    Write-Host "Output:" -ForegroundColor Green
    Write-Host "  - Library: libmicroros/libmicroros.a"
    Write-Host "  - Headers: libmicroros/include/"
} else {
    Write-Host "Library build failed with exit code $LASTEXITCODE" -ForegroundColor Red
    exit $LASTEXITCODE
}