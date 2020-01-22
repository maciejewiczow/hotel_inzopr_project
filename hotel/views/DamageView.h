#ifndef DAMAGEVIEW_H
#define DAMAGEVIEW_H

namespace hotel {
	class DamageView : hotel::View {


	public:
		void createDamageForm(hotel::Function<hotel::Damage, void> onSubmit);
	};
}

#endif
