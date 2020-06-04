## Ejercicio 2 - Stock

Una casa de comidas rápidas necesita un sistema que le permita administrar su stock de materias primas. Esta casa sólo cocina platos simples, por lo que la cantidad de ingedientes utilizados son pocos, por ejemplo para cocinar una hamburguesa utiliza 2 panes, 1 hamburguesa, 1 feta de queso y 1 de jamón.

De cada ingrediente utilizado se sabe:

* Nombre
  
* stock: int
  
* stock_maximo: int
  

Cada vez que se realiza una comida, se debe descontar del &quot;stock&quot; del ingrediente la cantidad utilizada.

Para cada receta, la casa cuenta con la siguiente información:

* Nombre
  
* Ingrediente 1 y su cantidad
  
* Ingrediente 2 y su cantidad
  
* Ingrediente 3 y su cantidad
  
* Precio: float
  

**Se pide**:

1. Cuando un cliente realiza su pedido (siempre se pide un único plato):
  
  1. Analizar si se puede realizar el pedido del cliente, es decir que se tenga el stock correspondiente de cada materia prima. En caso contrario mostrar un mensaje informando lo ocurrido.
    
  2. Si se puede realizar el pedido, descontar el stock correspondiente de cada ingrediente.
    
  3. Si el stock de algún ingrediente desciende por debajo del 30% del &quot;stock_maximo&quot; emitir un mensaje de aviso.
    
  4. Realizar un menú que le permita al usuario del sistema:
    
    1. Vender un plato
      
    2. Consultar si algún producto tiene un stock crítico que deba ser recargado
      
    3. Recargar el stock del producto.s