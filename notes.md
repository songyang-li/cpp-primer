## Compound Types
### References
```
int ival = 1024;
int &refVal = ival;
```
Once initialized, a reference remains bound to its initial object. There is no way to rebind a reference to refer to a different object. 
So Reference must be initialized.

A reference is not an object. 

### Pointers
A pointer is an object.

A pointer can point to different objects over its lifetime.

A pointer need not be initialized at the time it is defined.

A pointer holds the address of another object. 

`address of` operator: `&`; `dereference` operator: `*`

```
int ival = 42;
int *p = &ival;
cout << *p;
```
