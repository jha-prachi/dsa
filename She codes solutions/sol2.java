// my while logic loop
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