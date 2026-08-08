import java.util.TreeMap;
public class nullpointerExp {
    public static  void main(String[] args){
        TreeMap<Integer,String> treemap = new TreeMap<>();
        treemap.put(60, "machvat");
        treemap.put(70, "mistidoi");
        treemap.put(120, "Bitiyani");

        System.out.println(treemap);
    }
}