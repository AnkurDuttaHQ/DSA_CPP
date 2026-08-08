import java.util.HashMap;
import java.util.TreeMap;
import java.util.Map;
public class hashmap {
    public static void main(String[] args){
        Map<Integer,String> map = new HashMap<>();
        TreeMap<Integer,String> treeMap = new TreeMap<>();
        map.put(101,"Ankur");
        map.put(102,"John");
        map.put(103,"Rahul");
        treeMap.put(101,"Ankur");
        treeMap.put(102,"John");
        treeMap.put(103,"Rahul");
        System.out.println("HashMap: " + map);
        System.out.println("TreeMap: " + treeMap);

    }
}


// Null Poineter Exception

