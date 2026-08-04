interface Photo
{
    void takephoto();
}

interface Video
{
    void recordvideo();
}

class Camera implements Photo, Video
{
    public void takephoto()
    {
        System.out.println("Taking photo...");
    }

    public void recordvideo()
    {
        System.out.println("Recording video...");
    }

    public static void main(String[] args) {
        Camera camera = new Camera();
        camera.takephoto();
        camera.recordvideo();
    }
}
