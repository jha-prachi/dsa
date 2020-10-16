public static void verticalOrderPrint(Node node) {
        LinkedList<Node> queN = new LinkedList<>();
        LinkedList<Integer> queI = new LinkedList<>();

        queN.addLast(node);
        queI.addLast(0);

        HashMap<Integer, ArrayList<Integer>> map = new HashMap<>();
        int min = 0;
        int max = 0;

        while (queN.size() != 0) {
            int size = queN.size();
            while (size-- > 0) {
                Node rnode = queN.removeFirst();
                Integer verticalLevel = queI.removeFirst();

                min = Math.min(verticalLevel, min);
                max = Math.max(verticalLevel, max);

                if (!map.containsKey(verticalLevel))
                    map.put(verticalLevel, new ArrayList<>());

                map.get(verticalLevel).add(rnode.data);

                if (rnode.left != null) {
                    queN.addLast(rnode.left);
                    queI.addLast(verticalLevel - 1);
                }

                if (rnode.right != null) {
                    queN.addLast(rnode.right);
                    queI.addLast(verticalLevel + 1);
                }
            }
        }

        for (int i = min; i <= max; i++) {
            System.out.println(map.get(i));
        }

        System.out.println();
    }