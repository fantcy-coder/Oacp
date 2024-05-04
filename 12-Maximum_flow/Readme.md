Maximum Flow
This repository presents a C++ implementation for determining the maximum flow in a network using the Ford-Fulkerson algorithm.

Problem Overview
The maximum flow problem addresses finding the maximum amount of flow that can be sent from a source node to a sink node in a flow network. In a flow network, nodes (vertices) and directed edges (arcs) with capacities represent the maximum amount of flow that can pass through each edge. The objective is to ascertain the maximum flow that can be transmitted from the source to the sink while adhering to edge capacities and ensuring flow conservation at intermediate nodes.

Algorithm Overview
The Ford-Fulkerson algorithm, a renowned approach for solving the maximum flow problem, functions by iteratively identifying augmenting paths from the source to the sink and incrementing flow along these paths until no more augmenting paths can be found. An augmenting path is a path from the source to the sink where flow can be increased without violating edge capacity constraints.

The algorithm comprises the following steps:

It starts with zero flow and iteratively searches for paths (augmenting paths) from the source to the sink with available capacity. The amount of flow sent along this path is limited by the bottleneck (minimum residual capacity) on the path. This flow is then added to the network, and the process repeats until no more augmenting paths are found, resulting in the maximum achievable flow.
