## Map

std::map is a sorted associative container that contains key-value pairs with unique keys.
<br>
Keys are sorted by using the comparison function Compare. Search, removal, and insertion operations have logarithmic complexity.
<br>
Maps are usually implemented as red-black trees.
<br>
<br>
Everywhere the standard library uses the Compare requirements,
<br>
uniqueness is determined by using the equivalence relation. 
In imprecise terms, two objects a and b are considered equivalent (not unique)
<br>
if neither compares less than the other: !comp(a, b) && !comp(b, a).

## unorderd_map

Internally, the elements are not sorted in any particular order, but organized into buckets. 
<br>
Which bucket an element is placed into depends entirely on the hash of its key. 
<br>
Keys with the same hash code appear in the same bucket. 
<br>
This allows fast access to individual elements, since once the hash is computed, it refers to the exact bucket the element is placed into.
