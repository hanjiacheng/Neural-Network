#pragma once

#include "layer.h"

// �Ż���
namespace optimizer {

	using namespace layers;

	template<class T>
	class Optimizer {
	private:
		double learning_rate = 0.001;
	public:
		Optimizer() { ; }
		void optimize(layers::Layer<T> &loss) {
			//for (int i = 1; i < 100; i++) {
			//	loss.backward();
			//}
		}
	};
}