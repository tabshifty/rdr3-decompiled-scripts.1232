#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	struct<534> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -89429847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	int iLocal_551 = 0;
	var uLocal_552 = 0;
	int iLocal_553 = 0;
	struct<52> Local_554 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 8;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 1176256512;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 20;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = -1082130432;
	var uLocal_674 = 0;
	var uLocal_675 = 4;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 1;
	var uLocal_721 = 1;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = -1;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 1;
	var uLocal_739 = -1;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = -1;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 1097859072;
	var uLocal_766 = 1000;
	var uLocal_767 = 1067450368;
	var uLocal_768 = 5000;
	var uLocal_769 = 42;
	var uLocal_770 = 1103626240;
	var uLocal_771 = 1077936128;
	var uLocal_772 = 1106247680;
	var uLocal_773 = 1103101952;
	var uLocal_774 = 1097859072;
	var uLocal_775 = 1103626240;
	struct<2> Local_776 = { -1, -1 } ;
	var uLocal_778 = -1;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 100;
	var uLocal_786 = -1082130432;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 5;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	struct<9> Local_797[1];
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	vector3 vLocal_809[24] = "";
	vector3 vLocal_812[24] = "";
	var uLocal_815 = 24;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935 = 0;
	int iLocal_936 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;
	
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var0 = 9;
	Var0.f_28 = 4;
	Var0.f_41 = 25;
	Var0.f_117 = 10;
	Var0.f_175 = -1;
	Var0.f_178.f_8 = -1;
	Var0.f_178.f_17 = 1097859072;
	Var0.f_178.f_18 = 1000;
	Var0.f_178.f_19 = 1067450368;
	Var0.f_178.f_20 = 5000;
	Var0.f_178.f_21 = 42;
	Var0.f_178.f_22 = 1103626240;
	Var0.f_178.f_23 = 1077936128;
	Var0.f_178.f_24 = 1106247680;
	Var0.f_178.f_25 = 1103101952;
	Var0.f_178.f_26 = 1097859072;
	Var0.f_178.f_27 = 1103626240;
	Var0.f_206 = 1;
	Var0.f_206.f_13 = 27;
	Var0.f_206.f_338 = 1097859072;
	Var0.f_206.f_339 = 1101004800;
	Var0.f_206.f_366 = 4;
	Var0.f_643 = 24;
	Var0.f_741 = 1092616192;
	Var0.f_742 = 1094713344;
	Var0.f_744 = -1082130432;
	Var0.f_745 = 1103626240;
	Var0.f_748 = -1;
	Var0.f_749 = -1;
	Var0.f_750 = -1;
	Var0.f_751 = -1;
	Var0.f_752 = -1;
	Var0.f_753.f_3 = 27;
	Var0.f_753.f_3.f_1.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_355.f_15 = 1;
	Var0.f_753.f_371 = 30;
	Var0.f_753.f_371.f_1 = -1;
	Var0.f_753.f_371.f_1.f_2 = 1;
	Var0.f_753.f_371.f_1.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_912 = 8;
	Var0.f_753.f_1241 = 8;
	Var0.f_753.f_1241.f_1.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1418 = 11;
	Var0.f_753.f_1529 = 2;
	Var0.f_753.f_1564 = 2;
	Var0.f_753.f_1581 = -1;
	Var0.f_753.f_1584 = -1;
	Var0.f_753.f_1585 = -1082130432;
	Var0.f_753.f_1667 = 24;
	Var0.f_753.f_1791 = -1;
	Var0.f_2605 = 15;
	Var0.f_2605.f_241 = 15;
	Var0.f_2605.f_482 = 16;
	Var0.f_2605.f_739 = 2;
	Var0.f_2605.f_772 = 3;
	Var0.f_174 = ScriptParam_0;
	if (ScriptParam_0.f_1)
	{
		func_1(&(Var0.f_172), 4096);
	}
	else
	{
		func_2(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_4(&Var0);
	while (true)
	{
		func_5(&Var0);
		if (func_6(Var0.f_172, 50331648))
		{
			func_7(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					func_8(&Var0);
					break;
				
				case 1:
					func_9(&Var0);
					break;
				
				case 3:
					func_10(&Var0);
					break;
				
				case 4:
					func_11(&Var0);
					break;
				
				case 2:
					func_12(&Var0);
					break;
				
				case 5:
					func_13(&Var0);
					break;
				
				case 6:
					func_14(&Var0);
					break;
				
				case 7:
					func_15(&Var0);
					break;
				
				case 8:
					func_16(&Var0);
					break;
				
				case 9:
					func_17(&Var0, 0);
					break;
				
				case 10:
					func_18(&Var0);
					break;
				
				case 11:
					func_19(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_3(var uParam0)
{
	int iVar0;
	
	if (&Global_1879534 == 1)
	{
		func_20(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	if (func_6(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		func_21(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_16(uParam0);
		}
		else
		{
			func_17(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		func_22(uParam0);
	}
	func_23(&(uParam0->f_753));
	func_19(uParam0);
}

void func_4(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (uParam0->f_174 == func_24())
	{
		bVar0 = true;
	}
	else if (func_25(uParam0))
	{
		bVar0 = true;
		func_26(uParam0, 128);
	}
	if (bVar0)
	{
		func_26(uParam0, 64);
		if (func_27())
		{
			func_26(uParam0, 128);
		}
		func_28(0, 0);
	}
	if (func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!func_30(uParam0, 64))
	{
		func_31(uParam0->f_174, 1);
		func_32(uParam0->f_174, 1);
	}
	func_33(uParam0->f_174);
	func_34(uParam0);
	func_35(uParam0);
	func_36(uParam0, 0, 0, 0, -1, -1, 0);
	func_37(uParam0, 0, 0, 0, -1, -1, 0);
	func_38(&(uParam0->f_178));
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 != 0)
	{
		func_39(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, 7);
	}
	func_40(uParam0);
	func_41(uParam0, 1);
	iVar1 = func_42(uParam0);
	if (!func_6(uParam0->f_172, 8388608) && func_43(uParam0))
	{
		iVar1 = 4;
	}
	if (!func_44(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !func_43(uParam0))
		{
			func_45(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		}
	}
	func_46();
	func_47(uParam0, iVar1);
}

void func_5(var uParam0)
{
	int iVar0;
	
	if (func_6(uParam0->f_172, 50331648))
	{
		return;
	}
	if (func_48())
	{
		func_1(&(uParam0->f_172), 16777216);
		if (!func_6(uParam0->f_172, 8))
		{
			func_49(uParam0, 14);
		}
		return;
	}
	else if (func_50())
	{
		func_1(&(uParam0->f_172), 33554432);
		if (!func_6(uParam0->f_172, 8))
		{
			func_49(uParam0, 15);
		}
		return;
	}
	if (func_51(uParam0))
	{
		return;
	}
	func_2(&(uParam0->f_172), 64);
	func_2(&(uParam0->f_172), 128);
	if (func_6(uParam0->f_172, 67108864))
	{
		func_52(1);
		func_2(&(uParam0->f_172), 67108864);
	}
	func_53(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (func_6(uParam0->f_172, 4096))
	{
		iVar0 = func_54(0);
		if (!func_55(iVar0) || ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15 == iVar0)
		{
			func_2(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!func_6(uParam0->f_172, 8) && func_56())
	{
		if (uParam0->f_174 != 59 || !func_57(97))
		{
			if (uParam0->f_174 != 155 || !func_57(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (func_6(uParam0->f_172, 8))
		{
			if (func_58(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_47(uParam0, 9);
					return;
				}
			}
			else if (func_59(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_47(uParam0, 8);
					return;
				}
			}
			if (!func_6(uParam0->f_172, 131072))
			{
				if (!Global_1935630->f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!func_6(uParam0->f_172, 268435456))
			{
				func_60();
			}
			if (!func_6(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!func_6(uParam0->f_172, 1073741824))
			{
				func_61(1, 0);
			}
			func_62(uParam0);
		}
		else if (!func_30(uParam0, 64) && !func_25(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(func_63(uParam0->f_174), Global_36);
			if (func_64(uParam0))
			{
				if (func_65(uParam0) == 2 || func_65(uParam0) == 12)
				{
					func_19(uParam0);
					return;
				}
				func_66(uParam0);
				func_47(uParam0, 10);
				return;
			}
			else
			{
				func_67(uParam0);
			}
			func_68(uParam0);
		}
	}
	func_69(uParam0);
	if (func_6(uParam0->f_172, 32))
	{
		func_71(uParam0, func_70(uParam0));
	}
	else if (func_6(uParam0->f_172, 8))
	{
		if (func_72(uParam0))
		{
		}
	}
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_7(var uParam0)
{
	if (func_6(uParam0->f_172, 8))
	{
		func_17(uParam0, 0);
	}
	else
	{
		if (!func_73(&(uParam0->f_2597)))
		{
			func_74(&(uParam0->f_2597), 0);
		}
		func_75(uParam0);
		if (func_76(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				func_22(uParam0);
			}
			else
			{
				func_66(uParam0);
			}
			func_19(uParam0);
		}
	}
}

void func_8(var uParam0)
{
	if (!func_77(64))
	{
		return;
	}
	if (func_78())
	{
		if (Global_1310720->f_6)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_1879534 && func_25(uParam0))
	{
		return;
	}
	if (func_6(uParam0->f_172, 8192))
	{
		func_47(uParam0, 1);
	}
}

void func_9(var uParam0)
{
	if (func_79(uParam0))
	{
		if (func_30(uParam0, 64))
		{
			func_80(uParam0);
			func_47(uParam0, 2);
			func_72(uParam0);
		}
		else if (func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			func_47(uParam0, 3);
		}
		else
		{
			func_81(uParam0);
			func_47(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	
	if (!func_73(&(uParam0->f_2585)) || IntToFloat(func_76(&(uParam0->f_2585))) > func_82(uParam0))
	{
		func_74(&(uParam0->f_2585), 1);
		iVar0 = func_83(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_80(uParam0);
				func_72(uParam0);
			}
			func_47(uParam0, iVar0);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;
	
	if (!func_77(64))
	{
		return;
	}
	if (func_78())
	{
		return;
	}
	else if (func_84(&Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_85(uParam0);
	if (func_86(uParam0))
	{
		func_80(uParam0);
		iVar0 = func_87(uParam0);
		if (iVar0 == 5)
		{
			func_88(uParam0, 4);
			func_13(uParam0);
			if (uParam0->f_177 == 6)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 5;
			}
		}
		else if (iVar0 == 6)
		{
			func_88(uParam0, 4);
			func_14(uParam0);
		}
		else if (iVar0 == 7)
		{
			MISC::_0xA565FAC215CBC77D();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (func_25(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		func_72(uParam0);
		func_47(uParam0, iVar0);
	}
}

void func_12(var uParam0)
{
	if (!func_6(uParam0->f_172, 8192))
	{
		return;
	}
	func_47(uParam0, func_90(uParam0, func_89(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::_0x297B72E2AF094742(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		func_91(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_13(var uParam0)
{
	if (func_92(uParam0))
	{
		func_14(uParam0);
		func_47(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	
	func_93(uParam0);
	if (func_94(&(uParam0->f_2575)))
	{
		if (func_95(uParam0))
		{
			func_96(uParam0, 1);
			iVar0 = func_97(uParam0);
			func_47(uParam0, iVar0);
		}
	}
	else
	{
		func_2(&(uParam0->f_172), 16);
		func_96(uParam0, 0);
		iVar0 = func_97(uParam0);
		func_47(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	
	if (func_98(uParam0))
	{
		return;
	}
	if (func_6(uParam0->f_172, 262144))
	{
		func_100(uParam0, func_99(uParam0));
	}
	iVar0 = func_101(uParam0);
	if (iVar0 == 5)
	{
		func_88(uParam0, 7);
		func_13(uParam0);
		if (uParam0->f_177 == 6)
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 5;
		}
	}
	else if (iVar0 == 6)
	{
		func_88(uParam0, 7);
		func_14(uParam0);
	}
	func_47(uParam0, iVar0);
}

void func_16(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;
	
	if (uParam0->f_177 != 8)
	{
		func_47(uParam0, 8);
	}
	if (func_6(uParam0->f_172, 32768))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
			return;
		}
		if (MISC::_0x1B065A2BF7953815(1) == 1)
		{
			return;
		}
	}
	if (func_65(uParam0) != 0)
	{
		func_49(uParam0, 0);
		if (func_102(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			if (!STATS::_0x01F4D242765C6B24(func_103(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
				STATS::_0xCA41E86545413B5B(func_104(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_105(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_106(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_103(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), Global_36);
			}
			if (!STATS::_0x01F4D242765C6B24(func_103(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_103(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), 0);
			}
		}
		if (func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 262144))
		{
			func_107();
			func_108(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0);
		}
		func_109(uParam0->f_174, 1);
		func_110(uParam0);
		func_112(func_111(), 0);
		if (func_6(uParam0->f_172, 8))
		{
			func_113(uParam0, 0, 1);
			if (func_114(uParam0->f_174, 128))
			{
				func_115(uParam0->f_174, 128);
			}
		}
		func_116(uParam0);
		if (!func_6(uParam0->f_172, 32768) || !func_6(uParam0->f_172, 65536))
		{
			if (func_6(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				func_46();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				func_117(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
				func_118();
				func_119(Global_1935630, 8);
			}
			MemCopy(&vVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_1}, 3);
			StringConCat(&vVar0, "_obj", 24);
			if (!func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4))
			{
				if (!func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&vVar0))
					{
						func_120(uParam0, &vVar0, 1, 7500, 0, 0, -1082130432, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = func_121();
			func_122(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (func_6(uParam0->f_172, 8))
			{
				iVar4 = func_89(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = func_103(func_123(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = func_65(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = func_124(0);
				TELEMETRY::_0xD894437E12C17AEC(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), &Var5);
				bVar12 = false;
				if (bVar12)
				{
					func_125();
					func_126();
				}
			}
		}
	}
	if (!func_6(uParam0->f_172, 32768) || !func_6(uParam0->f_172, 65536))
	{
		if (func_25(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_127();
			func_128(0);
		}
		else if (func_6(uParam0->f_172, 32768))
		{
			func_129(1, 1);
			func_1(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (func_6(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_130(1);
		func_131();
		func_132(6);
		func_133(4096);
	}
	func_66(uParam0);
	if (func_6(uParam0->f_172, 32768) || func_25(uParam0))
	{
		func_19(uParam0);
	}
	func_47(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
{
	int iVar0;
	struct<7> Var1;
	
	func_47(uParam0, 9);
	if (func_65(uParam0) != 1)
	{
		func_49(uParam0, 1);
		if (func_114(uParam0->f_174, 128))
		{
			func_115(uParam0->f_174, 128);
		}
		func_134(uParam0);
	}
	if (func_6(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	func_109(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == func_24())
		{
			func_125();
			func_126();
		}
	}
	if (func_6(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_46();
		func_119(Global_1935630, 8);
	}
	if (func_135(&(uParam0->f_2605)))
	{
		func_136(uParam0);
	}
	func_137(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
	if (!func_6(uParam0->f_172, 50331648))
	{
		if (func_6(uParam0->f_172, 8))
		{
			iVar0 = func_89(uParam0);
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			Var1 = func_103(func_123(uParam0->f_174));
			Var1.f_1 = 0;
			Var1.f_2 = iVar0;
			Var1.f_3 = func_65(uParam0);
			Var1.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			Var1.f_5 = Global_40.f_7729;
			Var1.f_6 = func_124(0);
			TELEMETRY::_0xD894437E12C17AEC(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), &Var1);
		}
	}
	if (func_6(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_66(uParam0);
	}
	if (bParam1)
	{
		func_19(uParam0);
	}
	else
	{
		func_47(uParam0, 10);
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37);
		uParam0->f_743 = BUILTIN::VDIST2(func_63(uParam0->f_174), Global_36);
		func_138(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (func_139(64, 1, 1))
	{
		iVar1 = func_54(0);
		if (func_55(iVar1))
		{
			func_22(uParam0);
			func_19(uParam0);
			return;
		}
	}
	if (func_140(uParam0) && func_141())
	{
		func_22(uParam0);
		func_19(uParam0);
	}
	else if (!func_73(&(uParam0->f_2585)) || IntToFloat(func_76(&(uParam0->f_2585))) > func_142(uParam0))
	{
		func_74(&(uParam0->f_2585), 1);
		if (func_143(uParam0))
		{
			func_47(uParam0, 11);
		}
	}
}

void func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_144(uParam0);
	func_145(uParam0->f_751);
	func_146(uParam0);
	func_147(uParam0);
	func_148(uParam0);
	func_149(uParam0->f_174);
	func_150(uParam0->f_174);
	func_151(2);
	iVar0 = 0;
	bVar2 = false;
	if (func_152(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		func_153(iVar1, 1, -1082130432, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (func_65(uParam0) == 2)
	{
		func_20(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	else
	{
		func_154(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), 1, 0, 1);
	}
	((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	func_155(uParam0);
	func_156(uParam0);
	if (func_65(uParam0) == 0)
	{
		func_157(uParam0->f_174);
	}
	if (func_65(uParam0) == 2 || func_65(uParam0) == 12)
	{
		func_158(uParam0->f_174);
	}
	if (func_159(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		func_160(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 0, 2);
	}
	func_96(uParam0, 0);
	if (func_6(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	func_2(&(uParam0->f_172), 8);
	func_161(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_161(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_35 != -1)
	{
		func_162(uParam0->f_174, 0);
	}
	if (func_65(uParam0) == 12)
	{
		func_109(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && func_54(0) == Global_1888801[16 /*35*/])
		{
			func_163(uParam0->f_174, 8192);
		}
	}
	func_164(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 32768);
	func_165(uParam0);
	func_46();
	func_166(0);
	func_166(1);
	func_167(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_20(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_21(var uParam0, int iParam1)
{
}

void func_22(var uParam0)
{
}

void func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2));
				if (func_168(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), 0, 1);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), true);
				}
			}
		}
		iVar0++;
	}
}

int func_24()
{
	return func_170(func_169());
}

int func_25(var uParam0)
{
	if (func_171(32768) && func_44(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 8192))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 || iParam1);
}

bool func_27()
{
	return Global_1572864->f_13;
}

void func_28(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

bool func_29(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_30(var uParam0, int iParam1)
{
	return (uParam0->f_173 && iParam1) != 0;
}

int func_31(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_21 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_22 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 128 != 0)
	{
		return 1;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_45 = func_172(((*Global_1347702)[iParam0 /*49*/])->f_24, 1);
	func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 128);
	return 1;
}

void func_34(var uParam0)
{
	func_1(&(uParam0->f_172), 16384);
	func_173(uParam0, 2);
	func_174(uParam0, 2);
	func_175(uParam0, 2);
	func_176(&Local_14, 1);
	if (uParam0->f_174 == 151)
	{
		func_177(558.8349f, 168.3936f, 133.3486f, 40f, 1);
		func_178(131072);
		func_178(2048);
		func_179(&(uParam0->f_206), 80f);
		func_180(&(uParam0->f_206), 65f);
		func_178(1024);
		func_181(11);
		func_181(12);
		func_181(13);
		func_182(0);
	}
	else
	{
		if (func_183())
		{
			func_182(2);
		}
		else
		{
			func_182(2);
		}
		func_181(11);
		func_181(12);
		func_181(13);
	}
	func_184();
	func_185(uParam0, 0);
	func_188(&(Local_14.f_477), func_186(&Local_554), func_187(&Local_554));
}

void func_35(var uParam0)
{
	if (uParam0->f_748 == -1)
	{
		if (!func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_748 = 5;
		}
	}
	if (uParam0->f_748 > 0)
	{
		PED::_0xED9582B3DA8F02B4(uParam0->f_748);
	}
}

void func_36(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2603))
	{
		if (uParam0->f_741 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopMoveRestrict", 64);
		vVar8 = { uParam0->f_741, uParam0->f_741, uParam0->f_741 };
		uParam0->f_2603 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_63(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2603))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_2603, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_37(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2604))
	{
		if (uParam0->f_742 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopSpawnRestrict", 64);
		vVar8 = { uParam0->f_742, uParam0->f_742, uParam0->f_742 };
		uParam0->f_2604 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_63(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2604))
	{
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_2604, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_38(var uParam0)
{
	func_189(uParam0);
}

void func_39(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_190(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_191(&(uParam0->f_41));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_41[iVar0 /*3*/] = iParam1;
	(uParam0->f_41[iVar0 /*3*/])->f_2 = ((uParam0->f_41[iVar0 /*3*/])->f_2 || iParam2);
	if (func_6(uParam0->f_172, 8192))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

void func_40(var uParam0)
{
	func_192(&(Local_14.f_20), 1);
	if (func_193())
	{
		func_194(uParam0, 0);
		StringCopy(&cLocal_809, "REHCAUD", 24);
		StringCopy(&cLocal_812, "REHC_RC1_LIB", 24);
		if (HUD::_0x2C729F2B94CEA911(&cLocal_809))
		{
			HUD::_0xF66090013DE648D5(&cLocal_809);
		}
	}
	func_188(&(Local_14.f_477), func_186(&Local_554), func_187(&Local_554));
}

void func_41(var uParam0, int iParam1)
{
	if (func_195(uParam0) == iParam1)
	{
		return;
	}
	func_196(uParam0, uParam0->f_168, iParam1);
	uParam0->f_168 = iParam1;
	func_2(&(uParam0->f_172), 8192);
}

int func_42(var uParam0)
{
	func_188(&(Local_14.f_477), func_186(&Local_554), func_187(&Local_554));
	if (func_197(131072))
	{
		return 0;
	}
	return 3;
}

int func_43(var uParam0)
{
	if (func_30(uParam0, 64))
	{
		return 0;
	}
	if ((func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_198(uParam0->f_174))
	{
		return 1;
	}
	return 0;
}

bool func_44(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_45(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_46()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_47(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_177)
	{
		func_88(uParam0, uParam0->f_177);
		uParam0->f_177 = iParam1;
	}
}

int func_48()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 1;
	}
	else if (Global_1935630->f_12)
	{
		return 1;
	}
	else if (PED::IS_PED_FATALLY_INJURED(Global_35))
	{
		return 1;
	}
	else if (ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		return 1;
	}
	return 0;
}

void func_49(var uParam0, int iParam1)
{
	if (uParam0->f_175 != iParam1)
	{
		uParam0->f_175 = iParam1;
	}
}

int func_50()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return 1;
	}
	return 0;
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch (func_199(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_17(uParam0, 0);
			return 1;
		
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((func_55(iVar0) && iVar0 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15) && func_6(uParam0->f_172, 8)) && (!func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728) || func_171(32768)))
			{
				iVar1 = 1;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, iVar1);
			break;
	}
	return 0;
}

void func_52(bool bParam0)
{
	func_200(bParam0);
	func_201(bParam0);
}

void func_53(var uParam0)
{
	if (func_6(uParam0->f_172, 8192))
	{
		return;
	}
	if (uParam0->f_168 == 0)
	{
		return;
	}
	if (func_202(uParam0, uParam0->f_168))
	{
		func_1(&(uParam0->f_172), 8192);
	}
}

int func_54(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_55(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_56()
{
	int iVar0;
	
	iVar0 = func_54(0);
	if ((func_55(iVar0) && func_104(iVar0) == 8) && func_29(((*Global_1347702)[func_105(iVar0) /*49*/])->f_12, 131072))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_203() != -1)
	{
		return 0;
	}
	if (!func_204(iParam0))
	{
		return 0;
	}
	return func_159(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_58(var uParam0)
{
	return 0;
}

int func_59(var uParam0)
{
	return 0;
}

void func_60()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1352191066, 3, 3, 1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1171995096, 4, 0, -1);
}

void func_61(bool bParam0, bool bParam1)
{
	if (CAM::_0x450769C833D58844() && (!bParam0 || !CAM::IS_CINEMATIC_CAM_RENDERING()))
	{
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		if (!bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 1287709438, false);
			if (Global_1935689->f_1 || &Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

void func_62(var uParam0)
{
}

Vector3 func_63(int iParam0)
{
	vector3 vVar0;
	
	if (!func_204(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_205(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_77(64))
	{
		return 0;
	}
	else if (func_84(&Global_1935630, 131072))
	{
		return 0;
	}
	else if (func_78())
	{
		return 0;
	}
	else if (Global_1310720->f_6)
	{
		return 0;
	}
	else if (func_44(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		return 0;
	}
	if (func_139(0, 1, 0))
	{
		iVar0 = func_54(0);
		if (func_55(iVar0) && func_206(uParam0, iVar0))
		{
		}
		else
		{
			func_49(uParam0, 12);
			return 1;
		}
	}
	if (func_207(uParam0->f_174))
	{
		func_49(uParam0, 13);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (((*Global_1347702)[uParam0->f_174 /*49*/])->f_17 * ((*Global_1347702)[uParam0->f_174 /*49*/])->f_17))
		{
			func_49(uParam0, 2);
			return 1;
		}
	}
	if (!func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_198(uParam0->f_174))
	{
		func_208(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_49(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_209(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_210(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_163(uParam0->f_174, 32768);
				}
				func_49(uParam0, 5);
				return 1;
			}
			else if (func_211(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_163(uParam0->f_174, 32768);
				}
				func_49(uParam0, 5);
				return 1;
			}
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_45 != -1)
	{
		if (func_210(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
		{
			func_163(uParam0->f_174, 2048);
			func_49(uParam0, 6);
			return 1;
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_46 != 0)
	{
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 268435456 == 0)
		{
			iVar2 = func_212();
			if (!func_213(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
			{
				func_49(uParam0, 7);
				return 1;
			}
		}
	}
	if (Global_1357549->f_1614 == 1)
	{
		func_49(uParam0, 8);
		return 1;
	}
	if (!func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		if (func_214(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_163(uParam0->f_174, 16384);
			func_49(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_215(uParam0->f_174, 1, 1, 0, 0))
	{
		func_49(uParam0, 10);
		return 1;
	}
	if (func_216(uParam0) || func_217(uParam0->f_174, uParam0->f_743))
	{
		func_163(uParam0->f_174, 1024);
		func_49(uParam0, 11);
		return 1;
	}
	if (!func_218(uParam0) && func_219(uParam0->f_743))
	{
		func_163(uParam0->f_174, 8192);
		func_49(uParam0, 11);
		return 1;
	}
	return 0;
}

int func_65(var uParam0)
{
	return uParam0->f_175;
}

void func_66(var uParam0)
{
	bool bVar0;
	
	func_220();
	func_221(uParam0);
	if (func_6(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (func_65(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			func_118();
			if (func_65(uParam0) == 1)
			{
				func_222(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_52(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_223(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			func_224(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, true);
		}
	}
	if (func_65(uParam0) == 3)
	{
		func_225(uParam0->f_174);
	}
	else if (func_65(uParam0) == 2)
	{
	}
	else if (!func_152(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 2))
	{
		func_109(uParam0->f_174, 0);
	}
	func_158(uParam0->f_174);
	if (func_65(uParam0) == 0)
	{
		func_157(uParam0->f_174);
		func_226(uParam0);
	}
	func_146(uParam0);
	func_227(0);
	func_96(uParam0, 0);
	func_41(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_161(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_161(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_45(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_228(&(uParam0->f_2585));
	func_229(uParam0);
}

void func_67(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	vVar0 = { func_63(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = func_230(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_231(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_232(uParam0->f_174, fVar3);
		func_233(uParam0->f_174, vVar0, fVar3);
		func_234(uParam0->f_174);
		func_235(uParam0->f_174);
	}
}

void func_68(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	
	if (func_30(uParam0, 64))
	{
		return;
	}
	if (func_6(uParam0->f_172, 256))
	{
		if ((func_6(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !func_43(uParam0))
		{
			func_2(&(uParam0->f_172), 256);
			func_145(uParam0->f_751);
			func_236(uParam0);
		}
		else
		{
			func_237(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_43(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_238() };
				Var8 = { func_239(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_240(&(uParam0->f_206));
					func_241(&(uParam0->f_206), &cVar0);
				}
			}
			func_1(&(uParam0->f_172), 256);
		}
	}
}

void func_69(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (!func_6(uParam0->f_172, 16))
	{
		return;
	}
	if (func_242(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_63(uParam0->f_174) };
	}
	bVar0 = func_243(uParam0);
	if (!bVar0)
	{
		if (func_6(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (func_94(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (func_25(uParam0))
			{
				bVar1 = false;
			}
			else if (func_44(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (func_244(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_245(uParam0);
				func_1(&(uParam0->f_172), 1);
			}
		}
		else if (func_6(uParam0->f_172, 1))
		{
			func_2(&(uParam0->f_172), 1);
		}
	}
	else if (!func_6(uParam0->f_172, 1))
	{
		func_1(&(uParam0->f_172), 1);
	}
}

int func_70(var uParam0)
{
	return uParam0->f_169;
}

void func_71(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_6(uParam0->f_172, 32))
	{
		return;
	}
	if (uParam0->f_2605.f_785 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_785)
		{
			if (func_246(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_247(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_248(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_249(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_250(uParam0->f_2605[iVar0 /*16*/]);
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_786 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_786)
		{
			if (func_246(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_251(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_252(uParam0->f_2605.f_241[iVar0 /*16*/]);
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_787 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_787)
		{
			if (func_246(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_251(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_253(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_246(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_254(&(uParam0->f_2605));
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_72(var uParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "RCM_", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_1), 64);
	if (func_255(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_73(var uParam0)
{
	return func_256(*uParam0, 1);
}

void func_74(var uParam0, int iParam1)
{
	if (iParam1 || !func_73(uParam0))
	{
		func_257(uParam0);
	}
}

void func_75(var uParam0)
{
}

int func_76(var uParam0)
{
	if (!func_73(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_258(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_259() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_77(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_78()
{
	return func_84(&Global_1935630, 4096);
}

int func_79(var uParam0)
{
	if (func_44(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		return 1;
	}
	if (func_260(uParam0) && func_261(uParam0))
	{
		func_45(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		return 1;
	}
	return 0;
}

void func_80(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_262(uParam0->f_174), func_263(uParam0->f_174)))
		{
			func_264(uParam0->f_174, 128);
		}
		else
		{
			func_115(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_262(uParam0->f_174), func_263(uParam0->f_174)))
			{
				func_265(uParam0->f_174);
				func_266(uParam0->f_174);
			}
		}
		else
		{
			func_267(Global_1347702[uParam0->f_174 /*49*/]);
			func_265(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_262(uParam0->f_174), func_263(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_262(uParam0->f_174), func_263(uParam0->f_174), 0, "");
		}
	}
	if (!func_159(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_268(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_269(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_270(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_271(Global_1935630, 8);
	}
	bVar0 = true;
	if (func_30(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_109(uParam0->f_174, 0);
	}
	func_272(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_52(0);
		LAW::_0x55F37F5F3F2475E1();
		LAW::_0x292AD61A33A7A485();
		func_273(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_113(uParam0, 1, 0);
	func_223(1);
	func_227(1);
	func_274();
	func_148(uParam0);
	func_149(uParam0->f_174);
	func_150(uParam0->f_174);
	func_275(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_276(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, false);
	}
	if (func_43(uParam0))
	{
		func_1(&(uParam0->f_172), 256);
	}
	if (func_6(uParam0->f_172, 8388608) || !func_6(uParam0->f_172, 256))
	{
		func_41(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	HUD::SET_MISSION_NAME(true, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::_0x33D51F801CB16E4F();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_277(uParam0);
	iVar1 = 0;
	TELEMETRY::_0x15B0CC1B36F1DE29(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar1, func_30(uParam0, 64));
}

void func_81(var uParam0)
{
	func_278(uParam0, 0);
	StringCopy(&(uParam0->f_2575), "rehc_rc1", 24);
	func_1(&(uParam0->f_172), 16);
}

float func_82(var uParam0)
{
	if (iLocal_551 != 3)
	{
		return 0f;
	}
	if (func_279(Global_35, Local_14.f_7, 40f, 1) || Local_14.f_203 == 3)
	{
		return 0f;
	}
	return 1000f;
}

int func_83(var uParam0)
{
	func_188(&(Local_14.f_477), func_186(&Local_554), func_187(&Local_554));
	if (!func_197(131072))
	{
		if (func_280())
		{
			return 8;
		}
	}
	if ((((func_281(uParam0) && !func_282(&Local_14, 2)) && !func_282(&Local_14, 38)) && !func_282(&Local_14, 65)) && !func_197(128))
	{
		return 8;
	}
	if (func_283())
	{
		if (func_282(&Local_14, 2))
		{
			return 9;
		}
		else if (func_282(&Local_14, 3) || (func_197(131072) && func_284() != 0))
		{
			return 8;
		}
		else if (func_282(&Local_14, 4))
		{
			return 11;
		}
	}
	return 3;
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_85(var uParam0)
{
}

int func_86(var uParam0)
{
	bool bVar0;
	
	if (func_25(uParam0))
	{
		return 1;
	}
	bVar0 = false;
	if (func_6(uParam0->f_172, 4096) || func_56())
	{
		bVar0 = true;
	}
	if (func_44(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		if (!bVar0)
		{
			return 1;
		}
	}
	if (func_6(uParam0->f_172, 262144) && !func_6(uParam0->f_172, 256))
	{
		func_100(uParam0, bVar0);
		if (func_6(uParam0->f_172, 524288))
		{
			return 1;
		}
		else if (func_6(uParam0->f_172, 1048576))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (bVar0)
		{
			return 0;
		}
		if (uParam0->f_171 != 0 || func_285(uParam0))
		{
			if (func_286(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_87(var uParam0)
{
	if (func_197(131072))
	{
		return 5;
	}
	return 3;
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_176)
	{
		uParam0->f_176 = iParam1;
	}
}

int func_89(var uParam0)
{
	if (uParam0->f_174 == func_24())
	{
		return func_287();
	}
	return -1;
}

int func_90(var uParam0, var uParam1)
{
	return 7;
}

void func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!func_139(0, 0, 1) || iParam0)
	{
		iVar0 = func_288();
		iVar1 = func_289(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_290(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_290(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

int func_92(var uParam0)
{
	if (func_44(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!func_6(uParam0->f_172, 1))
		{
			return 0;
		}
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return 0;
		}
		MISC::_0xA565FAC215CBC77D();
		return 1;
	}
	if (func_6(uParam0->f_172, 256))
	{
		if (!func_291(uParam0))
		{
			if ((func_6(uParam0->f_172, 8192) && ANIMSCENE::_0x25557E324489393C(uParam0->f_751)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_751, 0))
			{
				if (func_6(uParam0->f_172, 8388608) || func_79(uParam0))
				{
					func_41(uParam0, 2);
					if (!func_6(uParam0->f_172, 16))
					{
						func_81(uParam0);
					}
				}
			}
			return 0;
		}
	}
	else if (func_6(uParam0->f_172, 262144) && !func_6(uParam0->f_172, 256))
	{
		func_100(uParam0, 0);
		if (!func_6(uParam0->f_172, 1048576))
		{
			return 0;
		}
	}
	else
	{
		func_292();
		func_293(uParam0);
		if (!func_294(uParam0))
		{
			return 0;
		}
	}
	if (!func_6(uParam0->f_172, 1))
	{
	}
	return 1;
}

void func_93(var uParam0)
{
	if (func_6(uParam0->f_172, 2048))
	{
		return;
	}
	if (func_94(&(uParam0->f_2575)))
	{
		func_295(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_296(uParam0, 0);
		}
	}
	func_2(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_297(Global_35))
		{
			if (func_298())
			{
				func_299(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_1(&(uParam0->f_172), 2048);
}

int func_94(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return 1;
}

int func_95(var uParam0)
{
	struct<4> Var0;
	
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_300(Var0, &(uParam0->f_206), uParam0);
}

void func_96(var uParam0, bool bParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_206.f_348))
	{
		if (!ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_206.f_348, 0))
		{
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_206.f_348, 0))
			{
			}
			else if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_206.f_348, 1, 0))
			{
			}
			else if (ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_206.f_348, 1))
			{
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_206.f_348);
		}
	}
	if (bParam1)
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	func_2(&(uParam0->f_172), 1);
	func_2(&(uParam0->f_172), 16);
	func_2(&(uParam0->f_172), 2048);
	if (func_94(&(uParam0->f_2575)))
	{
		func_301(&(uParam0->f_206));
	}
	func_302(&(uParam0->f_206));
	func_303(uParam0);
}

int func_97(var uParam0)
{
	struct<4> Var0;
	
	if (func_197(131072))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[3])))
		{
			Var0 = { func_304(3) };
			ENTITY::_0x203BEFFDBE12E96A(&(Local_14.f_90[3]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_14.f_90[2]), Var0), func_305((ENTITY::GET_ENTITY_HEADING(&(Local_14.f_90[2])) + Var0.f_3.f_2)), 1, false, 1);
			ENTITY::PLAY_ENTITY_ANIM(&(Local_14.f_90[3]), "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
		}
		func_306(&(Local_14.f_284), 1);
		func_307();
		func_308(0);
		func_162(151, 1);
		PED::SET_PED_CAPSULE(Local_14.f_7, 0f);
		func_309(1024);
		return 8;
	}
	return 3;
}

int func_98(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_291(uParam0))
		{
			if (func_6(uParam0->f_172, 512) && func_6(uParam0->f_172, 8192))
			{
				if (func_79(uParam0))
				{
					if (!func_6(uParam0->f_172, 16))
					{
						func_81(uParam0);
					}
				}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_99(var uParam0)
{
	return 0;
}

void func_100(var uParam0, bool bParam1)
{
	if (!func_6(uParam0->f_172, 262144))
	{
		return;
	}
	if (func_6(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		func_2(&(uParam0->f_172), 262144);
		return;
	}
	if (!func_6(uParam0->f_172, 1048576))
	{
		if (func_310(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_311(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_101(var uParam0)
{
	return 7;
}

bool func_102(int iParam0)
{
	return func_312(iParam0) == 0;
}

int func_103(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_104(int iParam0)
{
	if (!func_55(iParam0))
	{
		return 0;
	}
	return func_314(func_313(iParam0));
}

int func_105(int iParam0)
{
	if (!func_55(iParam0))
	{
		return -1;
	}
	return func_315(func_313(iParam0));
}

int func_106(int iParam0)
{
	if (!func_55(iParam0))
	{
		return -1;
	}
	return func_316(func_313(iParam0));
}

void func_107()
{
	struct<2> Var0;
	
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(Global_1879514, &Var0, 20);
}

void func_108(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_109(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_317(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_161(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_318(iParam0);
		if ((!func_214(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::_0x2F901291EF177B02(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_161(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_319(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_163(iParam0, 16384);
			func_320(iParam0, 1, func_63(iParam0));
		}
	}
}

void func_110(var uParam0)
{
	func_321(1, &(uParam0->f_2605.f_482));
}

int func_111()
{
	return Global_1894899->f_2;
}

void func_112(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!func_322(iParam0))
	{
		return;
	}
	bVar0 = func_323(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_324(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_326(iParam0, func_325());
			func_327(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_328(iParam0, 67108864);
		func_326(iParam0, -15);
	}
	func_329(iParam0);
}

void func_113(var uParam0, int iParam1, int iParam2)
{
	if (func_330(0))
	{
		if (func_331(0))
		{
			func_332(0);
		}
	}
	if (func_330(1))
	{
		if (func_331(1))
		{
			func_332(1);
		}
	}
}

bool func_114(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_115(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_116(var uParam0)
{
}

void func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_104(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_105(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_204(iVar1))
			{
				if (func_114(iVar1, 4))
				{
					func_222(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_333(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_105(iParam0);
		if (iVar3 == 59)
		{
			func_333(1);
		}
		else if (iVar3 == 61)
		{
			func_333(0);
		}
		else if (iVar3 == 83)
		{
			func_333(0);
		}
	}
}

void func_118()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_204(iVar0))
		{
			if (func_114(iVar0, 4))
			{
				if (func_114(iVar0, 16))
				{
					func_334(iVar0, 1);
				}
				if (func_114(iVar0, 8))
				{
					func_335(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_120(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;
	
	func_336(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_337(sParam1))
	{
		func_338(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
}

var func_121()
{
	return Global_1572864->f_15;
}

void func_122(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	var uVar0;
	
	if (!func_204(iParam0))
	{
		return;
	}
	if (func_339())
	{
		func_264(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!func_171(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -1044347982))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_339())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_340(iParam0, 0, iParam3);
	if (func_204(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_341(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_342(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_343(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_344();
	}
	if (!func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_345(iParam0);
			}
			bParam5 = false;
			uVar0 = func_346(((*Global_1347702)[iParam0 /*49*/])->f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uVar0), 2);
			}
			func_164(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 4);
	}
	if (!func_171(32768))
	{
		func_347(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_348(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_349(iParam0);
}

int func_123(int iParam0)
{
	if (!func_204(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_124(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_125()
{
	int iVar0;
	
	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

void func_126()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_351(0);
	func_352(0);
	func_353(0);
	func_354(0);
	func_355(0);
	func_356(1f);
}

void func_127()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	func_133(4112);
	func_132(6);
	vVar2 = { func_357(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_358(vVar2, uVar1, uVar0, 0);
	func_359(vVar2);
	Global_40.f_9.f_15 = func_172(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_128(int iParam0)
{
	if (func_203() != -1)
	{
		return;
	}
	func_133(32);
	if (iParam0 == 0)
	{
		func_133(16);
	}
	else if (iParam0 == 1)
	{
		func_133(8);
	}
	func_360();
	Global_43888 = 1;
}

void func_129(int iParam0, bool bParam1)
{
	if (func_203() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_171(32768))
	{
		return;
	}
	if (!func_171(32768))
	{
		func_361(1, bParam1);
	}
	MISC::_0x279B0696DA4657EB(iParam0);
	MISC::_COPY_MEMORY((*Global_2621440)[iParam0 /*12065*/], &Global_40, 12065);
	MISC::_COPY_MEMORY((*Global_2645571)[iParam0 /*5398*/], &Global_12105, 5398);
	MISC::_COPY_MEMORY((*Global_2656368)[iParam0 /*3206*/], &Global_17503, 3206);
	MISC::_COPY_MEMORY((*Global_2662781)[iParam0 /*2408*/], &Global_20709, 2408);
	MISC::_COPY_MEMORY((*Global_2667598)[iParam0 /*1769*/], &Global_23117, 1769);
	MISC::_COPY_MEMORY((*Global_2671137)[iParam0 /*1909*/], &Global_24886, 1909);
	MISC::_COPY_MEMORY((*Global_2674956)[iParam0 /*777*/], &Global_26795, 777);
	MISC::_COPY_MEMORY((*Global_2676511)[iParam0 /*4501*/], &Global_27572, 4501);
	MISC::_COPY_MEMORY((*Global_2685514)[iParam0 /*4234*/], &Global_32073, 4234);
	if (func_171(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_325();
	}
}

void func_130(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_131()
{
	struct<10> Var0;
	struct<16> Var10;
	
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_362(Var10, 0);
}

void func_132(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_133(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_134(var uParam0)
{
}

bool func_135(var uParam0)
{
	return uParam0->f_781;
}

void func_136(var uParam0)
{
	func_363(1, &(uParam0->f_2605.f_482));
}

void func_137(int iParam0)
{
	int iVar0;
	
	if (!func_55(iParam0))
	{
		return;
	}
	if (iParam0 != func_54(0))
	{
		return;
	}
	if (func_103(iParam0) == 0)
	{
	}
	iVar0 = func_104(iParam0);
	if (func_364(iParam0) == 3)
	{
		if (func_103(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(func_103(iParam0)))
		{
			if (func_104(iParam0) != 1 && func_104(iParam0) != 8)
			{
				func_365(func_104(iParam0), func_103(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_366(iParam0);
	func_201(1);
	func_367(0);
	func_368(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_369(1);
			func_370(15, 0, 1);
			break;
		
		case 4:
			func_370(10, 0, 1);
			break;
		
		case 8:
			func_370(10, 0, 1);
			break;
		
		case 9:
			func_370(10, 0, 1);
			break;
		
		case 2:
			func_370(10, 0, 1);
			break;
		
		case 6:
			func_370(10, 0, 1);
			break;
		
		case 5:
			func_370(10, 0, 1);
			break;
	}
	func_371(1);
}

void func_138(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	char* sVar1;
	
	if (!bParam1)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 == 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 == 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		fParam2 = BUILTIN::VDIST2(Global_36, func_372(iParam0));
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 512 != 0)
	{
		if (fParam2 > 225f)
		{
			iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
			if (iVar0 != ((*Global_1347702)[iParam0 /*49*/])->f_39)
			{
				_NAMESPACE71::_0x2F901291EF177B02(((*Global_1347702)[iParam0 /*49*/])->f_39, 0);
			}
			func_161(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
		}
	}
	else if (fParam2 <= 100f)
	{
		if (func_373())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_374(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_374(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_374(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_374(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_374(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_374(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_374(sVar1, 10000, 0, 0, 0, 1);
		}
		func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
	}
}

int func_139(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_375())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_105(&(Global_1898164->f_1[0 /*5*/]));
		if (func_204(iVar0) && func_29(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_55(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return iParam0 & 1 == 0;
		
		case 4:
			return iParam0 & 2 == 0;
		
		case 6:
			return iParam0 & 4 == 0;
		
		case 2:
			return iParam0 & 16 == 0;
		
		case 5:
			return iParam0 & 32 == 0;
		
		case 9:
			return iParam0 & 64 == 0;
		
		case 8:
			return iParam0 & 8 == 0;
		
		case 10:
			return iParam0 & 512 == 0;
		
		case 3:
			return iParam0 & 128 == 0;
		
		case 11:
			return iParam0 & 256 == 0;
		
		default:
			break;
	}
	return 0;
}

int func_140(var uParam0)
{
	return 1;
}

int func_141()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed");
		}
	}
	return 0;
}

float func_142(var uParam0)
{
	return func_82(uParam0);
}

int func_143(var uParam0)
{
	func_188(&(Local_14.f_477), func_186(&Local_554), func_187(&Local_554));
	if (!func_197(128))
	{
		if (func_65(uParam0) == 9)
		{
			func_178(128);
		}
	}
	if (func_281(uParam0))
	{
		return 1;
	}
	if ((((func_197(2048) && !func_282(&Local_14, 2)) && !func_282(&Local_14, 38)) && !func_282(&Local_14, 65)) && !func_197(128))
	{
		return 1;
	}
	if (func_283())
	{
		if ((func_282(&Local_14, 2) || func_282(&Local_14, 3)) || (func_197(131072) && func_284() != 0))
		{
			return 1;
		}
		else if (func_282(&Local_14, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_174 == 151)
	{
		func_376();
	}
	if (uParam0->f_174 == 152)
	{
		if (func_280() && ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
		{
			func_377();
		}
		if (!func_280())
		{
			func_378();
		}
	}
	if (func_6(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	iVar0 = 9;
	while (iVar0 >= 0)
	{
		iVar1 = iVar0;
		func_379(uParam0, iVar1, 1);
		iVar0 = (iVar0 + -1);
	}
	func_380(&Local_14, &Local_554, 1);
	func_308(0);
	func_381(&Local_14);
	CAM::STOP_GAMEPLAY_HINT(false);
	func_382(&Local_776);
	if (!iLocal_935)
	{
		func_154(&(Local_14.f_7), 1, 0, 1);
	}
	func_383(iLocal_928);
	func_384(0);
	if (func_280())
	{
		func_122(151, 1, 1, 1, 1, 1, 0);
		func_122(152, 1, 1, 1, 1, 1, 0);
	}
}

void func_145(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_146(var uParam0)
{
	if (uParam0->f_171 != 0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
		MAP::DISPLAY_RADAR(true);
	}
	uParam0->f_171 = 0;
	uParam0->f_747 = 0;
	func_228(&(uParam0->f_2588));
}

void func_147(var uParam0)
{
	struct<2> Var0;
	
	Var0 = { func_385(uParam0->f_174) };
	if (HUD::_0x2C729F2B94CEA911(&Var0))
	{
		HUD::_0xAA03F130A637D923(&Var0);
	}
	Var0 = { func_386(uParam0->f_174) };
	if (HUD::_0x2C729F2B94CEA911(&Var0))
	{
		HUD::_0xAA03F130A637D923(&Var0);
	}
}

int func_148(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[uParam0->f_174 /*49*/])->f_22))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[uParam0->f_174 /*49*/])->f_22))
	{
		iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_22));
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
		{
			iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			EVENT::_0xA86B0EE9B39D15D6(&iVar2);
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			ANIMSCENE::_0xBC781D24AA11F179(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
		}
		iVar0++;
	}
	return 1;
}

void func_149(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_22);
		((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
	}
}

void func_150(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_21);
	}
}

void func_151(int iParam0)
{
	switch (func_203())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_152(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_153(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_387(iParam0))
	{
		return;
	}
	if (!func_388(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_389(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_390(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_391(iParam0, 0);
	func_392(iParam0);
}

void func_154(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_155(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2603))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_2603);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_2603);
	}
}

void func_156(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2604))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_2604);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_2604);
	}
}

void func_157(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1347702)[iParam0 /*49*/])->f_41))
	{
		func_393(((*Global_1347702)[iParam0 /*49*/])->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::_0xD17672447692478E(((*Global_1347702)[iParam0 /*49*/])->f_41, 0);
		}
		VOLUME::_0x43F867EF5C463A53(((*Global_1347702)[iParam0 /*49*/])->f_41);
	}
}

void func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_394(iParam0, &iVar1, &iVar0))
	{
		if (func_395(iVar1, iVar0, 1))
		{
			func_396(iVar1, iVar0);
		}
	}
}

bool func_159(int iParam0)
{
	int iVar0;
	
	iVar0 = func_312(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_160(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_55(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_159(iParam0) && !func_268(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_103(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_159(iParam0))
	{
		iParam2 = -1;
	}
	if (func_364(iParam0) == 3 || (func_364(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_103(iParam0))))
	{
		func_365(func_104(iParam0), func_103(iParam0), iParam2);
		if ((!func_55(Global_1572864->f_8) && !func_139(0, 1, 0)) && !func_84(&Global_1935630, 32768))
		{
			iVar0 = func_397(iParam0);
			if (iVar0 != -1)
			{
				func_398(0);
			}
			else if (func_104(iParam0) == 8)
			{
				iVar0 = func_399();
				if (iVar0 != -1)
				{
					func_398(0);
				}
			}
		}
	}
	func_368(iParam0, 0);
	if (func_54(0) == iParam0)
	{
		func_201(1);
		func_367(0);
		func_371(1);
	}
	func_400(iParam0, 1);
	func_366(iParam0);
}

void func_161(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_35;
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 == 1)
	{
		func_45(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
	else
	{
		func_161(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_204(iParam0))
	{
		return;
	}
	func_401(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_401(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_208(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_161(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_204(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

void func_164(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_165(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_402(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_403(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_404((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_405(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_147(uParam0);
}

void func_166(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_406(iParam0, 32);
	func_407();
}

void func_167(bool bParam0)
{
	Global_1956582 = bParam0;
	if (bParam0)
	{
		MAP::_0x632AA10BF7EA53D3(0, 0);
	}
	else
	{
		MAP::_0x632AA10BF7EA53D3(1, 0);
	}
}

bool func_168(var uParam0, int iParam1)
{
	return (uParam0->f_1560 && iParam1) != 0;
}

int func_169()
{
	return Global_1572864->f_8;
}

int func_170(int iParam0)
{
	if (func_104(iParam0) == 8)
	{
		return func_105(iParam0);
	}
	return -1;
}

bool func_171(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_172(vector3 vParam0, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_111();
	if (func_322(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_408(vParam0, bParam3);
}

void func_173(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_174(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_175(var uParam0, int iParam1)
{
	uParam0->f_750 = iParam1;
}

void func_176(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		MISC::SET_BIT(&(iParam0->f_3), iParam1);
	}
	else if (iParam1 <= 63)
	{
		MISC::SET_BIT(&(iParam0->f_4), (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		MISC::SET_BIT(&(iParam0->f_5), (iParam1 - 64));
	}
}

void func_177(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 2442171;
	if (bParam4)
	{
		iVar0 |= 1536;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_178(int iParam0)
{
	func_409(&iLocal_807, iParam0);
}

void func_179(var uParam0, float fParam1)
{
	uParam0->f_338 = fParam1;
}

void func_180(var uParam0, float fParam1)
{
	uParam0->f_339 = fParam1;
}

void func_181(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		uVar0 = func_410(0);
		MISC::CLEAR_BIT(&uVar0, iParam0);
		func_411(0, uVar0);
	}
}

void func_182(int iParam0)
{
	Global_17503.f_11 = iParam0;
}

bool func_183()
{
	return func_412(9);
}

void func_184()
{
	struct<4> Var0;
	
	Var0 = { func_413(0) };
	Local_554.f_3 = 119;
	Local_554.f_51 = { Var0 };
	Local_554.f_51.f_3 = Var0.f_3;
	func_414(&(Local_554.f_51), 1, 10, 0);
	func_415(&uLocal_748);
	func_416(&(Local_554.f_5));
	func_417(&(Local_554.f_5), 1);
	func_418(&(Local_554.f_5), 60f);
	func_419(&(Local_554.f_5), 40f);
	Local_14 = 43;
	iLocal_928 = VOLUME::_CREATE_VOLUME_BOX(557.2169f, 171.0651f, 135.3442f, 0f, 0f, 40.5f, 11.89501f, 10.20639f, 4.756716f);
	iLocal_929 = VOLUME::_CREATE_VOLUME_BOX(556.7672f, 172.2463f, 134.0795f, 0f, 0f, 37.03808f, 2.694678f, 1.764345f, 1.702914f);
	PED::_0x4C39C95AE5DB1329(iLocal_929, false, 16);
}

void func_185(var uParam0, int iParam1)
{
	iLocal_930 = iParam1;
	iLocal_551 = 0;
}

Vector3 func_186(var uParam0)
{
	return uParam0->f_51;
}

float func_187(var uParam0)
{
	return uParam0->f_51.f_3;
}

void func_188(var uParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, func_420()) };
	if (!func_242(vVar0))
	{
		func_421(uParam0, vVar0, 2, -1082130432);
	}
}

void func_189(var uParam0)
{
	func_416(uParam0);
	func_422(uParam0, 1);
	func_423(uParam0, 1);
	func_424(uParam0, 1);
	func_425(uParam0, 1);
	func_426(uParam0, 1);
	func_427(uParam0, 1);
	func_428(uParam0, 1);
	func_417(uParam0, 0);
}

int func_190(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (uParam0[iVar0 /*3*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_191(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!func_429((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_192(var uParam0, int iParam1)
{
	uParam0->f_1 = 207636298;
	*uParam0 = 4;
	StringCopy(&(uParam0->f_23), "HERBALIST", 64);
	uParam0->f_6 = { -0.6f, 1.95f, 0f };
	func_430(uParam0);
}

bool func_193()
{
	return func_197(1024);
}

void func_194(var uParam0, char* sParam1)
{
	struct<2> Var0;
	
	Var0 = { func_385(uParam0->f_174) };
	if (HUD::_0x2C729F2B94CEA911(&Var0))
	{
		HUD::_0xF66090013DE648D5(&Var0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2573)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			StringCopy(&(uParam0->f_2573), sParam1, 16);
		}
		else
		{
			uParam0->f_2573 = { func_386(uParam0->f_174) };
		}
	}
	if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_2573)))
	{
		HUD::_0xF66090013DE648D5(&(uParam0->f_2573));
	}
}

int func_195(var uParam0)
{
	return uParam0->f_168;
}

void func_196(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_431((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_432((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_431((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_402(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_431((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_432((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_431((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_403(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_431(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_432(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_431(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_404((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_431((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_432((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_431((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_405(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

bool func_197(int iParam0)
{
	return func_433(iLocal_807, iParam0);
}

int func_198(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_434(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_199(var uParam0)
{
	vector3 vVar0;
	int iVar4;
	int iVar5;
	
	iVar4 = -899457438;
	iVar5 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (UIAPPS::_IS_APP_ACTIVE(1433015236))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(1433015236);
						}
						iVar5 = 1;
					}
					break;
				
				case -1740156697:
					if (iVar5 != 1)
					{
						*uParam0 = func_435(vVar0.z);
						iVar5 = 3;
					}
					break;
				
				case 922460030:
					iVar5 = 2;
					break;
				
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return iVar5;
}

void func_200(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_0xC805EB785824F712(bParam0);
	LAW::_0x710448D44A64C213(bParam0);
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_119(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_271(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_202(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_429(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_431((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_436(uParam0->f_41[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (func_437(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_431((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_438(uParam0->f_117[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (func_439((*uParam0)[iVar1 /*3*/]))
		{
			if (func_431(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_440((*uParam0)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_441(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_431((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_442(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_443(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_444(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_445(uParam0, iParam1))
	{
		iVar0 = 0;
	}
	if (uParam0->f_177 == 2 && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (iParam1 == 2)
	{
		if (!func_6(uParam0->f_172, 32))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_203()
{
	return Global_1572887->f_12;
}

bool func_204(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_205(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_446(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

int func_206(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_447(0);
	if (iVar0 == 11)
	{
		iVar1 = func_448(func_106(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_449(Global_40.f_4283);
				if (func_322(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_450(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_322(Global_1894899->f_2) && Global_1894899->f_2 == func_449(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_451(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_452(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_452(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_452(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_452(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_452(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_453(2) && !func_452(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_452(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_456(func_454(65536), 0, 3, func_455(65536));
		if (func_55(iVar1))
		{
			iVar0 = func_446(iVar1);
			if (!func_433(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_452(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_452(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_452(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_452(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_452(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_452(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_452(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_446(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_452(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_452(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_457(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_458(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_452(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_268(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_459(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_460() <= 160)
			{
				return 1;
			}
			else
			{
				func_461(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_462(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_268(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_268(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_463(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_268(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_268(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_268(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < &Global_1898438)
		{
			return 1;
		}
		else if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
		{
			return 1;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_464())
		{
			if (func_338("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_164(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_208(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_122(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_465(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_268(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_268(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_209(int iParam0)
{
	if (iParam0 == 11 || iParam0 == 153)
	{
		return 26;
	}
	else if (iParam0 == 12 || iParam0 == 16)
	{
		return 5;
	}
	else if ((iParam0 == 13 || iParam0 == 154) || iParam0 == 15)
	{
		return 105;
	}
	else if (iParam0 == 14 || iParam0 == 135)
	{
		return 76;
	}
	else if ((iParam0 == 17 || iParam0 == 18) || iParam0 == 155)
	{
		return 38;
	}
	else if (iParam0 == 19 || iParam0 == 20)
	{
		return 115;
	}
	return -1;
}

int func_210(int iParam0)
{
	if (!func_322(iParam0))
	{
		return 0;
	}
	return func_323(iParam0, 33554432);
}

int func_211(int iParam0)
{
	if (!func_322(iParam0))
	{
		return 0;
	}
	return func_323(iParam0, 67108864);
}

var func_212()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_213(int iParam0, int iParam1)
{
	return func_466(iParam0, iParam1);
}

int func_214(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_467(iParam0, bParam1, iParam2, iParam3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 32768 != 0)
	{
		return 1;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2 == 0)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] > -1 && &((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] < 27)
		{
			if ((Global_40.f_4942[&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] /*60*/])->f_59 != 0)
			{
				if ((Global_40.f_4942[&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] /*60*/])->f_59 != ((*Global_1347702)[iParam0 /*49*/])->f_15)
				{
					return 0;
				}
			}
			else if (func_468(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_388(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_84(&Global_1935630, 4096))
			{
			}
			else if (func_469(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_470(func_389(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_216(var uParam0)
{
	if ((func_282(&Local_14, 2) || func_282(&Local_14, 38)) || func_282(&Local_14, 65))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
	{
		if (func_197(128))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_7, -1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_7, Global_35, 4, 0, -1082130432, -1, Local_14.f_434.f_5);
				return 1;
			}
		}
		else
		{
			switch (func_471())
			{
				case 1:
					if (!func_197(256))
					{
						func_473(&Local_776, func_472(7, 8), 1, 1);
						func_474(&Local_776, "Loop_Idle", 0);
						func_474(&Local_776, "Loop_Idle_2", 0);
						func_475(&(Local_14.f_284), 0, 0);
						func_178(256);
						TASK::_0x2E1D6D87346BB7D2(Local_14.f_7, Global_35, 1, 0);
						iLocal_553 = 5;
					}
					break;
				
				case 2:
					func_473(&Local_776, 6, 1, 1);
					func_178(64);
					func_178(128);
					TASK::_0x2E1D6D87346BB7D2(Local_14.f_7, Global_35, 1, 0);
					iLocal_553 = 6;
					break;
			}
		}
	}
	return 0;
}

int func_217(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[iParam0 /*49*/])->f_22);
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (fParam1 > (100f * 100f))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 > 3)
	{
		iVar1 = 3;
	}
	while (iVar2 <= iVar1)
	{
		iVar3 = ((*Global_1347702)[iParam0 /*49*/])->f_23;
		iVar10 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, ((*Global_1347702)[iParam0 /*49*/])->f_22);
		iVar4 = iVar10;
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = iVar4;
				iVar11 = EVENT::_0xAD17A18215DD23D6(iVar5, 1, 0);
				if (iVar11 > 0 && iVar11 <= 2000)
				{
					iVar12 = EVENT::_0x796EECFF0C6D39BE(iVar5, 1, 0);
					if (iVar12 != -587661767 || Global_1935630->f_44 != 2055893578)
					{
						return 1;
					}
				}
				if (MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar7, -1504859554, 10f, true) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar7, 1885857703, 10f, true))
				{
					return 1;
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar4))
			{
				iVar6 = iVar4;
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar6, Global_35, 1, 1))
				{
					return 1;
				}
			}
		}
		iVar2++;
		((*Global_1347702)[iParam0 /*49*/])->f_23++;
		if (((*Global_1347702)[iParam0 /*49*/])->f_23 >= iVar0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
		}
	}
	if (Global_1945917->f_6 >= 0 && (MISC::GET_GAME_TIMER() - Global_1945917->f_6) <= 1000)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_1945917->f_1) && ENTITY::IS_ENTITY_A_PED(Global_1945917->f_1)) && ITEMSET::IS_IN_ITEMSET(Global_1945917->f_1, ((*Global_1347702)[iParam0 /*49*/])->f_22))
		{
			return 1;
		}
	}
	return 0;
}

int func_218(var uParam0)
{
	return 0;
}

int func_219(float fParam0)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0);
	}
	if (iVar0 > 0 && fParam0 <= (50f * 50f))
	{
		return 1;
	}
	return 0;
}

void func_220()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_387(iVar0) && func_388(iVar0))
		{
			func_476(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_74(&(Global_1359489->f_40), 1);
}

void func_221(var uParam0)
{
}

void func_222(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_263(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_263(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_263(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_263(iParam0));
			}
		}
	}
	func_115(iParam0, 4);
	func_115(iParam0, 8);
	func_115(iParam0, 16);
}

void func_223(int iParam0)
{
	Global_36579 = iParam0;
}

void func_224(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_225(int iParam0)
{
	func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_231(iParam0, func_63(iParam0), 1, 0);
		}
		else
		{
			func_477(iParam0);
		}
	}
	else
	{
		func_109(iParam0, 0);
	}
}

void func_226(var uParam0)
{
	if (func_478(uParam0->f_174))
	{
		func_479(262144, 5, 0, 1);
		func_480(720f, 1, 0);
	}
}

void func_227(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1415022764, 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_228(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_229(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_65(uParam0);
	if (uParam0->f_750 == -1)
	{
		if (iVar0 == 1 || iVar0 == 0)
		{
			uParam0->f_750 = uParam0->f_749;
		}
		else if (!func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_750 = uParam0->f_748;
		}
	}
	if (uParam0->f_750 >= 0)
	{
		iVar1 = PED::_0x62DE46F061CAA468();
		if (uParam0->f_750 < iVar1)
		{
			iVar2 = (iVar1 - uParam0->f_750);
			PED::_0x7D4E70A67A651C71(iVar2);
		}
		else if (uParam0->f_750 > PED::_0x62DE46F061CAA468())
		{
			PED::_0xED9582B3DA8F02B4(uParam0->f_750);
		}
	}
	uParam0->f_748 = -1;
	uParam0->f_749 = -1;
}

float func_230(int iParam0)
{
	float fVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_16 > 250f)
	{
		fVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_16;
	}
	else
	{
		fVar0 = 250f;
	}
	return fVar0;
}

void func_231(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;
	
	if (!func_204(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_139(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_171(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_481(iParam0);
	if (!bParam5 && func_482(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x45F13B7E0A15C880(((*Global_1347702)[iParam0 /*49*/])->f_38, func_372(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x554D9D53F696D002(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_483(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_477(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_203() == -1)
	{
		func_484(iParam0);
		iVar0 = func_449(Global_40.f_4283);
		if (func_322(iVar0) && func_485(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_486(iVar0);
		}
		if (func_487(iParam0, iVar1, iVar0))
		{
			func_488(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_482(iParam0) || func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_44(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_489(iParam0))
		{
			if (iParam0 == 97)
			{
				func_299(185, 0);
			}
			else
			{
				func_299(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_374(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_264(iParam0, 2);
	}
}

void func_232(int iParam0, float fParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 == 0)
	{
		func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (fParam1 < (((*Global_1347702)[iParam0 /*49*/])->f_18 * ((*Global_1347702)[iParam0 /*49*/])->f_18))
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
	}
}

void func_233(int iParam0, vector3 vParam1, float fParam4)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 == 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 < 0f)
	{
		func_164(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (func_490(iParam0, fParam4))
	{
		func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_161(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_109(iParam0, 0);
		func_231(iParam0, vParam1, 1, 0);
	}
}

void func_234(int iParam0)
{
	if (func_491(179))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return;
	}
	else if (func_482(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_63(iParam0), Global_36) < 10000f) && func_492())
	{
		func_493(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_235(int iParam0)
{
	if (func_491(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_482(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_492())
	{
		func_493(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_236(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_96(uParam0, 0);
		func_81(uParam0);
	}
}

int func_237(var uParam0)
{
	struct<8> Var0;
	
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_751))
	{
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_751, 1, 0))
		{
			return 1;
		}
	}
	else
	{
		Var0 = { func_494(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::_0x25557E324489393C(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_238()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_239(var uParam0)
{
	return uParam0->f_350;
}

void func_240(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_495(uParam0) };
	func_496(uParam0, &Var0);
}

void func_241(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, uParam0->f_366[iVar0 /*9*/]))
		{
			Var1 = { uParam0->f_350 };
			*(uParam0->f_366[iVar0 /*9*/]) = { Var1 };
		}
		iVar0++;
	}
	func_496(uParam0, sParam1);
	func_497(uParam0, 2097152, 1);
	func_498(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_242(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_243(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_499(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_244(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	
	if (bParam3)
	{
		uParam0->f_415++;
		if (uParam0->f_415 < 10)
		{
			return (func_500(uParam0, 256) && !func_500(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_501(uParam0, sParam1);
	if (!func_500(uParam0, 64))
	{
		if (!func_242(func_502(uParam0)))
		{
			func_498(uParam0, 64);
		}
		else
		{
			vVar0 = { func_503(uParam0) };
			if (!func_242(vVar0))
			{
				func_504(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_505(Global_35, func_502(uParam0), 1);
	if (func_500(uParam0, 128) || func_500(uParam0, 256))
	{
		if ((fVar3 >= func_506(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_507();
				uParam0->f_433 = 0;
			}
			func_508(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_301(uParam0);
			func_497(uParam0, 128, 1);
			func_497(uParam0, 256, 1);
			func_497(uParam0, 4096, 1);
			func_497(uParam0, 32768, 1);
			func_497(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_509(uParam0) || bParam2)
	{
		if (!func_500(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
			{
				if (func_509(uParam0) >= func_506(uParam0))
				{
				}
				Var4 = { func_239(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_510(uParam0);
				}
				Var4 = { func_239(uParam0) };
				iVar12 = 256;
				if (!func_500(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_511(uParam0, 0, 0, 0, 0);
				func_498(uParam0, 128);
			}
		}
	}
	if (func_500(uParam0, 128))
	{
		if (func_500(uParam0, 256) && !func_500(uParam0, 4194304))
		{
			return 1;
		}
		func_512(uParam0);
		if (!uParam0->f_433)
		{
			if (func_513())
			{
				func_514(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_495(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_366[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_366[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_366[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_500(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &Var15))
				{
					if (!func_500(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &Var15);
						}
						func_498(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_498(uParam0, 256);
			func_497(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_245(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_206.f_348))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_206.f_348, func_186(&Local_554), 0f, 0f, func_187(&Local_554), 2);
	}
}

bool func_246(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_247(var uParam0, char* sParam1, int iParam2)
{
	if (func_246(sParam1, 2))
	{
		return 0;
	}
	if (func_246(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_515(sParam1) == 9 || func_515(sParam1) == 12) || func_515(sParam1) == 13)
	{
		if (!func_246(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_516(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_517(uParam0, func_515(sParam1));
	}
	return 0;
}

void func_248(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_516(sParam0, 1);
}

int func_249(var uParam0, char* sParam1, int iParam2)
{
	if (!func_246(sParam1, 1))
	{
		return 0;
	}
	if (func_246(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_518(sParam1) == 9 || func_518(sParam1) == 12) || func_518(sParam1) == 13)
	{
		if (!func_246(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_516(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_517(uParam0, func_518(sParam1));
	}
	return 0;
}

void func_250(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_516(sParam0, 2);
}

int func_251(var uParam0, char* sParam1, int iParam2)
{
	if (func_246(sParam1, 1))
	{
		return 0;
	}
	if (func_515(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_515(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_519(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_515(sParam1) == 9 || func_515(sParam1) == 12) || func_515(sParam1) == 13) && func_246(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_515(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		
		case 4:
			return func_311(&(uParam0->f_753));
		
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		
		case 9:
		case 12:
		case 13:
			if (!func_246(sParam1, 8))
			{
				func_516(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_252(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_516(sParam0, 1);
}

int func_253(char* sParam0, bool bParam1)
{
	if (func_246(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_516(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_516(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_516(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_516(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_516(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_516(sParam0, 1);
		return 1;
	}
	func_516(sParam0, 1);
	return 0;
}

void func_254(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_246(uParam0->f_482[iVar0 /*16*/], 1048576) && func_246(uParam0->f_482[iVar0 /*16*/], 4)) && !func_246(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_255(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (!bParam4 && !uParam0->f_782)
	{
		if (!func_520(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return 0;
		}
	}
	if (!uParam0->f_783)
	{
		iVar20 = uParam0->f_790;
		while (iVar20 <= (uParam0->f_789 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			if (func_521(uParam0, 0))
			{
				if (func_522(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_523(uParam0, 1, &iVar0))
					{
					}
					if (func_524(uParam0, 3, &cVar2))
					{
					}
					if (func_523(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_523(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_523(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_523(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_523(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_525(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_516((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_516(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_516(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_246(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_525(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_516(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
							uParam0->f_788++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_790 = iVar20 + 1;
				uParam0->f_781 = 0;
				return 0;
			}
			iVar20++;
		}
		uParam0->f_783 = 1;
	}
	if (!func_135(uParam0) && uParam0->f_791 > 0)
	{
		iVar20 = uParam0->f_792;
		while (iVar20 <= (uParam0->f_791 - 1))
		{
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			iVar22 = 0;
			if (func_521(uParam0, 12))
			{
				if (func_523(uParam0, 13, &iVar0))
				{
				}
				if (func_523(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_772[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_792 = iVar20 + 1;
				uParam0->f_781 = 0;
				return 0;
			}
			iVar20++;
		}
	}
	uParam0->f_781 = 1;
	uParam0->f_790 = 0;
	uParam0->f_792 = 0;
	uParam0->f_783 = 0;
	uParam0->f_784 = 1;
	if (!bParam4)
	{
		func_526(uParam0);
	}
	return 1;
}

bool func_256(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_257(var uParam0)
{
	func_527(uParam0, 0f);
}

bool func_258(var uParam0)
{
	return func_256(*uParam0, 2);
}

int func_259()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_260(var uParam0)
{
	vector3 vVar0;
	
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 == 0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		STREAMING::REQUEST_MODEL(((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, false);
		if (!STREAMING::HAS_MODEL_LOADED(((*Global_1347702)[uParam0->f_174 /*49*/])->f_28))
		{
			return 0;
		}
		vVar0 = { func_63(uParam0->f_174) };
		func_528(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_529(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_529(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43) && !PED::IS_PED_INJURED(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, true, true);
		}
		return 1;
	}
	return 0;
}

int func_261(var uParam0)
{
	func_188(&(Local_14.f_477), func_186(&Local_554), func_187(&Local_554));
	return 1;
}

int func_262(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_263(int iParam0)
{
	var uVar0;
	
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_264(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_265(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	uVar10 = func_530(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_262(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_263(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_263(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_263(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_263(iParam0)))
	{
		func_264(iParam0, 4);
	}
}

void func_266(int iParam0)
{
	char cVar0[16];
	char[] cVar3[8];
	
	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&Var1, "PSTR_O_", 16);
		StringConCat(&Var1, &cVar0, 16);
		cVar3 = func_531(0, &Var1, 0, 0, -1, -1);
		func_532(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_267(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_204(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_222(iVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

int func_268(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_364(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_269(int iParam0, bool bParam1)
{
	if (!func_55(iParam0))
	{
		return;
	}
	if (!func_102(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_103(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_103(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_104(iParam0), func_105(iParam0), func_106(iParam0), func_103(iParam0), Global_36);
		}
	}
	func_368(iParam0, 1);
	bParam1 = bParam1;
}

void func_270(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_55(iParam0))
	{
		return;
	}
	if (!func_268(iParam0))
	{
		return;
	}
	iVar0 = func_104(iParam0);
	if (bParam1)
	{
		if (func_103(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_103(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_533(func_105(iParam0));
			}
			if (func_203() != 0)
			{
				STATS::_0xB2A38826E5886E83(func_103(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_103(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_534(iParam0);
	if (!func_55(func_54(0)))
	{
		func_368(iParam0, 3);
		func_201(bParam2);
		if (func_203() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_367(1);
		}
		func_535(iParam0, -1);
		if (bParam1 && !func_171(2))
		{
			func_536(&Global_0, 1024);
		}
		if (func_203() == -1)
		{
			func_537(&(Global_1347343->f_11), 536870912);
			func_538(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_539(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_540(0);
			}
		}
		if (func_203() == -1)
		{
			iVar1 = func_397(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_399();
				switch (iVar1)
				{
					case 0:
						func_541(0);
						break;
					
					case 1:
						func_541(1);
						break;
					
					case 2:
						func_541(2);
						break;
					
					case 3:
						func_541(3);
						break;
					
					case 4:
						func_541(4);
						break;
					
					case 5:
						func_541(5);
						break;
					
					case 6:
						func_541(5);
						break;
					
					case 7:
						func_541(7);
						break;
					
					case 8:
						func_541(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_105(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_541(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_105(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_541(11);
						break;
					
					default:
						iVar1 = func_399();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_542(0);
									break;
								
								case 1:
									func_542(1);
									break;
								
								case 2:
									func_542(2);
									break;
								
								case 3:
									func_542(3);
									break;
								
								case 4:
									func_542(4);
									break;
								
								case 5:
									func_542(5);
									break;
								
								case 6:
									func_542(5);
									break;
								
								case 7:
									func_542(7);
									break;
								
								case 8:
									func_542(8);
									break;
								
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_371(1);
	}
	else
	{
		func_535(iParam0, -1);
		func_368(iParam0, 4);
	}
	func_400(iParam0, 0);
}

void func_271(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_272(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_749 == -1)
	{
		if (!func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_749 = 15;
		}
	}
	if (uParam0->f_749 >= 0)
	{
		if (uParam0->f_749 < PED::_0x62DE46F061CAA468())
		{
			iVar0 = (PED::_0x62DE46F061CAA468() - uParam0->f_749);
			PED::_0x7D4E70A67A651C71(iVar0);
		}
		else if (uParam0->f_749 > PED::_0x62DE46F061CAA468())
		{
			PED::_0xED9582B3DA8F02B4(uParam0->f_749);
		}
	}
	uParam0->f_748 = -1;
}

void func_273(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_0x7BE607DAFF382FD2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x32A1E3B83D501096(iVar3)))
					{
						_NAMESPACE48::_0x7B204F88F6C3D287(_NAMESPACE48::_0x32A1E3B83D501096(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, 0, 0);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_274()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_387(iVar0))
		{
			func_476(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_275(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_452(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_452(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, 379542007, 0, 0))
		{
			if (!func_543(379542007))
			{
				func_544(379542007);
			}
			func_545(Global_35, 379542007, 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, 379542007);
			if (iVar1 < iVar0)
			{
				WEAPON::_0xB190BCA3F4042F95(Global_35, 379542007, (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_276(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_546(0f);
	Global_1935436->f_11 = 1;
	if (func_339())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_547();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_277(var uParam0)
{
}

void func_278(var uParam0, int iParam1)
{
	uParam0->f_170 = iParam1;
}

int func_279(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_280()
{
	if (func_282(&Local_14, 15))
	{
		return 1;
	}
	return 0;
}

int func_281(var uParam0)
{
	func_548(uParam0);
	if (uParam0->f_174 == 152)
	{
		if (func_280() && ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
		{
			func_377();
		}
	}
	if (func_197(128))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
		{
			switch (iLocal_933)
			{
				case 0:
					if (func_549(&Local_776, 0, 0, 0))
					{
						if (iLocal_553 != 6)
						{
							func_473(&Local_776, 6, 1, 1);
							func_178(64);
							TASK::_0x2E1D6D87346BB7D2(Local_14.f_7, Global_35, 1, 0);
							iLocal_935 = 1;
							iLocal_553 = 6;
						}
						func_550(&Local_776, 1);
					}
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_7, -1) && func_470(Local_14.f_7, -1082130432, 1116471296, 0, 0, -1082130432))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_7, false);
						iLocal_935 = 1;
						iLocal_933++;
					}
					break;
				
				case 1:
					if (func_505(Global_35, func_186(&Local_554), 1) > 230f)
					{
						func_177(func_186(&Local_554), 40f, 1);
						iLocal_933++;
						return 1;
					}
					break;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		if (iLocal_551 == 3 && iLocal_930 == 3)
		{
			if (func_551(&Local_14, &Local_554, 0, &uLocal_748))
			{
				return 1;
			}
		}
		if (func_282(&Local_14, 2))
		{
			if (func_552())
			{
				return 1;
			}
		}
	}
	if (func_197(131072))
	{
		if ((((func_197(2048) && !func_282(&Local_14, 2)) && !func_282(&Local_14, 38)) && !func_282(&Local_14, 65)) && !func_197(128))
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		return MISC::IS_BIT_SET(iParam0->f_3, iParam1);
	}
	else if (iParam1 <= 63)
	{
		return MISC::IS_BIT_SET(iParam0->f_4, (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		return MISC::IS_BIT_SET(iParam0->f_5, (iParam1 - 64));
	}
	return 0;
}

int func_283()
{
	float fVar0;
	float fVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
	{
		return 0;
	}
	fVar0 = func_553(Global_35, Local_14.f_7, 1, 1);
	fVar1 = func_505(Global_35, func_186(&Local_554), 1);
	if (fVar1 > 400f && fVar0 > 80f)
	{
		if (iLocal_930 == 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
			{
				return 1;
			}
		}
		if (Local_554.f_46 && fVar1 > 120f)
		{
			return 1;
		}
		if (func_280())
		{
			return 1;
		}
	}
	return 0;
}

int func_284()
{
	return Global_17503.f_11;
}

int func_285(var uParam0)
{
	func_548(uParam0);
	func_188(&(Local_14.f_477), func_186(&Local_554), func_187(&Local_554));
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		func_554(Global_35, 557.4211f, 168.5067f, 133.3489f, 1, 1112014848, 1106247680, 1097859072, 10f, 1, 1, 0, 0);
	}
	else
	{
		func_554(Global_35, 557.4211f, 168.5067f, 133.3489f, 1, 1112014848, 12f, 10f, 9f, 1, 1, 1, 0);
	}
	if (func_193())
	{
		if (iLocal_930 == 3 && iLocal_551 == 3)
		{
			if (func_555())
			{
				func_308(0);
				return 1;
			}
			func_550(&Local_776, 1);
		}
		return 0;
	}
	return 1;
}

int func_286(var uParam0)
{
	if (func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		func_146(uParam0);
		return 1;
	}
	switch (uParam0->f_171)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				func_556(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_556(0, 1, 1, 1);
			if (func_557(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_146(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

var func_287()
{
	return Global_1572864->f_9;
}

int func_288()
{
	int iVar0;
	
	iVar0 = func_460();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case -40:
		case 40:
			return 1;
		
		case -80:
		case 80:
			return 2;
		
		case -120:
		case 120:
			return 3;
		
		case -160:
		case 160:
			return 4;
		
		case -200:
		case 200:
			return 5;
		
		case -240:
		case 240:
			return 6;
		
		case -280:
		case 280:
			return 7;
		
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

float func_290(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_291(var uParam0)
{
	if (!func_6(uParam0->f_172, 512))
	{
		if (!func_558(uParam0))
		{
			return 0;
		}
		func_208(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_237(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_1(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_556(0, 1, 1, 1);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_751) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_751, 0))
	{
		func_1(&(uParam0->f_172), 1024);
		func_2(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_292()
{
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1938056823, false);
}

void func_293(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
}

int func_294(var uParam0)
{
	if ((((((((ENTITY::DOES_ENTITY_EXIST(Local_14.f_7) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_7)) && ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[3]))) && ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[9]))) && ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[10]))) && ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[11]))) && ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[0]))) && ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[1]))) && ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[4])))
	{
		if (func_339())
		{
			func_559(uParam0, Global_35, "Arthur", 0, 0, 0);
		}
		else
		{
			func_559(uParam0, Global_35, "john", 0, 0, 0);
		}
		func_559(uParam0, Local_14.f_7, "CS_HERBALIST", 0, 0, 0);
		func_560(uParam0, &(Local_14.f_90[3]), "P_MORTARPESTLE02X", 0, 0, 0);
		func_560(uParam0, &(Local_14.f_90[9]), "S_INV_MEDICINE01X", 0, 0, 0);
		func_560(uParam0, &(Local_14.f_90[10]), "S_INV_MEDICINE_FTY", 0, 0, 0);
		func_560(uParam0, &(Local_14.f_90[11]), "P_BOTTLESLIM01X", 0, 0, 0);
		func_560(uParam0, &(Local_14.f_90[1]), "P_KNIFE02X", 0, 0, 0);
		func_560(uParam0, &(Local_14.f_90[4]), "S_INV_BURDOCK01DX", 0, 0, 0);
		if (ENTITY::IS_ENTITY_ATTACHED(&(Local_14.f_90[1])))
		{
			ENTITY::DETACH_ENTITY(&(Local_14.f_90[1]), true, true);
		}
		func_561(uParam0, func_186(&Local_554));
		if (func_339())
		{
			func_562(&uLocal_815, Global_35, "ARTHUR", 0);
		}
		else
		{
			func_562(&uLocal_815, Global_35, "JOHN", 0);
		}
		func_562(&uLocal_815, Local_14.f_7, "herbalist", 0);
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
		return 1;
	}
	return 0;
}

void func_295(var uParam0, var uParam1)
{
	struct<8> Var0;
	
	if (func_168(uParam1, 32768))
	{
		Var0 = { func_495(uParam0) };
		func_241(uParam0, &Var0);
		if (func_168(uParam1, 131072))
		{
			func_498(uParam0, 268435456);
			if (func_242(uParam0->f_409))
			{
				uParam0->f_409 = { func_563(uParam1, uParam1->f_1580) };
			}
			if (func_242(uParam0->f_406))
			{
				uParam0->f_406 = { func_563(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_168(uParam1, 268435456))
		{
			func_564(&(uParam0->f_404), 16384);
		}
	}
	else if (func_168(uParam1, 524288))
	{
		func_498(uParam0, 67108864);
		func_565(uParam1, 524288);
	}
	if (func_566(uParam1, 128))
	{
		func_498(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_567(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_564(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_296(var uParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 || !func_6(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_568(uParam0->f_174)}, 8);
		func_569(&uVar0, 15000, 0, 0, 0, 1);
		func_1(&(uParam0->f_172), 16384);
	}
}

int func_297(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_570();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_298()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_571();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_0xD2CB0FB0FDCB473D(iVar0, 0);
	func_572(-1);
	func_573(3);
	return 1;
}

void func_299(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_574(iParam0, &iVar0, &iVar1);
	if (!func_575(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_576(iVar0, iVar1);
}

int func_300(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	func_501(uParam4, &sParam0);
	if (func_500(uParam4, 2) && !func_500(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_577(uParam4) != 1)
	{
		func_578(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_577(uParam4))
	{
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0x477122B8D05E7968(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_348, 0))
				{
					func_579(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					func_580(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_581(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_582(uParam5);
				}
				func_580(uParam4, 3);
			}
			else if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_500(uParam4, 134217728))
				{
				}
				else
				{
					func_240(uParam4);
				}
				func_257(&(uParam4->f_1));
				func_580(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_512(uParam4);
				if (!func_73(&(uParam4->f_1)))
				{
					func_74(&(uParam4->f_1), 0);
				}
				else if (func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_580(uParam4, 4);
				}
			}
			break;
		
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_348) || !ANIMSCENE::_0x477122B8D05E7968(uParam4->f_348, 1, 0))
			{
				if (func_244(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(uParam4->f_348, 1, 0))
					{
						func_580(uParam4, 4);
					}
					else if (!func_242(func_502(uParam4)) && !func_584(Global_35, func_502(uParam4), 100f, 1, 1))
					{
						func_585(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_502(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_580(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					func_586(1, 0);
					func_579(uParam4, &sParam0, uParam5);
					func_580(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_580(uParam4, 4);
			}
			break;
		
		case 3:
			func_587(uParam4);
			if (func_581(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_582(uParam5);
			if ((ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_348, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || func_500(uParam4, 512)))
			{
				if (!func_500(uParam4, 1024) && func_588(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_500(uParam4, 512))
				{
					func_257(&(uParam4->f_1));
					func_498(uParam4, 512);
					func_580(uParam4, 4);
				}
				else if (func_500(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_578(uParam4);
			}
			if (func_500(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_589(uParam4) - func_590(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_591(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_590(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_592(uParam4))
			{
				if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
				}
				func_593(uParam4);
				func_594(uParam4);
				return 1;
			}
			else
			{
				if (func_500(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						func_257(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_498(uParam4, 512);
						func_497(uParam4, 67108864, 1);
						func_580(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_500(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && func_590(uParam4) <= 5000) && func_590(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_500(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_595(&(uParam4->f_405), 0);
					func_498(uParam4, 536870912);
				}
				if (func_590(uParam4) >= 5000 && func_590(uParam4) <= (func_589(uParam4) - 5000))
				{
					func_596();
				}
			}
			break;
		
		case 6:
			if (func_592(uParam4))
			{
				func_593(uParam4);
				func_594(uParam4);
				return 1;
			}
			break;
		
		case 4:
			if (func_500(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
					{
						func_498(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
					if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 1);
						if (_NAMESPACE71::_0xC17F69E1418CD11F(9) != 0)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_348))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					if (func_597(uParam5))
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_580(uParam4, 3);
					}
					else if (func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_580(uParam4, 3);
					}
				}
				if (func_577(uParam4) == 3)
				{
					if (func_500(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		
		case 5:
			func_580(uParam4, 4);
			break;
	}
	return 0;
}

void func_301(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		if (func_500(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_598(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_500(uParam0, 8))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_4);
		func_497(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_497(uParam0, 16, 1);
}

void func_302(int* iParam0)
{
	struct<367> Var0;
	
	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 434);
}

void func_303(var uParam0)
{
	func_599(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	func_2(&(uParam0->f_172), 262144);
	func_2(&(uParam0->f_172), 524288);
	func_2(&(uParam0->f_172), 1048576);
}

struct<6> func_304(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			Var0 = { 6.91589f, 19.1461f, 79.96f };
			Var0.f_3 = { -0.93f, 0f, 160f };
			break;
		
		case 3:
			Var0 = { 28.17f, 7.71f, 79.57f };
			Var0.f_3 = { 0f, 0f, -90.18f };
			break;
		
		case 4:
			Var0 = { 27.64f, 21.44f, 80.51f };
			Var0.f_3 = { 130.64f, 54.88f, -167.18f };
			break;
		
		case 0:
			Var0 = { -31.32f, 5.31f, 81.07f };
			Var0.f_3 = { -180f, 0f, -27f };
			break;
		
		case 9:
			Var0 = { -54.1f, -5.7f, 79.61f };
			Var0.f_3 = { 0f, 0f, 134f };
			break;
		
		case 10:
			Var0 = { -49.69f, -9.25f, 79.24f };
			Var0.f_3 = { -3.4f, -0.66f, 149.02f };
			break;
		
		case 11:
			Var0 = { 50.71f, -7.37f, 78.39f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 13:
			Var0 = { 3.34f, -1.45f, -1f };
			Var0.f_3 = { 0f, 0f, 156.24f };
			break;
	}
	Var0 = { Var0 * Vector(0.01f, 0.01f, 0.01f) };
	Var0.f_3 = { Vector(Var0.f_3.f_2, 0f, 0f) * Vector(-1f, -1f, -1f) };
	return Var0;
}

float func_305(float fParam0)
{
	float fVar0;
	
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_306(int* iParam0, bool bParam1)
{
	func_600(iParam0, 4);
	if (bParam1)
	{
		func_601(iParam0, 0);
	}
}

void func_307()
{
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_7, false);
	func_384(0);
	CAM::STOP_GAMEPLAY_HINT(false);
}

void func_308(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_7, "REHOC_LEAD_IN", 0f, 0f, 0f, 0, "REHOC_LEAD_IN");
	}
	else
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "REHOC_LEAD_IN");
	}
}

void func_309(int iParam0)
{
	func_602(&iLocal_807, iParam0);
}

int func_310(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (func_168(uParam0, 32768))
	{
		return 1;
	}
	if (func_603(uParam0) >= 3)
	{
		uParam0->f_1792 = func_467(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630->f_40))
			{
				uParam0->f_1794 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_604(uParam0);
	}
	if (func_603(uParam0) < 10)
	{
		if (func_603(uParam0) == 3)
		{
			func_605(uParam0, iParam5, bParam6);
		}
		else if (func_603(uParam0) > 3)
		{
			if (func_606(uParam0) == 0)
			{
				if (!func_168(uParam0, 524288))
				{
					func_607(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_608(uParam0, 4);
					func_609(uParam0, 10);
					func_610(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_168(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_567(uParam0->f_912[uParam0->f_1580 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_611(0);
			func_612();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1580 >= 0)
			{
				if (!func_567(uParam0->f_912[uParam0->f_1584 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_613(uParam0, uParam0->f_1580))
				{
					if (func_614(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						func_615(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					func_615(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
				}
				func_616(uParam0);
			}
		}
	}
	bVar0 = func_617(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_168(uParam0, 268435456) && bVar1) && !func_168(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS((uParam0->f_912[uParam0->f_1580 /*41*/])->f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					iVar2 = 1;
				}
			}
			if (!bVar3 || iVar2)
			{
				func_618(uParam0, 131072);
				func_618(uParam0, 268435456);
			}
		}
		if (func_566(uParam0, 64) || (uParam0->f_1580 >= 0 && !func_567(uParam0->f_912[uParam0->f_1580 /*41*/], 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_606(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_603(uParam0) == 3 || func_168(uParam0, 131072))
	{
		func_619(uParam0);
		if (!func_168(uParam0, 262144))
		{
			if ((bVar0 && func_168(uParam0, 65536)) || func_168(uParam0, 131072))
			{
				func_618(uParam0, 32768);
				func_608(uParam0, 4);
				func_609(uParam0, 10);
				uParam0->f_1665 = 1;
				func_610(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_603(uParam0) >= 3)
	{
		func_620(uParam0, iParam5);
		func_621(uParam0);
		if (!func_622(uParam0, 1))
		{
			func_623(uParam0);
		}
		func_624(uParam0);
	}
	switch (func_603(uParam0))
	{
		case 0:
			func_625(uParam0, Param1, iParam5);
			break;
		
		case 1:
			func_626(uParam0);
			break;
		
		case 2:
			func_627(uParam0);
			break;
		
		case 3:
			if (func_311(uParam0))
			{
				func_628(2);
				func_615(uParam0, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1580 /*22*/])->f_1, 1065353216);
				func_257(&(uParam0->f_1768));
				func_608(uParam0, 1);
				func_629();
				func_609(uParam0, 5);
			}
			break;
		
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_168(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_603(uParam0) == 5)
			{
				if (func_630(uParam0))
				{
					func_608(uParam0, 2);
					func_609(uParam0, 6);
				}
			}
			if (func_603(uParam0) == 6)
			{
				if (func_631(uParam0))
				{
					func_608(uParam0, 3);
					func_609(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || func_632(&(uParam0->f_1768)) >= 15f)
			{
				if (func_633(uParam0, iParam5))
				{
					if (func_634(uParam0))
					{
						uParam0->f_1581 = func_635(uParam0);
						func_257(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_0x8BC7C1F929D07BF3(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_608(uParam0, 6);
						func_609(uParam0, 9);
					}
					else
					{
						func_608(uParam0, 4);
						func_609(uParam0, 10);
						func_610(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		
		case 9:
			if (func_633(uParam0, iParam5))
			{
				func_610(uParam0, iParam5);
				func_609(uParam0, 10);
				return 1;
			}
			break;
		
		case 10:
			return 1;
	}
	return 0;
}

int func_311(var uParam0)
{
	if (uParam0->f_1666)
	{
		return 0;
	}
	return uParam0->f_1665;
}

int func_312(int iParam0)
{
	if (!func_55(iParam0))
	{
		return -1;
	}
	return func_364(iParam0);
}

int func_313(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_314(int iParam0)
{
	return iParam0 & 31;
}

int func_315(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_316(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_317(var uParam0)
{
	*uParam0 = 0;
}

void func_318(int iParam0)
{
	if (func_636(179) || func_636(180))
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_37 == Global_1905944->f_5698)
			{
				func_637(1);
			}
		}
	}
	if (func_638(179))
	{
		func_639(179);
	}
	if (func_638(180))
	{
		func_639(180);
	}
}

void func_319(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_320(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_204(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_318(iParam0);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_231(iParam0, func_372(iParam0), 0, 1);
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_231(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_231(iParam0, vParam2, 0, 0);
	}
	MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
	func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
}

void func_321(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_246((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 5)
					{
						func_253((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_253((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_322(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_323(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_324(int iParam0)
{
	if (!func_322(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_325()
{
	return &Global_1899515;
}

void func_326(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_327(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_328(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_329(int iParam0)
{
	if (!func_322(iParam0))
	{
		return;
	}
	if (func_211(iParam0))
	{
		func_640(iParam0);
	}
	else
	{
		func_641(iParam0);
	}
}

int func_330(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_331(int iParam0)
{
	int iVar0;
	
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_330(iParam0))
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_332(int iParam0)
{
	int iVar0;
	
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_330(iParam0))
	{
		return;
	}
	iVar0 = func_124(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_333(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_204(iVar0))
		{
			if (func_114(iVar0, 4))
			{
				func_334(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_334(int iParam0, bool bParam1)
{
	if (!func_114(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_262(iParam0), func_263(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_262(iParam0), func_263(iParam0), 2, "");
		func_264(iParam0, 16);
	}
	else
	{
		if (func_114(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_262(iParam0), func_263(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_262(iParam0), func_263(iParam0), 0, "");
		}
		func_115(iParam0, 16);
	}
}

void func_335(int iParam0, bool bParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_114(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_262(iParam0), func_263(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_114(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_262(iParam0), func_263(iParam0), 1, "");
		}
		func_264(iParam0, 8);
	}
	else
	{
		if (func_114(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_262(iParam0), func_263(iParam0), 0, "");
		}
		func_115(iParam0, 8);
	}
}

void func_336(int iParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	
	sVar0 = func_531(iParam8, sParam1, sParam4, sParam5, sParam6, sParam7);
	if (iParam2 == 1)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	func_532(iParam0, sParam1, sVar0, fParam3);
}

int func_337(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return (func_642(sParam0, 0, 0, -1, -1, 0) && func_643());
}

int func_338(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	
	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_644(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_531(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_644(sVar0, iParam1, 0, 0, 1, 1);
}

int func_339()
{
	if (func_203() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_340(int iParam0, int iParam1, int iParam2)
{
	func_645(iParam0, iParam2);
	if (func_646(iParam0))
	{
		func_647(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_159(((*Global_1347702)[iParam0 /*49*/])->f_15))
		{
			func_160(((*Global_1347702)[iParam0 /*49*/])->f_15, 0, 2);
		}
	}
}

void func_341(int iParam0)
{
	func_344();
	if (!func_204(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

int func_342(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 2097152))
		{
			if (func_452(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 256))
		{
			if (!func_452(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_648(iParam0);
}

int func_343(int iParam0)
{
	float fVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_43))
	{
		return 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43))
	{
		return 0;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_28 != ((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_28)
	{
		return 0;
	}
	else if (Global_1347702[iParam0 /*49*/] != Global_1347702[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])
	{
		return 0;
	}
	else if (!func_649(iParam0))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(((*Global_1347702)[iParam0 /*49*/])->f_43, false, false), func_63(((*Global_1347702)[iParam0 /*49*/])->f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return 0;
	}
	return 1;
}

void func_344()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_650(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_204(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iVar1 /*49*/])->f_37))
				{
					func_109(iVar1, 0);
					func_231(iVar1, func_63(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_345(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 4))
	{
		iVar0 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar1 = 908516622;
	}
	else
	{
		iVar2 = func_530(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 67108864))
	{
		func_651("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_263(iParam0));
		func_652("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, 1433015236, "MISSION_COMPLETE_DETAILS", -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

var func_346(int iParam0)
{
	char[] cVar0[8];
	
	if (!func_55(iParam0))
	{
		return cVar0;
	}
	switch (func_104(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_653(iParam0) /*74*/])->f_8;
			break;
		
		case 8:
			cVar0 = ((*Global_1347702)[func_105(iParam0) /*49*/])->f_3;
			break;
		
		case 11:
			if (iParam0 == func_456(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_347(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (!func_55(iParam0))
	{
		return;
	}
	if (func_312(iParam0) == 4)
	{
		func_654(iParam0, func_325());
		if (!func_364(iParam0) == 5 && !func_364(iParam0) == 6)
		{
			if (bParam3)
			{
				func_368(iParam0, 6);
			}
			else
			{
				func_368(iParam0, 5);
			}
			func_366(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_201(1);
	}
	iVar0 = func_104(iParam0);
	bVar1 = func_203() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_655(0, 2);
		if (!bVar1 && bParam1)
		{
			func_656();
		}
	}
	else
	{
		func_367(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_657(iParam0);
	}
	else
	{
		Var2 = { func_658(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_171(32768))
		{
			Var4 = { func_658(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_364(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_105(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_105(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_105(iParam0) != 95 && func_105(iParam0) != 82) && !func_29(((*Global_1347702)[func_105(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_105(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_105(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_660(func_105(iParam0), iVar6, func_659());
	}
	else if (iVar0 == 8)
	{
		func_661(func_105(iParam0), iVar6, func_659(), func_339());
	}
	if (!func_364(iParam0) == 5 && !func_364(iParam0) == 6)
	{
		iVar9 = func_662(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_663(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_664(func_105(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_665((iVar10 - 20), 0, iVar10);
					iVar11 = func_665((iVar11 - 10), 0, iVar11);
				}
				func_369(1);
				func_370(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			
			case 4:
				func_370(45, 0, 1);
				break;
			
			case 8:
				iVar10 = func_666(func_105(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_665((iVar10 - 20), 0, iVar10);
					iVar11 = func_665((iVar11 - 10), 0, iVar11);
				}
				func_370(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_667(func_105(iParam0)))
				{
					func_668(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			
			case 9:
				func_370(120, 0, 1);
				break;
			
			case 2:
				func_370(120, 0, 1);
				break;
			
			case 6:
				func_370(func_669(func_106(iParam0)), 0, 1);
				break;
			
			case 5:
				func_370(120, 0, 1);
				break;
		}
	}
	func_400(iParam0, 1);
	func_654(iParam0, func_325());
	func_366(iParam0);
	if ((!func_364(iParam0) == 0 && bParam1) && func_203() == -1)
	{
		iVar12 = func_397(iParam0);
		if (iVar12 != -1)
		{
			func_398(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_399();
			if (iVar12 != -1)
			{
				func_398(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			
			case 6:
				switch (func_105(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			
			case 8:
				if (func_204(func_105(iParam0)) && func_29(((*Global_1347702)[func_105(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_105(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_670();
				}
				break;
			
			case 8:
				if (func_105(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_670();
				}
				break;
		}
	}
	if (!func_364(iParam0) == 5 && !func_364(iParam0) == 6)
	{
		if (bParam3)
		{
			func_368(iParam0, 6);
		}
		else
		{
			func_368(iParam0, 5);
		}
		func_366(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_105(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					
					case 1:
						func_671();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					
					case 4:
						func_672(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(-1267972061);
						func_672(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(1619534881);
						func_672(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(-755457379);
						func_672(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(1015404643);
						func_672(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(-1724192342);
						func_672(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(1310680212);
						func_672(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(-566881549);
						func_672(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(-1753730528);
						func_672(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(147796381);
						func_672(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(-378547623);
						func_672(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(829545206);
						func_672(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_673(891318243);
						func_672(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_674();
						func_675(967523420);
						func_676();
						func_677();
						break;
					
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_678(10, 0)));
						break;
					
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					
					case 15:
						func_672(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_299(449, 0);
						}
						break;
					
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_299(446, 0);
						}
						break;
					
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					
					case 18:
						func_679(304805134, 1, 1);
						if (!func_452(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_347(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					
					case 20:
						func_680();
						break;
					
					case 26:
						func_681();
						break;
					
					case 17:
						func_682(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_683())
						{
							func_684(1905553950);
						}
						break;
					
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					
					case 33:
						if (!func_685(-514575035, -1))
						{
							iVar15 = func_325();
							func_686(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_687(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_683())
						{
							func_684(1529685685);
						}
						break;
					
					case 34:
						if (func_683())
						{
							func_684(-2082646505);
						}
						break;
					
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					
					case 31:
						func_688();
						break;
					
					case 37:
						func_689();
						if (func_690())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(2116153146, iVar14);
						}
						break;
					
					case 38:
						func_691();
						break;
					
					case 43:
						func_692();
						break;
					
					case 44:
						if (!func_452(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_347(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_452(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_347(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					
					case 52:
						break;
					
					case 47:
						func_693();
						break;
					
					case 59:
						func_694();
						break;
					
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					
					case 61:
						func_695();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					
					case 67:
						func_696();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_299(451, 0);
						}
						if (!func_697(-1992824800))
						{
							if (func_697(1520110311))
							{
								iVar16 = func_325();
								func_686(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_687(1937177603, iVar16, 1);
							}
						}
						if (func_457(4))
						{
							if (!func_698(684296857, 1, 0))
							{
								iVar17 = func_325();
								func_686(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_687(-1439688706, iVar17, 1);
							}
						}
						func_672(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_699(89200);
						func_699(2300);
						func_699(2300);
						break;
					
					case 68:
						func_700();
						break;
					
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_701();
						func_699(-139100);
						break;
					
					case 69:
						if (func_452(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_699(-6000);
						}
						break;
					
					case 70:
						func_699(23400);
						func_699(1900);
						func_699(-15000);
						break;
					
					case 71:
						func_699(-5500);
						break;
				}
				break;
			
			case 8:
				switch (func_105(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					
					case 58:
						func_702();
						break;
					
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 727067922);
						break;
					
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_703();
						break;
					
					case 66:
						func_704();
						func_705();
						break;
					
					case 67:
						if (!func_706(6))
						{
							func_707(6);
						}
						if (!func_706(3))
						{
							func_707(3);
						}
						if (func_683())
						{
							func_684(1534638301);
						}
						break;
					
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					
					case 9:
						if (func_452(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_708(0);
							func_699(40500);
						}
						else
						{
							func_708(0);
							func_699(46500);
						}
						break;
				}
				break;
			
			case 6:
				switch (func_105(iParam0))
				{
					case 0:
						switch (func_106(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_709(iParam0);
		func_710();
		switch (iVar0)
		{
			case 1:
				switch (func_105(iParam0))
				{
					case 4:
						func_711(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 61:
					case 62:
					case 63:
						func_711(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 25:
						func_711(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 12:
						func_711(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 53:
						func_711(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 20:
						func_711(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 19:
						func_711(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					
					case 24:
						iVar18 = func_446(iParam0);
						func_711(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 28:
						func_711(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 34:
						func_711(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_698(-2046502963, 1, 0))
						{
							func_672(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					
					case 29:
						func_711(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					
					case 37:
						break;
					
					case 58:
						break;
					
					case 57:
						func_711(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					
					case 76:
						func_711(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 72:
						if (func_446(iParam0) == 0)
						{
							func_711(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_711(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			
			case 8:
				if (func_29(((*Global_1347702)[func_105(iParam0) /*49*/])->f_12, 536870912))
				{
					func_712(11, 1);
				}
				switch (func_105(iParam0))
				{
					case 109:
						func_711(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 55:
						func_712(8, 1);
						break;
					
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					
					case 94:
						func_711(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 63:
						func_711(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					
					case 37:
						func_711(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 116:
						func_711(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			
			case 11:
				if (iParam0 == func_456(0, 10, 11, 2116153146))
				{
					func_711(iParam0, func_446(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_456(0, 7, 11, -379687487))
				{
					func_711(iParam0, func_713(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_456(0, 8, 11, -1386089015))
				{
					func_711(iParam0, func_713(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_456(0, 11, 11, -1952009645))
				{
					func_711(iParam0, func_713(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_456(0, 12, 11, 2065895756))
				{
					func_711(iParam0, func_713(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_364(iParam0) == 0)
			{
				if (func_103(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(func_103(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_365(func_104(iParam0), func_103(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_105(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_714(func_346(Global_1879514->f_1));
						if (iVar0 == 8 && func_105(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					
					case 4:
						iVar20 = 2;
						break;
					
					case 6:
						iVar20 = 1;
						break;
					
					case 2:
						iVar20 = 9;
						break;
					
					case 8:
						if (func_204(func_105(iParam0)) && func_29(((*Global_1347702)[func_105(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					
					case 7:
						iVar20 = 0;
						break;
					
					case 5:
						iVar20 = 12;
						break;
					
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_715(bParam2, iVar20);
		}
	}
	func_371(1);
	if ((bVar13 || func_670()) && (func_104(iParam0) == 1 || func_104(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_348(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (STATS::_0x01F4D242765C6B24(func_103(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_365(func_104(iParam0), func_103(iParam0), iVar0);
		if (func_171(32768))
		{
			iVar1 = func_104(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_456(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_716();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_268(iParam0))
	{
		func_160(iParam0, 0, 2);
	}
	else if (func_159(iParam0))
	{
		if (!func_364(iParam0) == 5 && !func_364(iParam0) == 6)
		{
			if (bParam1)
			{
				func_368(iParam0, 6);
			}
			else
			{
				func_368(iParam0, 5);
			}
			func_366(iParam0);
		}
	}
	switch (func_104(iParam0))
	{
		case 1:
			switch (func_105(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		
		case 8:
			switch (func_105(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

void func_349(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	char[] cVar4[8];
	int iVar5;
	int iVar6;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_262(iParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_263(iParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(func_263(iParam0));
		}
		func_115(iParam0, 4);
		func_115(iParam0, 8);
		return;
	}
	else if (func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 4))
	{
		func_267(Global_1347702[iParam0 /*49*/]);
		func_265(iParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_263(iParam0)))
		{
			StringCopy(&vVar1, "", 24);
			cVar4 = func_531(0, &vVar1, 0, 0, -1, -1);
			func_532(iParam0, &vVar1, cVar4, -1082130432);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, func_263(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		func_115(iParam0, 4);
		func_115(iParam0, 8);
		return;
	}
	iVar5 = 0;
	if (func_114(iParam0, 8))
	{
		iVar5 = 1;
	}
	iVar6 = 0;
	if (func_114(iParam0, 16))
	{
		iVar6 = 1;
	}
	func_267(Global_1347702[iParam0 /*49*/]);
	func_265(iParam0);
	MemCopy(&vVar1, {((*Global_1347702)[iParam0 /*49*/])->f_1}, 3);
	StringConCat(&vVar1, "_obj", 24);
	if (func_114(iParam0, 64))
	{
		StringConCat(&vVar1, "3", 24);
	}
	else if (func_114(iParam0, 32))
	{
		StringConCat(&vVar1, "2", 24);
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&vVar1))
	{
		cVar4 = func_531(0, &vVar1, 0, 0, -1, -1);
		func_532(iParam0, &vVar1, cVar4, -1082130432);
		if (func_114(iParam0, 16) || iVar6)
		{
			func_334(iParam0, 1);
		}
		if (func_114(iParam0, 8) || iVar5)
		{
			func_335(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&vVar1, "", 24);
		cVar4 = func_531(0, &vVar1, 0, 0, -1, -1);
		func_532(iParam0, &vVar1, cVar4, -1082130432);
		func_335(iParam0, 1);
		if (func_114(iParam0, 16) || iVar6)
		{
			func_334(iParam0, 1);
		}
	}
}

int func_350(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_351(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_352(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_353(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_355(1);
	}
}

void func_354(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_355(0);
	}
}

void func_355(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_356(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

Vector3 func_357(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	vector3 vVar0;
	
	vVar0 = { func_717(vParam0, uParam3, uParam4, bParam5, bParam6, 1, iParam7, bParam8, fParam9, iParam10, -1, 1103626240) };
	if (func_242(vVar0))
	{
		vVar0 = { func_717(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_358(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_359(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_360()
{
	func_718();
	func_719();
	func_720();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_361(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	if (func_203() == -1)
	{
		func_721();
	}
	else
	{
		return;
	}
	func_722();
	Global_40.f_9.f_14 = func_325();
	Global_40.f_9.f_20 = LAW::_0x54310AAB97B92816(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = _NAMESPACE59::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_723())
		{
			func_359(Global_1310720->f_1);
		}
		else if (func_724() == func_172(Global_36, 1) && func_725() != 2)
		{
			func_359(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_359(Global_36);
		}
		func_726(Global_36, &vVar0, &uVar4);
		if (!func_723())
		{
			if (func_727(vVar0, Global_36) < func_727(Global_40.f_9.f_7, Global_36))
			{
				func_359(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_172(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_726(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_271(Global_1935630, 8192);
	}
	func_728();
}

void func_362(struct<16> Param0, int iParam16)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_729(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_730(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_731(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_363(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_246((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 7)
					{
						func_253((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_253((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 2)
					{
						func_253((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

int func_364(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_732(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_365(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_203() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_366(int iParam0)
{
	return func_734(func_733(iParam0));
}

int func_367(bool bParam0)
{
	if (!bParam0 && func_735(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_368(int iParam0, int iParam1)
{
	if (!func_55(iParam0))
	{
		return;
	}
	func_736(iParam0, iParam1);
}

void func_369(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_370(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_737(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

void func_371(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

Vector3 func_372(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		
		case 33:
			return 905.92f, -421.19f, 88.23f;
		
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		
		case 38:
			return -329.32f, -366.6f, 87f;
		
		case 39:
			return 97.4f, -212.47f, 111.6f;
		
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		
		case 84:
			return -73.18f, -392.3f, 70.84f;
		
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		
		case 104:
			return 2407f, -585.32f, 40.66f;
		
		case 105:
			return -219.25f, 212.93f, 94.15f;
		
		case 116:
			return 211.99f, 512.98f, 126.54f;
		
		case 117:
			return -329.2f, 797.9f, 116.89f;
		
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		
		case 135:
			return -576.08f, 524.9f, 97.86f;
		
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		
		default:
			break;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

bool func_373()
{
	return func_738();
}

var func_374(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_375()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_376()
{
	func_739(10);
}

void func_377()
{
	func_739(7);
}

void func_378()
{
	func_739(9);
}

void func_379(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
			{
				func_740(uParam0, Local_14.f_7);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_7));
				if (!bParam2 && !func_279(Global_35, Local_14.f_7, 80f, 1))
				{
					func_20(&(Local_14.f_7));
					Local_14.f_7 = 0;
				}
				else
				{
					PED::SET_PED_KEEP_TASK(Local_14.f_7, true);
					Local_14.f_7 = 0;
				}
			}
			break;
		
		case 2:
			if (!bParam2)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[iVar0])) && !func_741(iVar0, 43))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(&(Local_14.f_90[iVar0])));
						OBJECT::_0xCAAF2BCCFEF37F77(&(Local_14.f_90[iVar0]), 40);
						Local_14.f_90[iVar0] = 0;
					}
					iVar0++;
				}
				if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_85))
				{
					PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_85, 40);
					PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_85);
					Local_14.f_85 = 0;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[iVar0])) && func_741(iVar0, 43))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(&(Local_14.f_90[iVar0])));
						Local_14.f_90[iVar0] = 0;
					}
					iVar0++;
				}
				if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_85))
				{
					PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_85, 40);
					PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_85);
					Local_14.f_85 = 0;
				}
			}
			break;
		
		case 3:
			if (!bParam2)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[iVar0])) && func_741(iVar0, 43))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(&(Local_14.f_90[iVar0])));
						OBJECT::DELETE_OBJECT(Local_14.f_90[iVar0]);
						Local_14.f_90[iVar0] = 0;
					}
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_242))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_242));
					OBJECT::DELETE_OBJECT(&(Local_14.f_242));
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_242))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_242));
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_242));
				}
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[iVar0])) && func_741(iVar0, 43))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(&(Local_14.f_90[iVar0])));
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_14.f_90[iVar0]);
						Local_14.f_90[iVar0] = 0;
					}
					iVar0++;
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_434.f_6))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_434.f_6));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_434.f_5))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_434.f_5));
			}
			if (!bParam2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_434.f_6))
				{
					OBJECT::_0xCAAF2BCCFEF37F77(Local_14.f_434.f_6, 40);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_434.f_6));
					Local_14.f_434.f_6 = 0;
				}
				func_20(&(Local_14.f_434.f_5));
				Local_14.f_434.f_5 = 0;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_434.f_6))
			{
				OBJECT::_0xCAAF2BCCFEF37F77(Local_14.f_434.f_6, 40);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_434.f_6));
			}
			break;
		
		case 5:
			if (!bParam2)
			{
				if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_86))
				{
					PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_86, 40);
					PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_86);
					Local_14.f_86 = 0;
				}
			}
			else if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_86))
			{
				PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_86, 40);
				PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_86);
				Local_14.f_86 = 0;
			}
			break;
		
		case 7:
			func_382(&(Local_14.f_112));
			func_382(&(Local_14.f_133));
			func_382(&(Local_14.f_154));
			func_382(&(Local_14.f_175));
			func_742(43);
			break;
		
		case 6:
			func_382(&Local_776);
			break;
		
		case 8:
			if (TASK::_0x841475AC96E794D1(Local_14.f_87))
			{
				TASK::_0x81948DFE4F5A0283(Local_14.f_87);
			}
			if (TASK::_0x841475AC96E794D1(Local_14.f_89))
			{
				TASK::_0x81948DFE4F5A0283(Local_14.f_89);
			}
			if (TASK::_0x841475AC96E794D1(Local_14.f_88))
			{
				TASK::_0x81948DFE4F5A0283(Local_14.f_88);
			}
			Local_14.f_87 = 0;
			Local_14.f_89 = 0;
			Local_14.f_88 = 0;
			STREAMING::_0x4EDDD9E9CA5AF985(2054734837);
			break;
		
		case 9:
			func_743(&Local_14);
			func_381(&Local_14);
			func_744(&Local_14);
			break;
	}
	MISC::CLEAR_BIT(&iLocal_931, iParam1);
	MISC::CLEAR_BIT(&iLocal_932, iParam1);
}

void func_380(var uParam0, var uParam1, bool bParam2)
{
	if (uParam1->f_46)
	{
		func_745();
	}
	if (!bParam2)
	{
		if (TASK::_0x841475AC96E794D1(uParam0->f_87))
		{
			TASK::_0x81948DFE4F5A0283(uParam0->f_87);
		}
		if (TASK::_0x841475AC96E794D1(uParam0->f_89))
		{
			TASK::_0x81948DFE4F5A0283(uParam0->f_89);
		}
		if (TASK::_0x841475AC96E794D1(uParam0->f_88))
		{
			TASK::_0x81948DFE4F5A0283(uParam0->f_88);
		}
		func_382(&(uParam0->f_112));
		func_382(&(uParam0->f_133));
		if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_85))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(uParam0->f_85);
		}
		if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_86))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(uParam0->f_86);
		}
		func_381(uParam0);
		func_743(uParam0);
		func_744(uParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 234, false);
	}
	else if (uParam1->f_46 && !func_282(uParam0, 1))
	{
		func_377();
	}
	if (func_282(uParam0, 24))
	{
		func_746();
	}
	if (uParam1->f_44)
	{
		func_747(40, 1, 0, 0, 12, 0, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		func_748(uParam0->f_8, 0);
	}
	func_749(&(uParam0->f_477), 106);
}

void func_381(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_531))
	{
		func_750(uParam0->f_531);
	}
}

void func_382(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

void func_383(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_384(bool bParam0)
{
	if (func_197(512) == bParam0)
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_14.f_7, !bParam0);
	AUDIO::STOP_PED_SPEAKING(Local_14.f_7, bParam0);
	PED::SET_PED_CONFIG_FLAG(Local_14.f_7, 66, bParam0);
	PED::SET_PED_CAN_BE_TARGETTED(Local_14.f_7, !bParam0);
	if (bParam0)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_7, -1538724068);
		func_178(512);
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_7, 1391706777);
		func_309(512);
	}
}

struct<2> func_385(int iParam0)
{
	char cVar0[16];
	int iVar2;
	
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 2);
	if (!(func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 2) && func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 4)))
	{
		iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0);
		StringCopy(&cVar0, HUD::_0xD8402B858F4DDD88(&cVar0, (iVar2 - 1)), 16);
	}
	return cVar0;
}

struct<2> func_386(int iParam0)
{
	struct<2> Var0;
	char* sVar2;
	int iVar3;
	
	Var0 = { func_385(iParam0) };
	sVar2 = func_751(&Var0);
	iVar3 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar2);
	sVar2 = HUD::_0x806862E5D266CF38(sVar2, 1, iVar3);
	StringCopy(&Var0, sVar2, 16);
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

int func_387(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_388(int iParam0)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	if (!func_752(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_389(int iParam0)
{
	if (func_387(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_390(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_387(iParam0))
	{
		return;
	}
	if (func_752(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_476(iParam0, 56, 1);
		func_74(&(Global_1359489->f_40), 1);
	}
	func_391(iParam0, 0);
	func_753(iParam0, 4, 0);
	func_392(iParam0);
	func_754(iParam0);
	func_755(iParam0, 37, 1);
	bVar0 = func_756(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_757(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_469(iParam0, 64, 1))
	{
		func_755(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_755(iParam0, 33, 1);
		func_755(iParam0, 34, 1);
		func_758(iParam0, 1056964608, -1, 1061158912);
		func_759(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_476(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_476(iParam0, 35, 1);
			if (bParam8)
			{
				func_476(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_760(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_755(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_476(iParam0, 33, 1);
		func_759(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_74(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_228(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_476(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_761(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_469(iParam0, 45, 1))
	{
		func_755(iParam0, 45, 1);
	}
	func_762(iParam0, 16, 1);
	func_755(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_756(func_763(iParam0), 0))
		{
			func_764(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_391(int iParam0, bool bParam1)
{
	if (!func_765(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_766(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_753(iParam0, 1, 0);
		}
	}
	func_753(iParam0, 16, bParam1);
}

void func_392(int iParam0)
{
	func_753(iParam0, 8, 0);
}

void func_393(int iParam0)
{
	vector3 vVar0;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	func_767(vVar0, 0);
}

int func_394(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 143:
			*uParam2 = 1754500170;
			*uParam1 = 14;
			return 1;
		
		default:
			break;
	}
	*uParam2 = -1600776215;
	*uParam1 = -1;
	return 0;
}

int func_395(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_768(iParam0))
	{
		return 0;
	}
	if (!func_769(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		return func_770(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_396(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_768(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			func_771(iParam0, (*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_397(int iParam0)
{
	int iVar0;
	int iVar1;
	
	switch (func_104(iParam0))
	{
		case 1:
			iVar0 = func_105(iParam0);
			return func_772(iVar0);
		
		case 8:
			iVar1 = func_105(iParam0);
			if (func_29(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_773(iVar1);
			}
			break;
	}
	return -1;
}

void func_398(bool bParam0)
{
	int iVar0;
	
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_203() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_774(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_775();
		Global_1898077->f_9 = func_776(Global_1894899->f_2);
		func_777(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_399()
{
	if (!func_452(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_452(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_452(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_452(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_452(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_452(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_452(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_400(int iParam0, bool bParam1)
{
	if (func_203() != -1)
	{
		return;
	}
	if (func_54(0) != iParam0)
	{
		return;
	}
	if (func_778(iParam0))
	{
		if (bParam1)
		{
			func_779(-525676072);
		}
		else
		{
			func_780(-525676072);
		}
	}
}

void func_401(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_402(var uParam0)
{
	if (func_781(uParam0->f_1, 3))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_403(var uParam0)
{
	if (func_781(uParam0->f_3, 3))
	{
		switch (uParam0->f_1)
		{
			case 2:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
				{
					TASK::REMOVE_WAYPOINT_RECORDING(*uParam0);
				}
				break;
			
			case 1:
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				}
				break;
		}
		uParam0->f_3 = 0;
	}
}

void func_404(var uParam0)
{
	if (func_781(uParam0->f_1, 3))
	{
		STREAMING::REMOVE_ANIM_DICT(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_405(var uParam0)
{
	if (func_781(uParam0->f_1, 3))
	{
		STREAMING::REMOVE_CLIP_SET(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_406(int iParam0, int iParam1)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

void func_407()
{
	if (func_330(0))
	{
		func_782(0);
	}
	if (func_330(1))
	{
		func_782(1);
	}
	if (func_330(5))
	{
		func_782(5);
	}
	if (func_330(6))
	{
		func_783(6);
	}
}

int func_408(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = func_784(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_409(int iParam0, int iParam1)
{
	func_785(iParam0, iParam1);
}

int func_410(int iParam0)
{
	return func_786(119, iParam0);
}

void func_411(int iParam0, var uParam1)
{
	func_787(119, iParam0, uParam1);
}

int func_412(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = func_410(0);
		return MISC::IS_BIT_SET(iVar0, iParam0);
	}
	return 0;
}

struct<4> func_413(int iParam0)
{
	struct<4> Var0;
	
	Var0 = { 558.471f, 169.855f, 133.3435f };
	Var0.f_3 = 17.242f;
	return Var0;
}

int func_414(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	if (func_788(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_415(var uParam0)
{
	func_419(uParam0, (func_789(uParam0) - 6f));
	func_790(uParam0, 1);
}

void func_416(var uParam0)
{
	func_427(uParam0, 0);
	func_417(uParam0, 0);
	func_424(uParam0, 1);
	func_791(uParam0, 1);
	func_792(uParam0, 0);
	func_793(uParam0, 1);
	func_794(uParam0, 1, 1, 1);
}

void func_417(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_795(&(uParam0->f_1), 2048);
	}
	else
	{
		func_796(&(uParam0->f_1), 2048);
	}
}

void func_418(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_419(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

Vector3 func_420()
{
	return 0f, 0.0368652f, 0f;
}

int func_421(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	char* sVar0;
	
	if (func_797(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (func_797(uParam0->f_1, 16))
			{
				func_798(uParam0, vParam1, iParam4, fParam5);
			}
			else
			{
				func_799(uParam0, vParam1, iParam4, fParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(-458373790);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(-458373790))
	{
		if (!func_797(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_800(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = func_802(func_801(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_803(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 15f)), BUILTIN::FLOOR((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, func_804(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (func_805(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_796(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_796(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_422(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_795(&(uParam0->f_1), 4);
	}
	else
	{
		func_796(&(uParam0->f_1), 4);
	}
}

void func_423(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_795(&(uParam0->f_1), 2);
	}
	else
	{
		func_796(&(uParam0->f_1), 2);
	}
}

void func_424(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_795(&(uParam0->f_1), 256);
	}
	else
	{
		func_796(&(uParam0->f_1), 256);
	}
}

void func_425(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_795(&(uParam0->f_1), 1);
	}
	else
	{
		func_796(&(uParam0->f_1), 1);
	}
}

void func_426(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_795(&(uParam0->f_1), 8);
	}
	else
	{
		func_796(&(uParam0->f_1), 8);
	}
}

void func_427(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_795(&(uParam0->f_1), 16384);
	}
	else
	{
		func_796(&(uParam0->f_1), 16384);
	}
}

void func_428(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_795(&(uParam0->f_1), 16);
	}
	else
	{
		func_796(&(uParam0->f_1), 16);
	}
}

bool func_429(var uParam0)
{
	return *uParam0 != 0;
}

void func_430(var uParam0)
{
	func_806(&(uParam0->f_1));
	func_806(&(uParam0->f_12));
}

bool func_431(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_432(int iParam0, int iParam1)
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
}

bool func_433(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_434(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_807(func_325());
	if (func_797(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_797(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_435(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_808(iParam0);
	if (func_809(iVar1))
	{
		iVar0 = ((*Global_1835011)[iVar1 /*74*/])->f_1;
	}
	else
	{
		iVar2 = func_810(iParam0);
		if (func_204(iVar2))
		{
			iVar0 = ((*Global_1347702)[iVar2 /*49*/])->f_15;
		}
		else if (iParam0 == 2116153146)
		{
			iVar0 = func_456(0, 10, 11, 2116153146);
		}
	}
	return iVar0;
}

int func_436(var uParam0)
{
	if (func_781(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_781(uParam0->f_1, 1))
	{
		func_811(uParam0);
	}
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

bool func_437(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_438(var uParam0)
{
	if (func_781(uParam0->f_3, 2))
	{
		return 1;
	}
	if (!func_781(uParam0->f_3, 1))
	{
		func_813(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_812(&(uParam0->f_3), 2);
				return 1;
			}
			break;
		
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_812(&(uParam0->f_3), 2);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_439(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_440(var uParam0)
{
	if (func_781(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_781(uParam0->f_1, 1))
	{
		func_814(uParam0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

bool func_441(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_442(var uParam0)
{
	if (func_781(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_781(uParam0->f_1, 1))
	{
		func_815(uParam0);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(*uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_443(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_385(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (HUD::_0x2C729F2B94CEA911(&Var0))
		{
			if (!HUD::_0xD0976CC34002DB57(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_444(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2573)))
	{
		if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_2573)))
		{
			if (!HUD::_0xD0976CC34002DB57(&(uParam0->f_2573)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_445(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam1 == 7)
	{
		if (uParam0->f_177 == 10)
		{
			iVar0 = uParam0->f_750;
		}
		else if (func_6(uParam0->f_172, 8))
		{
			iVar0 = uParam0->f_749;
		}
		else
		{
			iVar0 = uParam0->f_748;
		}
	}
	else if (iParam1 == 1)
	{
		iVar0 = uParam0->f_748;
	}
	else if (iParam1 == 2)
	{
		iVar0 = uParam0->f_749;
	}
	else if (iParam1 == 4)
	{
		iVar0 = uParam0->f_750;
	}
	if (func_816(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_446(int iParam0)
{
	if (!func_55(iParam0))
	{
		return -1;
	}
	return func_817(iParam0);
}

int func_447(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_448(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -589165916;
		
		case 1:
			return -1894360593;
		
		case 2:
			return 581819093;
		
		case 3:
			return 687859577;
		
		case 4:
			return -103573613;
		
		case 5:
			return 1202375449;
		
		case 6:
			return 2038046186;
		
		case 7:
			return -839878969;
		
		case 8:
			return -360730635;
		
		case 9:
			return 194099983;
		
		case 10:
			return -1891229662;
		
		case 11:
			return -668333238;
		
		case 12:
			return 99378894;
		
		case 13:
			return 673012160;
		
		case 14:
			return -1220302226;
		
		case 15:
			return 2061320468;
		
		case 16:
			return -709866131;
		
		case 17:
			return -1348173149;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 5:
			return 4;
		
		case 6:
			return 79;
		
		case 0:
			return 43;
		
		case 2:
			return 98;
		
		case 4:
			return 58;
		
		case 1:
			return 71;
		
		case 3:
			return 9;
		
		case 7:
			return 22;
		
		case 8:
			return 37;
		
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_450(int iParam0)
{
	if (func_104(iParam0) != 4)
	{
		return -1;
	}
	return func_105(iParam0);
}

int func_451(var uParam0, int iParam1)
{
	return 0;
}

int func_452(int iParam0, bool bParam1)
{
	switch (func_312(iParam0))
	{
		case 5:
			return 1;
		
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_453(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		
		case 4:
			return 105;
		
		case 8:
			return 78;
		
		case 16:
			return 51;
		
		case 32:
			return 41;
		
		case 64:
			return 108;
		
		case 128:
			return 44;
		
		case 256:
			return 53;
		
		case 512:
			return 84;
		
		case 1024:
			return 22;
		
		case 2048:
			return 73;
		
		case 4096:
			return 103;
		
		case 8192:
			return 18;
		
		case 16384:
			return 46;
		
		case 32768:
			return 0;
		
		case 65536:
			return 106;
		
		case 131072:
			return 47;
		
		case 262144:
			return 101;
		
		default:
			break;
	}
	return -1;
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		
		case 4:
			return -520696743;
		
		case 8:
			return -295901403;
		
		case 16:
			return -1445837674;
		
		case 32:
			return -75278298;
		
		case 64:
			return -675249331;
		
		case 128:
			return -1822243680;
		
		case 256:
			return -1307199059;
		
		case 512:
			return -17701163;
		
		case 1024:
			return -172170798;
		
		case 2048:
			return 1836682179;
		
		case 4096:
			return -67934460;
		
		case 8192:
			return 410776537;
		
		case 16384:
			return -240986174;
		
		case 32768:
			return 1505721140;
		
		case 65536:
			return 2023114891;
		
		case 131072:
			return -30217677;
		
		case 262144:
			return 653209800;
		
		default:
			break;
	}
	return 0;
}

int func_456(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			
			case 10:
				return -1;
			
			case 12:
				return -1;
			
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			
			case 8:
				return -1;
			
			case 7:
				return -1;
			
			case 6:
				return -1;
			
			default:
				return -1;
		}
	}
	if (iVar2 >= func_818())
	{
		iVar2 = func_818();
	}
	iVar5 = func_819(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_313(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_313(iVar6) == 0)
			{
				return func_820(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_313(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_313(iVar6) == 0)
			{
				return func_820(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_820(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_457(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_458(int iParam0)
{
	return (Global_40.f_12018.f_26 && iParam0) != 0;
}

int func_459(int iParam0)
{
	if (!func_55(iParam0))
	{
		return -1;
	}
	return func_821(iParam0);
}

int func_460()
{
	return Global_40.f_11095.f_35;
}

void func_461(int iParam0, int iParam1)
{
	if (!func_55(iParam0))
	{
		return;
	}
	func_822(iParam0, iParam1);
}

int func_462(int iParam0)
{
	if (func_203() != -1)
	{
		return 0;
	}
	if (!func_204(iParam0))
	{
		return 0;
	}
	return func_452(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_463(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_203() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_464()
{
	int iVar0;
	int iVar1;
	
	if (BUILTIN::VDIST(Global_36, ((*Global_1347702)[112 /*49*/])->f_24) < 300f)
	{
		return 0;
	}
	else if (BUILTIN::VDIST(Global_36, ((*Global_1347702)[113 /*49*/])->f_24) < 300f)
	{
		return 0;
	}
	iVar0 = func_823(((*Global_1347702)[112 /*49*/])->f_15);
	func_686(&iVar0, 0, 0, 4, 0, 0, 0, 0);
	if (!func_824(func_325(), iVar0, 1))
	{
		return 0;
	}
	iVar1 = func_825(1);
	if (iVar1 > 1)
	{
		return 0;
	}
	return 1;
}

int func_465(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return func_826(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_466(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_827(iParam1, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return false;
	}
	iVar1 = func_828(iParam0, 1);
	if (iVar1 < 0 || iVar1 > 31)
	{
		return false;
	}
	return MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar1);
}

int func_467(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_829(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_468(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_765(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_469(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_765(iParam0))
		{
			return false;
		}
	}
	func_830(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

int func_470(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4, float fParam5)
{
	if (!bParam4)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !func_831())
		{
			return 1;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 1;
	}
	if (fParam1 == -1f)
	{
		fParam1 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		fParam2 = (fParam2 * fParam2);
		if (fParam5 != -1f)
		{
			fParam5 = (fParam5 * fParam5);
		}
	}
	if (fParam1 < fParam2)
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		return iParam3;
	}
	else if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		return 1;
	}
	else if (fParam5 != -1f && fParam1 >= fParam5)
	{
		if (PED::_0x164CECC59E70DF86(iParam0, 75f))
		{
			return 0;
		}
	}
	else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_471()
{
	int iVar0;
	
	if (func_832(Local_14.f_7, 0, &(Local_554.f_5), &iVar0, 1, 0))
	{
		switch (iVar0)
		{
			case 2:
			case 4:
			case 8:
			case 16:
			case 8192:
			case 16384:
				return 2;
			
			case 256:
				return 1;
			
			default:
				break;
		}
	}
	return 0;
}

int func_472(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_833(Local_14.f_7, Global_35, 1060437492);
	if (iVar0 == 2)
	{
		return iParam1;
	}
	else if (iVar0 == 1)
	{
		if (!func_834(ENTITY::GET_ENTITY_COORDS(Local_14.f_7, true, false), ENTITY::GET_ENTITY_COORDS(Local_14.f_7, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_14.f_7), Global_36))
		{
			return iParam1;
		}
	}
	return iParam0;
}

int func_473(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	if (iParam3 && !func_835(uParam0, iParam1))
	{
		return func_836(uParam0, iParam1, bParam2);
	}
	else
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1, sVar0, true);
		uParam0->f_2 = iParam1;
		if (bParam2)
		{
			func_837(uParam0, 5, 1);
		}
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_5);
	}
	return 1;
}

void func_474(var uParam0, char* sParam1, bool bParam2)
{
	if (func_549(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1, sParam1, bParam2, false);
	}
}

void func_475(var uParam0, int iParam1, bool bParam2)
{
	func_838(uParam0->f_21[iParam1 /*17*/], bParam2, 0);
}

void func_476(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_765(iParam0))
		{
			return;
		}
	}
	func_830(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_477(int iParam0)
{
	if (!func_482(iParam0))
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 16 != 0)
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
				}
				func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
			{
				MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
			}
			func_161(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
		}
	}
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 65:
		case 68:
		case 76:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_479(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_839(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_840(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_841(iVar0) < func_842(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_843(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_480(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar0 = func_844();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = -1337945352;
	if (!func_204(iParam0))
	{
		return iVar0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

int func_482(int iParam0)
{
	if (func_203() != -1)
	{
		return 0;
	}
	if (!func_204(iParam0))
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		return 1;
	}
	return 0;
}

void func_483(int iParam0)
{
	switch (func_203())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_484(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

int func_485(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_486(int iParam0)
{
	if (!func_845(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_846(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_847(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_847(iParam0), false) <= func_848();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_848();
	}
	return func_849();
}

int func_487(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

void func_488(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_55(iParam0))
	{
		return;
	}
	switch (func_104(iParam0))
	{
		case 1:
			iVar0 = func_105(iParam0);
			if (func_850(iVar0, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_851(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_851(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (((*Global_1835011)[iVar0 /*74*/])->f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1835011)[iVar0 /*74*/])->f_27, iVar2);
				if (!func_852(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_853((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		
		case 8:
			iVar1 = func_105(iParam0);
			if (func_854(iVar1, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_481(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					
					case 2103462781:
						iVar2 = -1032930804;
						break;
					
					case -1485222547:
						iVar2 = 13700166;
						break;
					
					case 1673015813:
						iVar2 = -592708248;
						break;
					
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_481(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_484(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

int func_489(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (fParam1 <= (func_855(iParam0) * func_855(iParam0)))
	{
		if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
		{
			iVar0 = ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[iParam0 /*49*/])->f_21);
			if (iVar0 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar0)
				{
					iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, ((*Global_1347702)[iParam0 /*49*/])->f_21);
					iVar5 = iVar4;
					if (ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar5))
						{
							iVar1++;
							iVar6 = iVar5;
							if (ENTITY::IS_ENTITY_DEAD(iVar6))
							{
							}
							else
							{
								if (!PED::_0x5102307CE88798EB(iVar6))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(iVar6);
								}
								if (!PED::IS_TRACKED_PED_VISIBLE(iVar6))
								{
								}
								else
								{
									bVar3 = true;
								}
								else
								{
									iVar2++;
								}
								if (iVar1 > 0)
								{
									if (!bVar3)
									{
										return 0;
									}
								}
								iVar2 = 0;
								while (iVar2 < iVar0)
								{
									iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, ((*Global_1347702)[iParam0 /*49*/])->f_21);
									iVar8 = iVar7;
									if (((ENTITY::DOES_ENTITY_EXIST(iVar8) && ENTITY::IS_ENTITY_A_PED(iVar8)) && !ENTITY::IS_ENTITY_DEAD(iVar8)) && PED::_0x5102307CE88798EB(iVar8))
									{
										PED::_0x3088634CF8C819CF(iVar8);
									}
									iVar2++;
								}
								return 1;
								Jump @310; //curOff = 292
								if (fParam1 < 10f)
								{
									return 1;
								}
								Jump @317; //curOff = 310
								return 1;
								return 0;
							}
						}
					}
				}
			}
		}
	}

bool func_491(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_203() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

int func_492()
{
	if (!func_856() && func_857(1))
	{
		return 1;
	}
	return 0;
}

void func_493(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_574(iParam0, &iVar0, &iVar1);
	if (!func_575(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_858(iParam0, 1024))
	{
		return;
	}
	func_576(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 3;
}

struct<8> func_494(int iParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "script@timelapse@", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[iParam0 /*49*/])->f_3), 64);
	StringConCat(&cVar0, "_timelapse", 64);
	return cVar0;
}

struct<8> func_495(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_859(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_238() };
	}
	return Var0;
}

void func_496(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_350), sParam1, 64);
}

void func_497(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_348)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_348);
	}
}

void func_498(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_499(var uParam0)
{
	return 0;
}

bool func_500(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_501(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (func_500(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_344), {func_860("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_344), {func_860("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_498(uParam0, 8192);
}

Vector3 func_502(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_503(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	
	MemCopy(&uVar0, {func_861(uParam0)}, 8);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_349))
	{
		uParam0->f_349 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), 0, 0, false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_349, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_349, func_862(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_349, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_349);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_504(var uParam0, vector3 vParam1)
{
	if (func_242(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_505(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_506(var uParam0)
{
	return uParam0->f_339;
}

void func_507()
{
	struct<4> Var0;
	
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_863(Var0);
	}
}

void func_508(var uParam0)
{
	int iVar0;
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, uParam0->f_366[iVar0 /*9*/]) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, uParam0->f_366[iVar0 /*9*/])))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_348, uParam0->f_366[iVar0 /*9*/]);
		}
		(uParam0->f_366[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

float func_509(var uParam0)
{
	return uParam0->f_338;
}

void func_510(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_864() };
	func_496(uParam0, &Var0);
}

void func_511(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_500(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4) && !func_788(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_865());
		func_498(uParam0, 8);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_866(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_498(uParam0, 16);
	}
}

void func_512(var uParam0)
{
	if ((!func_500(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_348)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_348, 0))
	{
		func_867(uParam0);
		func_868(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_348, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_348);
		}
		func_498(uParam0, 32768);
	}
}

bool func_513()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_514(int iParam0)
{
	struct<4> Var0;
	
	if (func_869(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_863(Var0);
}

int func_515(char* sParam0)
{
	return sParam0->f_9;
}

void func_516(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

int func_517(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if ((uParam0->f_177 == 6 && func_519(uParam0) == -1) || func_30(uParam0, 64))
			{
				return 1;
			}
			break;
		
		case 8:
			return uParam0->f_177 == 6;
		
		case 2:
			return uParam0->f_177 == 2;
		
		case 3:
			return uParam0->f_177 == 9;
		
		case 4:
			return func_311(&(uParam0->f_753));
		
		case 5:
			return uParam0->f_177 == 8;
		
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
	}
	return 0;
}

int func_518(char* sParam0)
{
	return sParam0->f_10;
}

int func_519(var uParam0)
{
	return uParam0->f_169;
}

int func_520(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	uParam0->f_781 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_776);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return 1;
		}
		if (!bParam4)
		{
			uParam0->f_776 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_776 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_782 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_776);
	if (!uParam0->f_782)
	{
		if (!bParam4)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_870(uParam0);
	uParam0->f_776.f_2 = 0;
	uParam0->f_789 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_776));
	uParam0->f_776.f_2 = 12;
	uParam0->f_791 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_776));
	uParam0->f_782 = 1;
	uParam0->f_790 = 0;
	uParam0->f_792 = 0;
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_521(var uParam0, int iParam1)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_776.f_1), &(uParam0->f_776));
}

bool func_522(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	bool bVar0;
	
	if (iParam2 == -1)
	{
		if (func_523(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
		}
		if (func_523(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_523(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_523(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_523(uParam0, 2, iParam4))
	{
		*uParam5 = *iParam4;
	}
	if (func_523(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_523(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*uParam5 == 1 || *uParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_784) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (func_523(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_523(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_523(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_776));
}

bool func_524(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_776));
}

int func_525(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_246((*uParam0)[iVar0 /*16*/], 1048576) && MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*16*/], sParam1)) && ((*uParam0)[iVar0 /*16*/])->f_9 == sParam1->f_9) && ((*uParam0)[iVar0 /*16*/])->f_10 == sParam1->f_10)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_526(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_776);
	uParam0->f_776 = 0;
	uParam0->f_782 = 0;
}

void func_527(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_844() - fParam1);
	func_871(uParam0, 1);
	func_872(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_528(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_529(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	
	if (func_6(uParam0->f_172, 64) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = func_873(iParam1, vParam2, fParam5, bParam6, bParam7, iParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_874(iParam1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
			ENTITY::SET_ENTITY_PROOFS(iVar0, 127, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 179, true);
			PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 270583);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			func_1(&(uParam0->f_172), 64);
		}
	}
	return iVar0;
}

int func_530(int iParam0, int iParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return 332378857;
	}
	else if (iParam0 == 26)
	{
		return -1744398657;
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return -622951465;
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return 877823184;
	}
	else if (iParam0 == 58)
	{
		return -1739686743;
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return 2145479193;
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return -1610853131;
	}
	else if (iParam0 == 77)
	{
		return -434412386;
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return -1489164512;
	}
	else if (iParam0 == 89)
	{
		return 1970061205;
	}
	else if (iParam0 == 101)
	{
		return -1259688762;
	}
	else if (iParam0 == 115)
	{
		return 1079956634;
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return -1280269885;
	}
	else if (iParam0 == 121)
	{
		if (iParam1 || func_452(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 415367144;
		}
	}
	else if (iParam0 == 127)
	{
		return -1962480616;
	}
	else if (iParam0 == 136)
	{
		return 194953189;
	}
	else if (iParam0 == 143)
	{
		return 825960713;
	}
	else if (iParam0 == 147)
	{
		if (iParam1 || func_452(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 1770336866;
		}
	}
	if (iParam0 == 151)
	{
		return -1176045274;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_36;
}

char* func_531(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_751(sParam1));
}

void func_532(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_262(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_263(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_263(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, 0, 0);
}

void func_533(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;
	
	if (!func_809(iParam0))
	{
		return;
	}
	uVar0 = ((*Global_1835011)[iParam0 /*74*/])->f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { ((*Global_1835011)[iParam0 /*74*/])->f_18 };
	MemCopy(&Var5, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, ((*Global_1835011)[iParam0 /*74*/])->f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, ((*Global_1835011)[iParam0 /*74*/])->f_26, 676312963);
}

void func_534(int iParam0)
{
	if (!func_55(iParam0))
	{
		return;
	}
	func_876(iParam0, func_875(iParam0) + 1);
}

int func_535(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_733(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_877(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_878(iVar0, iParam1);
	return iParam1;
}

void func_536(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_537(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_538(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_539(bool bParam0)
{
	func_879(bParam0);
	func_880(bParam0);
	func_881(bParam0);
	func_882(bParam0);
	func_883(bParam0);
	func_884(bParam0);
	func_885(bParam0);
	func_886(bParam0);
}

void func_540(bool bParam0)
{
	if (func_203() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_299(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_299(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_887(1, bParam0, 1);
	func_888();
	Global_40.f_11095.f_43 = bParam0;
}

void func_541(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_203() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_889(Global_1898077->f_7, Global_1898077->f_3);
}

void func_542(int iParam0)
{
	int iVar0;
	
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_203() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_890(Global_1898077->f_7, Global_1898077->f_4);
}

int func_543(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_544(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_891(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_545(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_891(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_891(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_203() == -1 && !func_543(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = 379542007;
				break;
			
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_543(-183018591))
				{
					bVar0 = -183018591;
				}
				else
				{
					bVar0 = 379542007;
				}
				break;
			
			default:
				bVar0 = 379542007;
				break;
		}
	}
	else if (bVar0 == -164645981 && iParam0 == Global_35)
	{
		bVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_891(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_892(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_893(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_894(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_546(float fParam0)
{
	func_895(10, fParam0);
}

void func_547()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

void func_548(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iLocal_936 = 0;
	iVar2 = func_896();
	if (iLocal_930 != iVar2)
	{
		func_185(uParam0, iVar2);
	}
	func_897();
	switch (iLocal_551)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (func_898(iLocal_930, iVar0))
				{
					if (!func_899(iVar0))
					{
						bVar1 = true;
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				iLocal_551 = 1;
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (func_898(iLocal_930, iVar0))
				{
					if (!func_900(iVar0))
					{
						bVar1 = true;
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				iLocal_551 = 2;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (func_898(iLocal_930, iVar0))
				{
					if (!func_901(uParam0, iVar0))
					{
						bVar1 = true;
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				func_902(iLocal_930);
				func_903();
				iLocal_551 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

int func_549(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		if (iParam1 && !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_1, 0))
		{
			return 0;
		}
		if (iParam2 && !ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_1, 0))
		{
			return 0;
		}
		if (iParam3 && !ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_550(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_904(uParam0, iVar0, 1))
			{
				if (!func_905(uParam0, iVar0))
				{
					func_906(uParam0, &(uParam0->f_15[iVar0]));
					if (!func_907(uParam0, iVar0))
					{
					}
				}
			}
			iVar0++;
		}
	}
	if (func_904(uParam0, 1, 1))
	{
		if (func_908(uParam0->f_1, uParam0->f_9))
		{
			if (!bParam1 || func_905(uParam0, 1))
			{
				func_909(uParam0, 1);
			}
		}
	}
	if (func_904(uParam0, 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_13, uParam0->f_7))
		{
			if (!bParam1 || func_905(uParam0, 0))
			{
				func_909(uParam0, 0);
			}
		}
	}
	if (func_904(uParam0, 2, 1))
	{
		if (func_910(uParam0->f_1, uParam0->f_10, 1f))
		{
			if (!bParam1 || func_905(uParam0, 2))
			{
				func_909(uParam0, 2);
			}
		}
	}
	if (func_904(uParam0, 3, 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_14, uParam0->f_11, uParam0->f_12, 1))
		{
			if (!bParam1 || func_905(uParam0, 3))
			{
				func_909(uParam0, 3);
			}
		}
	}
	if (func_904(uParam0, 4, 1))
	{
		if (func_905(uParam0, 4))
		{
			func_909(uParam0, 4);
		}
	}
	if (uParam0->f_3)
	{
		if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1) && ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_1, 0))
		{
			func_382(uParam0);
		}
	}
}

int func_551(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = 0;
	func_911(uParam0, uParam1);
	func_912(uParam0, uParam1);
	if (uParam0->f_1 > 0)
	{
		if (func_282(uParam0, 46))
		{
			if (!func_282(uParam0, 47))
			{
				func_176(uParam0, 4);
				func_176(uParam0, 47);
				func_176(uParam0, 48);
				func_913(uParam0, 62);
				func_913(uParam0, 67);
				func_914(uParam0, 262144);
				func_915(uParam0);
				func_319(&(uParam0->f_9));
				if (func_916(uParam0->f_215, 1, 1))
				{
					func_917(&(uParam0->f_215), 1);
				}
				if (((func_282(uParam0, 12) && !func_282(uParam0, 38)) && !func_282(uParam0, 23)) && !func_282(uParam0, 15))
				{
					func_918("HRB_FAIL", 7500, 0, 0, -1, -1, 0);
					func_46();
				}
				if (TASK::_0x841475AC96E794D1(uParam0->f_87))
				{
					TASK::_0x81948DFE4F5A0283(uParam0->f_87);
				}
				if (TASK::_0x841475AC96E794D1(uParam0->f_88))
				{
					TASK::_0x81948DFE4F5A0283(uParam0->f_88);
				}
				if (TASK::_0x841475AC96E794D1(uParam0->f_89))
				{
					TASK::_0x81948DFE4F5A0283(uParam0->f_89);
				}
				func_176(uParam0, 65);
				func_739(6);
				func_182(4);
				uParam0->f_1 = 12;
				if (uParam0->f_523 == 7)
				{
					uParam0->f_206 = 6;
				}
			}
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_919(uParam0, uParam1, &(uParam1->f_5)))
			{
				func_920(func_186(uParam1), uParam0->f_7, &(uParam0->f_215));
				func_921(uParam0->f_7, uParam1, 0);
				func_921(&(uParam0->f_90[15]), uParam1, 0);
				func_922(uParam0, 1);
				func_176(uParam0, 67);
				func_923(uParam0->f_284.f_21[2 /*17*/], 1, 1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_7, true, true);
				func_545(uParam0->f_7, -618550132, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_924(&(uParam0->f_243));
				func_925(uParam0, 1, 1);
				if (func_926())
				{
					func_176(uParam0, 16);
				}
				if (func_282(uParam0, 1))
				{
					if (func_412(12))
					{
						func_927(uParam0, 8);
					}
				}
				EVENT::_0xBB1E41DD3D3C6250(uParam0->f_7, "SpAggroFocus", 0);
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20.f_11))
				{
					ENTITY::_0x18FF3110CF47115D(uParam0->f_20.f_11, 9, 0);
				}
				if (func_282(uParam0, 1))
				{
					if (func_282(uParam0, 7))
					{
						uParam0->f_1 = 12;
					}
					else if (func_282(uParam0, 6))
					{
						uParam0->f_1 = 11;
					}
					else if (func_282(uParam0, 5) || func_183())
					{
						func_176(uParam0, 12);
						func_176(uParam0, 13);
						func_928(uParam0, 1);
						uParam0->f_196 = 7;
						uParam0->f_1 = 3;
					}
					else
					{
						uParam0->f_1 = 2;
					}
				}
				else
				{
					uParam0->f_1 = 1;
				}
				if (func_183())
				{
					func_929();
					func_176(uParam0, 32);
				}
			}
			break;
		
		case 1:
			func_930(uParam0);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_7, false);
			if (func_931(uParam0, uParam1))
			{
				func_932(uParam0, 1, 1);
				if (!func_412(6))
				{
					uParam0->f_1 = 2;
				}
				else
				{
					func_925(uParam0, 2, 2);
					func_176(uParam0, 46);
					uParam0->f_1 = 12;
				}
			}
			else
			{
				func_933(uParam0);
			}
			break;
		
		case 2:
			func_930(uParam0);
			if (func_934(uParam0))
			{
				func_935(uParam0, 16);
				func_936(uParam0);
				if (func_282(uParam0, 1))
				{
					func_937();
				}
				func_176(uParam0, 67);
				uParam0->f_1 = 3;
			}
			break;
		
		case 3:
			if (func_938(uParam0, uParam1))
			{
				func_915(uParam0);
				func_913(uParam0, 62);
				func_913(uParam0, 67);
				uParam0->f_495 = 0;
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (func_939(uParam0))
			{
				uParam0->f_1 = 5;
			}
			break;
		
		case 5:
			if (func_940(uParam0, uParam1))
			{
				func_176(uParam0, 3);
				func_935(uParam0, 16);
				func_935(uParam0, 131072);
				uParam0->f_1 = 11;
			}
			break;
		
		case 6:
			if (func_941(uParam0))
			{
				uParam0->f_1 = 11;
			}
			break;
		
		case 8:
			if (func_942(uParam0, uParam1, *uParam3))
			{
				uParam0->f_1 = 11;
			}
			break;
		
		case 9:
			if (func_943(uParam0))
			{
				if (!func_944(uParam0->f_7, 0) || !PED::IS_PED_FLEEING(uParam0->f_7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
					{
						if (!PED::IS_PED_IN_COMBAT(uParam0->f_7, Global_35))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_7, Global_35, 1, 1))
							{
								func_945(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_434.f_5) && func_946(Global_35, uParam0->f_434.f_5, 0))
							{
								func_945(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_H", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_945(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					if (func_282(uParam0, 1))
					{
						func_176(uParam0, 2);
					}
					uParam0->f_1 = 13;
				}
			}
			break;
		
		case 10:
			if (!func_947(uParam0->f_7, 0, 1) || !func_279(Global_35, uParam0->f_7, 40f, 1))
			{
				return 1;
			}
			break;
		
		case 7:
			if (func_948(uParam0))
			{
				uParam1->f_46 = 1;
				uParam1->f_50 = 1;
				uParam0->f_1 = 11;
			}
			break;
		
		case 11:
			if (func_949(uParam0, uParam1, uParam1->f_46))
			{
				iVar0 = 1;
			}
			break;
		
		case 12:
			if (func_950(uParam0))
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			break;
	}
	func_951(uParam0);
	func_952(uParam0);
	return iVar0;
}

int func_552()
{
	float fVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
	{
		return 0;
	}
	fVar0 = func_553(Global_35, Local_14.f_7, 1, 1);
	if (fVar0 > 350f)
	{
		return 1;
	}
	if (fVar0 > 200f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_14.f_7, true, false), 5f))
	{
		return 1;
	}
	return 0;
}

float func_553(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_554(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_788(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_505(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_953() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_954(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_954(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

int func_555()
{
	bool bVar0;
	
	if (!func_197(2))
	{
		if (func_197(32768))
		{
			if (!func_279(Global_35, Local_14.f_7, 60f, 1))
			{
				func_178(2);
			}
		}
	}
	if (!func_197(65536))
	{
		if (func_73(&uLocal_922))
		{
			if (func_955(&uLocal_922, 2f))
			{
				func_956();
				func_178(65536);
			}
		}
	}
	if (func_197(32))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	func_957();
	if (func_197(4))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_928, true, 0) || !func_197(65536))
		{
			func_958(Local_14.f_284.f_21[0 /*17*/]);
		}
		func_958(Local_14.f_284.f_21[1 /*17*/]);
		switch (func_959(&(Local_14.f_284), &(Local_14.f_7), 1))
		{
			case -2:
			case 0:
				func_960(&(Local_14.f_284), 0);
				func_961(&(Local_14.f_284), &(Local_14.f_7), 1);
				if (func_197(16))
				{
				}
				else
				{
					if (func_339())
					{
						StringCopy(&cLocal_812, "REHC_RC1_LIB", 24);
					}
					else
					{
						StringCopy(&cLocal_812, "REHC_RC1_LIJ", 24);
					}
					func_962(1, 0, 0);
					func_963(&uLocal_815, cLocal_812, 0, -1, 0, 0);
				}
				func_178(32);
				func_309(4);
				func_309(8);
				func_257(&uLocal_916);
				break;
		}
	}
	bVar0 = func_197(32);
	switch (iLocal_553)
	{
		case 0:
			func_964();
			func_308(1);
			iLocal_553 = 1;
			break;
		
		case 1:
			if (func_965(Local_797[0 /*9*/], 45f, 1082130432, 0, 0, 0, 0))
			{
				if (func_966(&Local_797, 1, 1f))
				{
					func_473(&Local_776, func_472(10, 11), 1, 1);
					iLocal_553 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_967(&Local_776, 1))
			{
				if (func_968(&Local_776, "s_Idle", 1))
				{
					func_473(&Local_776, 2, 1, 1);
					iLocal_553 = 3;
				}
			}
			break;
		
		case 3:
			if (!func_967(&Local_776, 1))
			{
				if (func_968(&Local_776, "s_Idle", 1))
				{
					iLocal_553 = 4;
				}
			}
			break;
		
		case 4:
			if (!func_197(2))
			{
				if (!func_279(Global_35, Local_14.f_7, 60f, 1))
				{
					if (!func_73(&uLocal_913))
					{
						func_257(&uLocal_913);
					}
					if (func_955(&uLocal_913, 25f))
					{
						func_178(2);
						func_178(16);
					}
				}
				else
				{
					if (func_73(&uLocal_913))
					{
						func_228(&uLocal_913);
					}
					if (!bVar0 && !func_279(Global_35, Local_14.f_7, 15f, 1))
					{
						if (func_969())
						{
							func_257(&uLocal_919);
							func_473(&Local_776, func_472(4, 5), 1, 1);
							iLocal_553 = 7;
						}
					}
					else if (func_279(Global_35, Local_14.f_7, 15f, 1))
					{
						func_474(&Local_776, "Loop_Idle", 1);
						iLocal_553 = 8;
					}
				}
			}
			else if (func_279(Local_14.f_7, Global_35, 45f, 1))
			{
				if (func_73(&uLocal_919))
				{
					func_228(&uLocal_919);
				}
				func_309(2);
			}
			break;
		
		case 7:
			if (!func_967(&Local_776, 1))
			{
				if (func_968(&Local_776, "s_Idle", 1))
				{
					func_473(&Local_776, 2, 1, 1);
					iLocal_553 = 3;
				}
			}
			break;
		
		case 8:
			if (!func_967(&Local_776, 1))
			{
				if (func_968(&Local_776, "s_Idle_2", 1))
				{
					func_257(&uLocal_919);
					iLocal_553 = 9;
				}
			}
			break;
		
		case 9:
			if (!bVar0 && func_955(&uLocal_919, 16f))
			{
				func_473(&Local_776, 9, 1, 1);
				func_474(&Local_776, "Loop_Idle", 0);
				func_474(&Local_776, "Loop_Idle_2", 0);
				func_257(&uLocal_919);
				iLocal_553 = 10;
			}
			else if (bVar0)
			{
				func_474(&Local_776, "Loop_Idle_2", 1);
				iLocal_553 = 11;
			}
			break;
		
		case 10:
			if (!func_967(&Local_776, 1))
			{
				if (func_968(&Local_776, "s_Idle", 1))
				{
					if (bVar0 || func_955(&uLocal_919, 15f))
					{
						func_473(&Local_776, 2, 1, 1);
						iLocal_553 = 3;
					}
				}
			}
			break;
		
		case 5:
			if (!func_967(&Local_776, 1))
			{
				if (func_968(&Local_776, "s_Idle", 1))
				{
					func_475(&(Local_14.f_284), 0, 1);
					iLocal_553 = 4;
				}
			}
			break;
		
		case 6:
			break;
		
		case 11:
			if (((ANIMSCENE::_0xF94692EB9DC15D74(Local_776.f_1, 0) || func_908(Local_776.f_1, 100)) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_776.f_1, "GenStoryMale")) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_7, Local_776.f_1))
			{
				func_382(&Local_776);
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[3])))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(&(Local_14.f_90[3])))
					{
						ENTITY::DETACH_ENTITY(&(Local_14.f_90[3]), true, true);
					}
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_556(int iParam0, int iParam1, int iParam2, int iParam3)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (iParam0 == 1 && !CAM::_0xA24C1D341C6E0D53(0, 0, 1))
	{
		PAD::ENABLE_CONTROL_ACTION(0, -1450761377, true);
		PAD::ENABLE_CONTROL_ACTION(0, -771458680, true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	if (iParam2 == 1)
	{
		PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
	}
	if (iParam1 == 1)
	{
		HUD::_0xC9CAEAEEC1256E54(724769646);
	}
	if (iParam3 == 0)
	{
		func_970();
	}
}

int func_557(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_433(*iParam1, 128))
	{
		if (!func_971(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_433(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_972(iVar2))
			{
				return 0;
			}
			if (!func_971(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_973(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_433(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_797(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0)));
			func_409(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_433(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_433(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_972(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_797(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_797(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_797(iParam2, 8192))
				{
					HUD::_0x8BC7C1F929D07BF3(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_433(*iParam1, 2336))
		{
			if (!func_972(iVar2))
			{
			}
			if (func_974(iVar2, *iParam1))
			{
				func_602(iParam1, 32);
				func_602(iParam1, 256);
				func_602(iParam1, 2048);
				func_409(iParam1, 512);
				func_409(iParam1, 1024);
				func_409(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_433(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_972(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_602(iParam1, 64);
			}
		}
		if (func_797(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_797(iParam2, 1024))) || func_797(iParam2, 8)) && !func_433(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_409(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_797(iParam2, 4096)) && !func_433(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_409(iParam1, 2048);
			func_409(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_797(iParam2, 32)) && !func_433(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_409(iParam1, 256);
			func_409(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_409(iParam1, 64);
		}
		else if (!func_797(iParam2, 1))
		{
			if (!func_797(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_973(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_433(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_409(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_409(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_797(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_409(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_797(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_409(iParam1, 8);
	}
	return 0;
}

int func_558(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_29(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		return 1;
	}
	fVar0 = BUILTIN::VDIST2(((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	func_556(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		if (func_971(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
		if (!func_971(Global_35, -982327190))
		{
			TASK::TASK_STAND_STILL(Global_35, 2200);
			func_74(&(uParam0->f_2588), 1);
		}
		if (TASK::IS_PED_STILL(Global_35) || func_632(&(uParam0->f_2588)) > 2f)
		{
			func_228(&(uParam0->f_2588));
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			return 1;
		}
	}
	else
	{
		if (!func_73(&(uParam0->f_2588)))
		{
			func_74(&(uParam0->f_2588), 1);
		}
		else if (func_632(&(uParam0->f_2588)) > 5f)
		{
			func_228(&(uParam0->f_2588));
			if (func_971(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			return 1;
		}
		if (!func_971(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, -668482597, false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, 1f, 7500, 0.25f, false, 40000f);
		}
		if (func_756(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, -1, 0, 51, 0);
			}
		}
	}
	return 0;
}

void func_559(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_975(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_560(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_976(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_561(var uParam0, vector3 vParam1)
{
	if (!func_242(vParam1))
	{
		uParam0->f_206.f_5 = { vParam1 };
	}
	else
	{
		uParam0->f_206.f_5 = { func_63(uParam0->f_174) };
	}
}

void func_562(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_977(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

Vector3 func_563(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	switch (&uParam0->f_912[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { (uParam0->f_912[iParam1 /*41*/])->f_4 - (uParam0->f_912[iParam1 /*41*/])->f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_978(vVar10) * Vector(2f, 2f, 2f) };
			*(vVar0[0 /*3*/]) = { (uParam0->f_912[iParam1 /*41*/])->f_1 + (uParam0->f_912[iParam1 /*41*/])->f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[0 /*3*/]), &((vVar0[0 /*3*/])->f_2), 0);
			*(vVar0[1 /*3*/]) = { (uParam0->f_912[iParam1 /*41*/])->f_1 + (uParam0->f_912[iParam1 /*41*/])->f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[1 /*3*/]), &((vVar0[1 /*3*/])->f_2), 0);
			if (!func_242(*(vVar0[0 /*3*/])))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(*(vVar0[0 /*3*/]), (uParam0->f_912[iParam1 /*41*/])->f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(*(vVar0[1 /*3*/]), (uParam0->f_912[iParam1 /*41*/])->f_7, true))
				{
					return *(vVar0[1 /*3*/]);
				}
				else
				{
					return *(vVar0[0 /*3*/]);
				}
			}
			break;
		
		case 1:
			fVar13 = 0f;
			if ((uParam0->f_912[iParam1 /*41*/])->f_13 < (uParam0->f_912[iParam1 /*41*/])->f_12)
			{
				fVar13 = (((uParam0->f_912[iParam1 /*41*/])->f_12 + ((uParam0->f_912[iParam1 /*41*/])->f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = (((uParam0->f_912[iParam1 /*41*/])->f_12 + (uParam0->f_912[iParam1 /*41*/])->f_13) / 2f);
			}
			*(vVar0[0 /*3*/]) = { (uParam0->f_912[iParam1 /*41*/])->f_1 + Vector(0f, (BUILTIN::COS(fVar13) * ((uParam0->f_912[iParam1 /*41*/])->f_11 + 5f)), (BUILTIN::SIN(fVar13) * ((uParam0->f_912[iParam1 /*41*/])->f_11 + 5f))) };
			(vVar0[0 /*3*/])->f_2 = ((vVar0[0 /*3*/])->f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[0 /*3*/]), &((vVar0[0 /*3*/])->f_2), 0);
			if (!func_242(*(vVar0[0 /*3*/])))
			{
				return *(vVar0[0 /*3*/]);
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_564(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_565(var uParam0, int iParam1)
{
	uParam0->f_1560 = (uParam0->f_1560 - (uParam0->f_1560 && iParam1));
}

bool func_566(var uParam0, int iParam1)
{
	return (uParam0->f_1562.f_1 && iParam1) != 0;
}

bool func_567(var uParam0, int iParam1)
{
	return func_979(uParam0->f_27, iParam1);
}

var func_568(int iParam0)
{
	var uVar0;
	
	if (!func_204(iParam0))
	{
		return uVar0;
	}
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return uVar0;
}

var func_569(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = _NAMESPACE71::_0x2024F4F333095FB1(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_570()
{
	return Global_1900383->f_393;
}

void func_571()
{
	int iVar0;
	
	iVar0 = func_570();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_980(0);
}

void func_572(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_573(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_574(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_575(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_981(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_982(iParam0))
	{
		return 0;
	}
	if (func_983(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_858(iParam0, 1)) || func_171(32768))
	{
		if (!func_858(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_984())
	{
		return 0;
	}
	return 1;
}

void func_576(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_577(var uParam0)
{
	return *uParam0;
}

void func_578(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_348) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_348, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348)) || func_500(uParam0, 512))
	{
		if (!func_985(uParam0->f_405, 128))
		{
			func_986();
		}
		return;
	}
	if ((func_591(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, func_862(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, func_862(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_348))
	{
		if (!func_985(uParam0->f_405, 128))
		{
			func_986();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_987(iVar1))
		{
			if (func_988(Global_43800, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_985(uParam0->f_405, 512))
	{
		bVar2 = true;
	}
	if (func_989(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_348);
		func_986();
	}
}

void func_579(var uParam0, char* sParam1, var uParam2)
{
	struct<8> Var0;
	char cVar8[32];
	
	func_990(uParam2);
	if (!func_500(uParam0, 301989888))
	{
		func_991(uParam0, &(uParam2->f_753));
	}
	if (func_577(uParam0) == 2 && (func_992(uParam0->f_404, 16384) || func_500(uParam0, 268435456)))
	{
		Var0 = { func_495(uParam0) };
		func_241(uParam0, &Var0);
	}
	func_993(uParam0, sParam1);
	if (func_500(uParam0, 131072))
	{
		func_994(uParam0, 0);
	}
	if (func_995())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_996();
	}
	if (func_997())
	{
		func_998(1);
	}
	func_511(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_999(uParam0, cVar8);
	func_586(1, 0);
	func_508(uParam0);
	if (func_581(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_340);
	}
	func_1000(uParam0);
	func_868(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_348);
	Global_43799 = uParam0->f_348;
	StringCopy(&Global_43801, sParam1, 24);
}

void func_580(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_257(&(uParam0->f_1));
}

bool func_581(var uParam0, int iParam1)
{
	return (uParam0->f_343 && iParam1) != 0;
}

void func_582(var uParam0)
{
	if (func_30(uParam0, 4))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_641);
	}
}

float func_583(var uParam0)
{
	if (!func_73(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_258(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_844() - uParam0->f_1);
}

int func_584(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_727(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_585(int iParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_586(bool bParam0, int iParam1)
{
	if (func_1001())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_738())
		{
			func_1002(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_587(var uParam0)
{
	vector3 vVar0;
	
	if (!func_500(uParam0, 4))
	{
		if (func_992(uParam0->f_404, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_1003(uParam0) };
		if (!func_992(uParam0->f_404, 524288))
		{
			func_1004(&(uParam0->f_416));
		}
		func_1005(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1006(uParam0, 0f, 0f, 0f);
		func_1007(uParam0);
		func_1008(uParam0);
		func_1009(uParam0, 0f, 0f, 0f, 0, 0);
		func_1010(uParam0);
		func_498(uParam0, 4);
		func_1011(uParam0, 0);
		func_1012(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_417)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_417));
		}
	}
}

int func_588(var uParam0, int iParam1)
{
	if (func_500(uParam0, 262144))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, "ExportCamera"))
	{
		return 0;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "ExportCamera") && iParam1)) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_348))
	{
		func_498(uParam0, 262144);
		func_1011(uParam0, 1);
		return 1;
	}
	return 0;
}

int func_589(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_348, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_348) * 1000f));
}

int func_590(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_348, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) * 1000f));
}

int func_591(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1) && func_1013(uParam0->f_13[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_592(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_348, 0))
	{
		if (func_500(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return 1;
	}
	if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_348) && func_500(uParam0, 1048576))
	{
		return 1;
	}
	return 0;
}

void func_593(var uParam0)
{
	if (((func_500(uParam0, 1073741824) && !func_500(uParam0, 524288)) && func_500(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_594(var uParam0)
{
	if (!func_500(uParam0, 536870912))
	{
		func_1011(uParam0, 1);
		func_595(&(uParam0->f_405), uParam0->f_416);
		func_507();
		func_498(uParam0, 536870912);
	}
	if (func_500(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_1014(uParam0);
	func_580(uParam0, 1);
	func_301(uParam0);
	func_1015(uParam0);
	func_1016(uParam0);
	func_1017(uParam0, 4);
	func_510(uParam0);
	func_994(uParam0, 1);
	func_508(uParam0);
	func_228(&(uParam0->f_1));
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	func_1018(!func_985(uParam0->f_405, 128));
	if (!func_985(uParam0->f_405, 128))
	{
		func_986();
	}
}

void func_595(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1019(2000);
	Global_16 = 0;
	func_1020();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_985(*uParam0, 8));
	if (!func_985(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_985(*uParam0, 2) || func_985(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_985(*uParam0, 16))
	{
		func_1021(1);
	}
	if (func_985(*uParam0, 32))
	{
		func_1022(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1023(-1623728698, 0);
	}
	func_1012(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_596()
{
	Global_1935630->f_52 = 1;
}

int func_597(var uParam0)
{
	if (func_30(uParam0, 8))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_642);
		if (StackVal)
		{
			return 1;
		}
		return 0;
	}
	else
	{
		Stack.Push(!func_581(&(uParam0->f_206), 4));
		Stack.Push(&(uParam0->f_206));
		Call_Loc(uParam0->f_206.f_342);
		if (StackVal || StackVal)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_598(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

void func_599(var uParam0)
{
	func_1024(uParam0);
	func_1025(uParam0, 0);
	uParam0->f_1 = 0;
	func_1026();
}

void func_600(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_601(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_228(&(iParam0->f_18));
}

void func_602(int iParam0, int iParam1)
{
	func_1027(iParam0, iParam1);
}

int func_603(var uParam0)
{
	return uParam0->f_1;
}

void func_604(var uParam0)
{
	bool bVar0;
	
	if (!func_168(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(-1181125641);
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-1181125641))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_1028(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1028(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_618(uParam0, 134217728);
		}
	}
}

void func_605(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_168(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231->f_4)
	{
		return;
	}
	if (!func_168(uParam0, 4096) && uParam0->f_1792)
	{
		return;
	}
	if (!func_168(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_616(uParam0);
	func_1029(uParam0, uParam0->f_1793, uParam0->f_1795);
	func_1030(uParam0);
	if (uParam0->f_1796 && !uParam0->f_1795)
	{
		if (((((uParam0->f_1791 >= 0 && (uParam0->f_912[uParam0->f_1791 /*41*/])->f_17 > 0f) && uParam0->f_1584 >= 0) && !func_584(Global_35, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, ((uParam0->f_912[uParam0->f_1791 /*41*/])->f_17 + 5f), 1, 1)) && !func_168(uParam0, 33554432)) && !func_168(uParam0, 4))
		{
			func_1031(uParam0, uParam0->f_1793);
			return;
		}
	}
	if (!func_168(uParam0, 4))
	{
		if (func_1032(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1580 = uParam0->f_1584;
				func_618(uParam0, 8);
				return;
			}
		}
		else
		{
			func_1031(uParam0, uParam0->f_1793);
		}
		if ((uParam0->f_912[uParam0->f_1586 /*41*/])->f_29)
		{
			fVar0 = func_1033(uParam0, uParam0->f_1586);
			if (fVar0 < 0f || (uParam0->f_1793 && fVar0 < 1f))
			{
				uParam0->f_1584 = uParam0->f_1586;
				if (!bParam2)
				{
					uParam0->f_1580 = uParam0->f_1586;
					func_618(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1585 == -1f || fVar0 <= uParam0->f_1585) || uParam0->f_1586 == uParam0->f_1584)
				{
					if (uParam0->f_1586 != uParam0->f_1584)
					{
					}
					uParam0->f_1584 = uParam0->f_1586;
					uParam0->f_1585 = fVar0;
					func_618(uParam0, 16);
					if (((!func_168(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, true) < ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_11 + 5f))
					{
						func_1034(uParam0);
						func_618(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1584 == uParam0->f_1586)
			{
				func_565(uParam0, 16);
			}
		}
		if (uParam0->f_1586 + 1 >= 8)
		{
			uParam0->f_1586 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1586 + 1;
			while (iVar2 <= 7)
			{
				if ((uParam0->f_912[iVar2 /*41*/])->f_29)
				{
					uParam0->f_1586 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1586 = 0;
			}
		}
		if (uParam0->f_1584 < 0)
		{
			return;
		}
		if (func_567(uParam0->f_912[uParam0->f_1584 /*41*/], 2) && uParam0->f_1793)
		{
			return;
		}
	}
	if (func_168(uParam0, 16))
	{
		fVar4 = func_505(Global_35, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1);
		if (uParam0->f_1793 && fVar4 <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		}
		fVar5 = func_1035(Global_36, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= (uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 || VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 && Global_36.f_2 <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 + (uParam0->f_912[uParam0->f_1584 /*41*/])->f_10))
			{
				func_615(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, fVar6);
			}
			if ((uParam0->f_1795 && VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1797) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
			}
		}
		else if ((uParam0->f_1793 && fVar4 <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1794))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1794, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		}
	}
	if (((uParam0->f_1793 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1794) > 1.25f) || func_168(uParam0, 4))
	{
		if (((VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775) && func_1033(uParam0, uParam0->f_1584) < 10000f) && func_168(uParam0, 16)) || func_168(uParam0, 4))
		{
			if (!func_168(uParam0, 4))
			{
				func_618(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_613(uParam0, uParam0->f_1584))
			{
				iVar7 |= 2048;
			}
			if (func_557(Global_35, &(uParam0->f_1582), iVar7, 0, 0, 1084227584, 100, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				uParam0->f_1582 = 0;
				func_565(uParam0, 4);
			}
		}
	}
	else if (func_168(uParam0, 4))
	{
		func_565(uParam0, 4);
	}
}

int func_606(var uParam0)
{
	return *uParam0;
}

void func_607(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_168(uParam0, 512))
	{
		return;
	}
	if (func_632(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (func_989(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_618(uParam0, 524288);
	}
}

void func_608(var uParam0, int iParam1)
{
	uParam0->f_1579 = iParam1;
}

void func_609(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_610(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_566(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_0x8BC7C1F929D07BF3(-1679307491);
			HUD::_0x8BC7C1F929D07BF3(474191950);
			break;
		
		default:
			if (func_1036())
			{
				if (!func_168(uParam0, 524288))
				{
					HUD::_0x4CC5F2FC1332577F(-1679307491);
				}
				HUD::_0x8BC7C1F929D07BF3(474191950);
			}
			break;
	}
	if (func_1036())
	{
		func_565(uParam0, 512);
		func_1037(uParam0, 128);
		PED::_0xCB9401F918CB0F75(Global_35, "PlayLeadin", 0, -1);
		if (func_1038(uParam0->f_912[uParam0->f_1580 /*41*/], 4))
		{
			PED::_0xCB9401F918CB0F75(Global_35, func_1039((uParam0->f_912[uParam0->f_1580 /*41*/])->f_39), 0, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_1026();
	func_1040(uParam0, 1, 0);
	func_23(uParam0);
	if (func_168(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	func_1037(uParam0, 4);
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_1771);
	}
	if (func_566(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_1041()))
	{
		CAM::_0x798BE43C9393632B(func_1041());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1241[iVar0 /*22*/])->f_2), func_1041())) && CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
		{
			if ((uParam0->f_1241[iVar0 /*22*/])->f_21)
			{
				CAM::_0x798BE43C9393632B(&((uParam0->f_1241[iVar0 /*22*/])->f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_168(uParam0, 524288) || iParam1 == 1)
	{
		func_986();
	}
	if (func_566(uParam0, 16))
	{
		if (func_606(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
		}
	}
	func_1042();
	if (func_566(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797))
	{
		if (!func_168(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 50f)
			{
				VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
		}
	}
	func_623(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1817);
	}
	return 1;
}

void func_611(bool bParam0)
{
	if (bParam0)
	{
		func_1043(4);
	}
	func_1043(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_612()
{
	Global_1905944->f_5695 = 1;
}

int func_613(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_371[iVar0 /*18*/])->f_17 == 1 && (uParam0->f_371[iVar0 /*18*/])->f_2 == 4) && &uParam0->f_371[iVar0 /*18*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_614(var uParam0)
{
	return uParam0->f_2;
}

void func_615(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_979(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_979(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1793)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1794, 214, true);
	}
	if (uParam0->f_1792 && func_168(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_979(uParam1, 262144) && Global_1935630->f_44 == 2055893578)
	{
		iVar0 |= 16;
	}
	func_1044(&iVar1, uParam2);
	func_1045(&(uParam0->f_1800), iVar0, iVar1, fParam3);
	if (!Global_1935630->f_12)
	{
		if (!func_168(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_1046();
	func_1047(uParam0, 1);
}

void func_616(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	
	iVar0 = uParam0->f_1584;
	if (iVar0 >= 0 && !func_622(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iVar0 /*41*/])->f_1, true) <= (uParam0->f_912[iVar0 /*41*/])->f_16;
		Var2 = { uParam0->f_1588 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
			{
				StringCopy(&(uParam0->f_1588), func_1048((uParam0->f_1241[iVar0 /*22*/])->f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588), func_1041(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_10)))
			{
				StringCopy(&(uParam0->f_1588.f_8), func_1048((uParam0->f_1241[iVar0 /*22*/])->f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588.f_8), func_1049(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1588)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1588.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !&uParam0->f_1241[iVar0 /*22*/])
		{
			if (!func_1050((uParam0->f_1241[iVar0 /*22*/])->f_1, 8))
			{
				if (!func_1050((uParam0->f_1241[iVar0 /*22*/])->f_1, 8))
				{
					func_1044(&iVar19, (uParam0->f_1241[iVar0 /*22*/])->f_1);
					func_1051(&(uParam0->f_1800), iVar19);
				}
			}
			else
			{
				vVar20 = { (uParam0->f_912[iVar0 /*41*/])->f_1 };
				iVar24 = -1;
				if ((uParam0->f_1241[iVar0 /*22*/])->f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 27)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar25 /*13*/])->f_2))
						{
							if ((uParam0->f_1241[iVar0 /*22*/])->f_20 == (uParam0->f_3[iVar25 /*13*/])->f_3)
							{
								iVar23 = (uParam0->f_3[iVar25 /*13*/])->f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_1050((uParam0->f_1241[iVar0 /*22*/])->f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = (uParam0->f_3[(uParam0->f_1241[iVar0 /*22*/])->f_20 /*13*/])->f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798) || iVar26 != uParam0->f_1798))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
											func_1037(uParam0, 16);
										}
										return;
									}
								}
								if ((uParam0->f_1241[iVar0 /*22*/])->f_18 != 0f || (uParam0->f_1241[iVar0 /*22*/])->f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1052(Global_35, iVar23, 1), (uParam0->f_1241[iVar0 /*22*/])->f_18, 0f, (uParam0->f_1241[iVar0 /*22*/])->f_19) };
								}
							}
							else if ((uParam0->f_1241[iVar0 /*22*/])->f_18 != 0f || (uParam0->f_1241[iVar0 /*22*/])->f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1035(Global_36, (uParam0->f_912[iVar0 /*41*/])->f_1, 1), (uParam0->f_1241[iVar0 /*22*/])->f_18, 0f, (uParam0->f_1241[iVar0 /*22*/])->f_19) };
							}
							fVar27 = (uParam0->f_912[iVar0 /*41*/])->f_16;
							fVar28 = (uParam0->f_912[iVar0 /*41*/])->f_14;
							bVar29 = func_1050((uParam0->f_1241[iVar0 /*22*/])->f_1, 2);
							bVar30 = (func_1050((uParam0->f_1241[iVar0 /*22*/])->f_1, 1) && !bVar29);
							bVar31 = func_1050((uParam0->f_1241[iVar0 /*22*/])->f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1588));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_1053(0, 0);
								}
								bVar32 = true;
								func_1037(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1604.f_16 != iVar23);
								bVar32 = (bVar32 || !func_1054(uParam0->f_1604.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1604.f_22 != bVar30);
								uParam0->f_1604.f_16 = iVar23;
								uParam0->f_1604.f_17 = { vVar20 };
								uParam0->f_1604.f_20 = fVar27;
								uParam0->f_1604.f_21 = fVar28;
								uParam0->f_1604.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1604 = { uParam0->f_1588 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1604));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1627.f_16 != iVar23);
								bVar32 = (bVar32 || !func_1054(uParam0->f_1627.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || uParam0->f_1627.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1627.f_21 != bVar30);
								uParam0->f_1627.f_16 = iVar23;
								uParam0->f_1627.f_17 = { vVar20 };
								uParam0->f_1627.f_20 = !bVar31;
								uParam0->f_1627.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1627 = { uParam0->f_1588 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1627));
								}
							}
							Jump @1464; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
							}
							StringCopy(&(uParam0->f_1588), "", 64);
							StringCopy(&(uParam0->f_1588.f_8), "", 64);
							func_1055(uParam0, 2);
						}
					}
				}
			}
		}
	}

int func_617(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_1056(uParam0, &iVar0))
	{
		func_1057(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_618(var uParam0, int iParam1)
{
	uParam0->f_1560 = (uParam0->f_1560 || iParam1);
}

void func_619(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;
	
	if (func_606(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1584;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < (uParam0->f_912[iVar0 /*41*/])->f_1.f_2)
		{
			return;
		}
		fVar1 = (uParam0->f_912[iVar0 /*41*/])->f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = (uParam0->f_912[iVar0 /*41*/])->f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iVar0 /*41*/])->f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - (uParam0->f_912[iVar0 /*41*/])->f_1.f_2));
		bVar4 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771);
		if (bVar4)
		{
			vVar6 = { VOLUME::_0xF70F00013A62F866(uParam0->f_1771) };
			fVar5 = MISC::ABSF((vVar6.z - (uParam0->f_912[iVar0 /*41*/])->f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= (uParam0->f_912[iVar0 /*41*/])->f_10 || (bVar4 && fVar5 <= (uParam0->f_912[iVar0 /*41*/])->f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS((uParam0->f_912[iVar0 /*41*/])->f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798))
			{
				func_618(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1798 == iVar9)
			{
				func_618(uParam0, 65536);
				return;
			}
		}
		func_565(uParam0, 65536);
	}
}

void func_620(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_603(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if ((uParam0->f_371[iVar0 /*18*/])->f_7)
			{
				func_1058(uParam0, iVar0, iParam1);
			}
			else if ((uParam0->f_371[iVar0 /*18*/])->f_6)
			{
				bVar1 = func_1059(uParam0, iVar0);
				if (bVar1)
				{
					func_1060(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_613(uParam0, uParam0->f_1580))
		{
			func_1061(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if ((uParam0->f_371[iVar0 /*18*/])->f_7)
		{
			func_1058(uParam0, iVar0, iParam1);
		}
		else if ((uParam0->f_371[iVar0 /*18*/])->f_6)
		{
			bVar1 = func_1059(uParam0, iVar0);
			if (bVar1)
			{
				func_1060(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_621(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1817);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1817);
			if (MISC::_0xBDC6E364C9C78178(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_622(var uParam0, int iParam1)
{
	return (uParam0->f_1561 && iParam1) != 0;
}

void func_623(var uParam0)
{
	func_1062(&(uParam0->f_1800));
}

void func_624(var uParam0)
{
	uParam0->f_1561 = 0;
}

void func_625(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	func_1063(uParam0, 4);
	if (func_1064(uParam0, &sParam1, iParam5))
	{
		func_609(uParam0, 1);
	}
}

void func_626(var uParam0)
{
	if (!func_1065(uParam0))
	{
		return;
	}
	if (!func_168(uParam0, 4194304))
	{
		func_1066(uParam0);
		func_618(uParam0, 4194304);
	}
	if (func_1067(uParam0))
	{
		func_1068(uParam0);
		func_1069(uParam0);
		func_609(uParam0, 2);
	}
}

void func_627(var uParam0)
{
	uParam0->f_1581 = -1;
	func_608(uParam0, 0);
	func_609(uParam0, 3);
	func_1070(uParam0, 0);
	func_228(&(uParam0->f_1765));
	func_1071(uParam0);
	func_228(&(uParam0->f_1768));
}

void func_628(int iParam0)
{
	int iVar0;
	
	if (func_203() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_756(func_1072(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_1072(iVar0), func_1073(), 1))
			{
				func_1074(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_629()
{
	Global_18 = 1;
	Global_43883 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_630(var uParam0)
{
	if (uParam0->f_1580 >= 0)
	{
		if (func_505(Global_35, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_1, 0) < (uParam0->f_912[uParam0->f_1580 /*41*/])->f_14)
		{
			return 1;
		}
		else if ((uParam0->f_912[uParam0->f_1580 /*41*/])->f_14 >= (uParam0->f_912[uParam0->f_1580 /*41*/])->f_11)
		{
			return 1;
		}
	}
	return 0;
}

int func_631(var uParam0)
{
	if (uParam0->f_1580 >= 0)
	{
		if (func_505(Global_35, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_1, 0) < (uParam0->f_912[uParam0->f_1580 /*41*/])->f_15)
		{
			return 1;
		}
		else if ((uParam0->f_912[uParam0->f_1580 /*41*/])->f_15 >= (uParam0->f_912[uParam0->f_1580 /*41*/])->f_11)
		{
			return 1;
		}
	}
	return 0;
}

float func_632(var uParam0)
{
	if (!func_73(uParam0))
	{
		return 0f;
	}
	if (func_258(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_844() - uParam0->f_1);
}

int func_633(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (uParam0->f_1581 < 0)
	{
		return 1;
	}
	switch ((uParam0->f_371[uParam0->f_1581 /*18*/])->f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, 1) == 8)
			{
				return 1;
			}
			else if (func_583(&(uParam0->f_1768)) >= 15f)
			{
				func_618(uParam0, 32768);
				return 1;
			}
			break;
		
		case 9:
			if (!uParam0->f_1664)
			{
				if (func_583(&(uParam0->f_1768)) >= 15f)
				{
					func_618(uParam0, 32768);
					return 1;
				}
				if (ANIMSCENE::_0x25557E324489393C(func_1075(uParam0)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(func_1075(uParam0), 0))
				{
					uParam0->f_1664 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(func_1075(uParam0));
				bVar1 = ANIMSCENE::_0xD8254CB2C586412B(func_1075(uParam0), 0);
				bVar2 = ANIMSCENE::_0xCDC5512A407CF08D(func_1075(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		
		case 11:
			return 1;
		
		default:
			return func_583(&(uParam0->f_1768)) >= 15f;
	}
	return 0;
}

int func_634(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_371[iVar0 /*18*/])->f_17 == 2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_635(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_371[iVar0 /*18*/])->f_17 == 2 && func_1076(uParam0->f_371[iVar0 /*18*/], 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_636(int iParam0)
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1905944->f_22[iParam0 /*9*/])->f_1;
	}
	return 0;
}

void func_637(int iParam0)
{
	func_1002(1);
}

bool func_638(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_574(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_639(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_574(iParam0, &iVar0, &iVar1);
	func_1077(iVar0, iVar1);
}

void func_640(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	
	StringCopy(&cVar0, func_1078(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1048(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_641(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;
	
	StringCopy(&cVar0, func_1078(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1048(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

bool func_642(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = func_531(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return MISC::ARE_STRINGS_EQUAL(sParam0, func_1079());
}

var func_643()
{
	return UILOG::_UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE();
}

var func_644(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_645(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_161(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
			VOLUME::_0x748C5F51A18CB8F0(0);
			func_1080(iParam0, 1, 1, iParam1, 32);
			VOLUME::_0x748C5F51A18CB8F0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_204(&(Global_40.f_450[iVar1])))
				{
					Global_40.f_450[iVar0] = &Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

int func_646(int iParam0)
{
	if (func_203() != -1)
	{
		return 0;
	}
	if (!func_204(iParam0))
	{
		return 0;
	}
	return func_268(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

void func_647(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_55(iParam0))
	{
		return;
	}
	if (func_268(iParam0))
	{
		func_160(iParam0, 0, 2);
	}
	iVar0 = func_1081(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*((*Global_1898346)[iVar1 /*6*/]) = { *((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*((*Global_1898346)[iVar1 /*6*/]) = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

int func_648(int iParam0)
{
	int iVar0;
	
	if (func_462(iParam0))
	{
		return 0;
	}
	if (func_463(iParam0, 0))
	{
		func_1082(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_1082(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_649(int iParam0)
{
	int iVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_48 == -1)
	{
		return 1;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_47 == 0)
	{
		return 1;
	}
	iVar0 = func_1083(iParam0);
	return func_1084(iVar0, 1);
}

bool func_650(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

var func_651(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

var func_652(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_653(int iParam0)
{
	if (func_104(iParam0) == 1)
	{
		return func_105(iParam0);
	}
	return -1;
}

void func_654(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
}

int func_655(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!bParam0 && func_735(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(752193127) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(752193127, iVar0);
	func_367(bParam0);
	return 1;
}

void func_656()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;
	
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_387(iVar17))
		{
			iVar18 = func_1072(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_228(&(Global_1359489->f_55));
	if (func_465(1777191912, 1))
	{
		func_1085(1777191912, 1, 0);
	}
}

void func_657(int iParam0)
{
	if (!func_55(iParam0))
	{
		return;
	}
	func_876(iParam0, (func_875(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

struct<2> func_658(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

bool func_659()
{
	return func_460() > 0;
}

void func_660(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_1086(-1032423150, iParam1);
			break;
		
		case 18:
			func_1086(294066959, iParam1);
			func_1086(-1925639563, iParam1);
			func_1086(-378582304, iParam1);
			func_1086(-338306437, iParam1);
			break;
		
		case 20:
			func_1086(437270255, iParam1);
			break;
		
		case 2:
			func_1086(-304000413, iParam1);
			func_1086(-533612796, iParam1);
			func_1086(48036954, iParam1);
			break;
		
		case 23:
			func_1086(193108691, iParam1);
			func_1086(491732588, iParam1);
			func_1086(671962088, iParam1);
			func_1087(1);
			break;
		
		case 16:
			func_1086(-1836056650, iParam1);
			func_1086(-754657922, iParam1);
			func_1086(-1752355838, iParam1);
			func_1086(-1375324510, iParam1);
			break;
		
		case 59:
			func_1086(-514392105, iParam1);
			func_1086(-822060246, iParam1);
			if (func_1088(146))
			{
				func_1086(1372748575, iParam1);
			}
			func_1087(1);
			break;
		
		case 76:
			func_1086(1991352213, iParam1);
			if (func_1089() == 0)
			{
				func_1086(1852488616, iParam1);
			}
			else
			{
				func_1086(-9866350, iParam1);
			}
			break;
		
		case 44:
			func_1086(863852599, iParam1);
			func_1086(1228374935, iParam1);
			func_1086(1517889050, iParam1);
			func_1086(830657578, iParam1);
			func_1086(1901354958, iParam1);
			break;
		
		case 46:
			func_1086(-582805654, iParam1);
			func_1086(250378940, iParam1);
			func_1086(-2143265426, iParam1);
			break;
		
		case 17:
			func_1086(-941494139, iParam1);
			func_1086(1641489521, iParam1);
			break;
		
		case 19:
			func_1086(-1829423531, iParam1);
			func_1086(-1590504752, iParam1);
			func_1086(1357221321, iParam1);
			break;
		
		case 21:
			func_1086(-1037992610, iParam1);
			func_1086(-1286414399, iParam1);
			func_1087(0);
			break;
		
		case 15:
			func_1086(-1014460309, iParam1);
			func_1086(-1030502825, iParam1);
			break;
		
		case 33:
			func_1086(479388090, iParam1);
			func_1086(-1396342239, iParam1);
			func_1086(-619618632, iParam1);
			break;
		
		case 34:
			func_1086(1193561641, iParam1);
			break;
		
		case 64:
			func_1086(1363960851, iParam1);
			break;
		
		case 60:
			func_1086(-1232453926, iParam1);
			func_1086(-882833584, iParam1);
			break;
		
		case 73:
			func_1086(2023205767, iParam1);
			break;
		
		case 74:
			func_1086(-2135286513, iParam1);
			if (func_1089() == 0)
			{
				func_1086(33799444, iParam1);
			}
			else
			{
				func_1086(-161343203, iParam1);
			}
			break;
		
		case 8:
			func_1086(841639693, iParam1);
			func_1086(358952323, iParam1);
			break;
		
		case 36:
			func_1086(852538149, iParam1);
			func_1086(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1086(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1086(1116039310, iParam1);
			}
			break;
		
		case 27:
			func_1086(107633428, iParam1);
			func_1086(335902282, iParam1);
			func_1086(575673055, iParam1);
			func_1086(-425944207, iParam1);
			break;
		
		case 28:
			func_1086(-1941530250, iParam1);
			func_1086(1399269304, iParam1);
			func_1086(1839684664, iParam1);
			func_1086(923168503, iParam1);
			func_1086(-1485078322, iParam1);
			break;
		
		case 29:
			func_1086(574995900, iParam1);
			func_1086(-1691275407, iParam1);
			func_1086(-1725307861, iParam1);
			break;
		
		case 31:
			func_1086(-2108383238, iParam1);
			func_1086(-1321828931, iParam1);
			func_1086(-1632118592, iParam1);
			func_1086(334938948, iParam1);
			break;
		
		case 4:
			func_1086(115823701, iParam1);
			func_1086(-1896939736, iParam1);
			func_1086(-1830746356, iParam1);
			func_1086(-1235169781, iParam1);
			func_1087(0);
			break;
		
		case 6:
			func_1086(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1086(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1086(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1086(-384176140, iParam1);
			}
			break;
		
		case 25:
			func_1086(1056132658, iParam1);
			break;
		
		case 24:
			if (&Global_1357515 == -1)
			{
				func_1086(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1086(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1086(-1374849484, iParam1);
			}
			break;
		
		case 48:
			func_1086(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1086(217772674, iParam1);
			}
			else
			{
				func_1086(2071798160, iParam1);
			}
			if (func_1090(51))
			{
				func_1086(-792802286, iParam1);
			}
			break;
		
		case 49:
			func_1086(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1086(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1086(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_1086(1402120602, iParam1);
			}
			break;
		
		case 58:
			func_1086(-1661934591, iParam1);
			break;
		
		case 50:
			func_1086(-1713759426, iParam1);
			break;
		
		case 52:
			func_1086(-314799932, iParam1);
			func_1086(-462260432, iParam1);
			func_1086(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_1086(345256028, iParam1);
				func_1086(-1635084094, iParam1);
			}
			else
			{
				func_1086(114267347, iParam1);
			}
			break;
		
		case 32:
			func_1086(615304157, iParam1);
			break;
		
		case 47:
			func_1086(415434835, iParam1);
			break;
		
		case 69:
			func_1086(1373465877, iParam1);
			if (func_452(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_1086(-2058273527, iParam1);
			}
			break;
		
		case 70:
			func_1086(451334985, iParam1);
			if (func_1089() == 0)
			{
				func_1086(-224150200, iParam1);
			}
			else
			{
				func_1086(289012628, iParam1);
			}
			break;
		
		case 71:
			if (func_1089() == 0)
			{
				func_1086(-41692120, iParam1);
			}
			else
			{
				func_1086(1537840678, iParam1);
			}
			break;
		
		case 37:
			func_1086(1520478365, iParam1);
			break;
		
		case 9:
			if (&Global_1357515 == -1)
			{
				func_1086(1842132550, iParam1);
			}
			else
			{
				func_1086(-785735240, iParam1);
			}
			func_1086(-1605690566, iParam1);
			break;
		
		case 13:
			func_1086(-731367459, iParam1);
			func_1086(224176585, iParam1);
			func_1086(-14545580, iParam1);
			break;
		
		case 53:
			func_1086(1095274522, iParam1);
			break;
		
		case 54:
			func_1086(-572027988, iParam1);
			break;
		
		case 56:
			func_1086(1339307101, iParam1);
			func_1086(2102267732, iParam1);
			break;
		
		case 57:
			func_1086(710102686, iParam1);
			break;
		
		case 22:
			func_1086(-1754368482, iParam1);
			func_1086(-2071408557, iParam1);
			break;
		
		case 12:
			func_1086(-181334543, iParam1);
			break;
		
		case 0:
			func_1086(-2134669864, iParam1);
			func_1086(-548289709, iParam1);
			func_1086(-911271922, iParam1);
			func_1086(-604455775, iParam1);
			break;
		
		case 1:
			func_1087(1);
			break;
		
		case 3:
			if (func_690())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_1086(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_1086(-1478534115, iParam1);
			}
			break;
		
		default:
			break;
	}
}

void func_661(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_1086(-145926707, iParam1);
			func_1086(-604922090, iParam1);
			func_1086(-848690769, iParam1);
			break;
		
		case 1:
			func_1086(-1477631591, iParam1);
			break;
		
		case 2:
			func_1086(76112544, iParam1);
			break;
		
		case 9:
			func_1086(1396404308, iParam1);
			func_1086(-1357381228, iParam1);
			if (func_452(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_1086(1902679064, iParam1);
			}
			else
			{
				func_1086(-2146422425, iParam1);
			}
			break;
		
		case 22:
			func_1086(-1534761730, iParam1);
			break;
		
		case 26:
			if (bParam3 == 1)
			{
				func_1086(-1934184559, iParam1);
				func_1086(1281755988, iParam1);
			}
			else
			{
				func_1086(-1745220872, iParam1);
				func_1086(-1044976796, iParam1);
			}
			break;
		
		case 29:
			if (bParam3 == 1)
			{
				func_1086(-1641504538, iParam1);
				func_1086(-988014485, iParam1);
			}
			else if (func_1088(26))
			{
				func_1086(-343043950, iParam1);
				func_1086(-640062214, iParam1);
			}
			else
			{
				func_1086(-1272028496, iParam1);
			}
			break;
		
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1086(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1086(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1086(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1086(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1086(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1086(1301690984, iParam1);
				}
			}
			else
			{
				func_1086(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1086(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1086(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1086(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1086(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1086(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1086(-1868882771, iParam1);
				}
			}
			break;
		
		case 35:
			if (bParam3 == 1)
			{
				func_1086(-754570528, iParam1);
			}
			else
			{
				func_1086(1690083163, iParam1);
			}
			break;
		
		case 36:
			if (bParam3 == 1)
			{
				func_1086(-2072125821, iParam1);
			}
			else
			{
				func_1086(270040030, iParam1);
			}
			break;
		
		case 37:
			func_1086(-870030001, iParam1);
			break;
		
		case 53:
			if (bParam3 == 1)
			{
				func_1086(-505314737, iParam1);
				func_1086(-1853052860, iParam1);
			}
			else
			{
				func_1086(-1975624994, iParam1);
				func_1086(1648135852, iParam1);
			}
			break;
		
		case 54:
			if (bParam3 == 1)
			{
				func_1086(1690231002, iParam1);
			}
			else
			{
				func_1086(517031924, iParam1);
			}
			break;
		
		case 55:
			if (bParam3 == 1)
			{
				func_1086(1225386280, iParam1);
			}
			else if (func_1088(54))
			{
				func_1086(-283235773, iParam1);
			}
			else
			{
				func_1086(701962369, iParam1);
			}
			break;
		
		case 38:
			if (bParam3 == 1)
			{
				func_1086(1355398007, iParam1);
			}
			else
			{
				func_1086(-1900349467, iParam1);
			}
			break;
		
		case 39:
			if (bParam3 == 1)
			{
				func_1086(574636806, iParam1);
			}
			else
			{
				func_1086(-196256251, iParam1);
			}
			break;
		
		case 40:
			if (bParam3 == 1)
			{
				func_1086(821118338, iParam1);
			}
			else if (func_1088(39))
			{
				func_1086(846829260, iParam1);
			}
			else
			{
				func_1086(-1212247553, iParam1);
			}
			break;
		
		case 43:
			if (bParam3 == 1)
			{
				if (func_446(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_1086(1422779093, iParam1);
				}
				else
				{
					func_1086(-1769536986, iParam1);
				}
			}
			else
			{
				func_1086(-600786233, iParam1);
			}
			break;
		
		case 45:
			if (bParam3 == 1)
			{
				func_1086(352134789, iParam1);
			}
			else if (func_1088(43))
			{
				func_1086(260723113, iParam1);
			}
			else
			{
				func_1086(1080243038, iParam1);
			}
			break;
		
		case 41:
			if (bParam3 == 1)
			{
				func_1086(-457958799, iParam1);
			}
			else
			{
				func_1086(2076458086, iParam1);
			}
			break;
		
		case 42:
			if (func_1088(41))
			{
				func_1086(-546824600, iParam1);
			}
			else
			{
				func_1086(-308364587, iParam1);
			}
			break;
		
		case 49:
			if (bParam3 == 1)
			{
				func_1086(1297261593, iParam1);
			}
			else
			{
				func_1086(1940089142, iParam1);
			}
			break;
		
		case 50:
			if (bParam3 == 1)
			{
				func_1086(2068484886, iParam1);
			}
			else if (func_1088(49))
			{
				func_1086(-1489080639, iParam1);
				func_1086(-2102244050, iParam1);
			}
			else
			{
				func_1086(-1863040467, iParam1);
			}
			break;
		
		case 51:
			func_1086(-2055943209, iParam1);
			break;
		
		case 58:
			if (func_452(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_1086(1650066845, iParam1);
			}
			else
			{
				func_1086(151370023, iParam1);
			}
			func_1086(1426057961, iParam1);
			func_1086(476379584, iParam1);
			break;
		
		case 59:
			func_1086(-1638117866, iParam1);
			break;
		
		case 62:
			func_1086(199541730, iParam1);
			break;
		
		case 63:
			func_1086(1703485804, iParam1);
			func_1086(-800449045, iParam1);
			break;
		
		case 65:
			func_1086(-1678210868, iParam1);
			func_1086(-1448238026, iParam1);
			func_1086(-1200864845, iParam1);
			func_1086(1473511536, iParam1);
			break;
		
		case 66:
			func_1086(-1774490051, iParam1);
			func_1086(-34645921, iParam1);
			func_1086(174027075, iParam1);
			func_1086(-1155999, iParam1);
			func_1087(1);
			break;
		
		case 67:
			func_1086(701612593, iParam1);
			func_1086(-1069631343, iParam1);
			func_1086(1673428882, iParam1);
			break;
		
		case 68:
			func_1086(-739133286, iParam1);
			func_1086(-2130089358, iParam1);
			func_1086(2056190391, iParam1);
			func_1086(1941753817, iParam1);
			func_1087(0);
			break;
		
		case 70:
			func_1086(-1217555753, iParam1);
			break;
		
		case 71:
			func_1086(697048821, iParam1);
			break;
		
		case 73:
			func_1086(-553148661, iParam1);
			break;
		
		case 75:
			func_1086(1349250531, iParam1);
			break;
		
		case 77:
			if (bParam3 == 1)
			{
				func_1086(1414263863, iParam1);
			}
			else
			{
				func_1086(-1772294468, iParam1);
			}
			break;
		
		case 79:
			if (bParam3 == 1)
			{
				func_1086(1835465936, iParam1);
				func_1086(523715611, iParam1);
			}
			else if (func_1088(78))
			{
				func_1086(1420338873, iParam1);
			}
			else
			{
				func_1086(-46362051, iParam1);
			}
			break;
		
		case 80:
			if (bParam3 == 1)
			{
				func_1086(10180941, iParam1);
			}
			else if (func_1088(79))
			{
				func_1086(768420635, iParam1);
			}
			else
			{
				func_1086(-1734012650, iParam1);
			}
			break;
		
		case 85:
			if (bParam3 == 1)
			{
				func_1086(-383601523, iParam1);
			}
			else
			{
				func_1086(1004812390, iParam1);
			}
			break;
		
		case 86:
			if (bParam3 == 1)
			{
				func_1086(1606472408, iParam1);
			}
			else
			{
				func_1086(1405690220, iParam1);
			}
			break;
		
		case 87:
			if (bParam3 == 1)
			{
				func_1086(-203571927, iParam1);
			}
			else
			{
				func_1086(640033630, iParam1);
			}
			break;
		
		case 88:
			if (bParam3 == 1)
			{
				func_1086(729886222, iParam1);
			}
			else
			{
				func_1086(-158717807, iParam1);
			}
			break;
		
		case 89:
			if (bParam3 == 1)
			{
				func_1086(-714816362, iParam1);
			}
			else
			{
				func_1086(1160146336, iParam1);
			}
			break;
		
		case 92:
			if (bParam3 == 1)
			{
				func_1086(-932932179, iParam1);
				func_1086(-1458537240, iParam1);
			}
			else
			{
				func_1086(-1764383885, iParam1);
				func_1086(894349517, iParam1);
			}
			break;
		
		case 93:
			if (bParam3 == 1)
			{
				func_1086(1741466706, iParam1);
			}
			else
			{
				func_1086(1405815775, iParam1);
			}
			break;
		
		case 94:
			func_1086(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1086(1905280979, iParam1);
			}
			else
			{
				func_1086(-1966245299, iParam1);
			}
			func_1086(721468880, iParam1);
			break;
		
		case 99:
			func_1086(800644248, iParam1);
			break;
		
		case 101:
			if (bParam3 == 1)
			{
				func_1086(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1086(-1117781095, iParam1);
				}
				else
				{
					func_1086(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1086(141494548, iParam1);
			}
			else
			{
				func_1086(-633957459, iParam1);
			}
			break;
		
		case 102:
			if (bParam3 == 1)
			{
				func_1086(-369525697, iParam1);
			}
			else if (func_1088(101))
			{
				func_1086(1595015219, iParam1);
			}
			else
			{
				func_1086(-321486961, iParam1);
			}
			break;
		
		case 103:
			func_1086(1422724221, iParam1);
			break;
		
		case 104:
			if (bParam3 == 1)
			{
				func_1086(793460477, iParam1);
				func_1086(-1610242176, iParam1);
			}
			else if (func_1088(103))
			{
				func_1086(1830897187, iParam1);
			}
			else
			{
				func_1086(1419017828, iParam1);
			}
			break;
		
		case 105:
			if (bParam3 == 1)
			{
				func_1086(1528309077, iParam1);
			}
			else if (func_1088(104))
			{
				func_1086(1864966105, iParam1);
			}
			else
			{
				func_1086(-103336013, iParam1);
			}
			break;
		
		case 108:
			func_1086(1175579551, iParam1);
			break;
		
		case 109:
			if (bParam3 == 1)
			{
				func_1086(-1123227713, iParam1);
				func_1086(-889574341, iParam1);
			}
			else
			{
				func_1086(2065385917, iParam1);
				func_1086(780305039, iParam1);
			}
			break;
		
		case 110:
			if (bParam3 == 1)
			{
				func_1086(-887421691, iParam1);
			}
			else if (func_1088(109))
			{
				func_1086(-1318117949, iParam1);
			}
			else
			{
				func_1086(1632244327, iParam1);
			}
			break;
		
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_1086(284822762, iParam1);
				}
				else
				{
					func_1086(-1425017554, iParam1);
				}
			}
			else if (func_1088(110))
			{
				if (&Global_1357515 == 0)
				{
					func_1086(553087292, iParam1);
				}
				else
				{
					func_1086(-1766870331, iParam1);
					func_1086(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_1086(-1980598735, iParam1);
			}
			else
			{
				func_1086(-442732098, iParam1);
				func_1086(1955756409, iParam1);
			}
			break;
		
		case 115:
			func_1086(394303528, iParam1);
			func_1086(-2040171028, iParam1);
			break;
		
		case 143:
			if (bParam3 == 1)
			{
				func_1086(1182403394, iParam1);
			}
			else
			{
				func_1086(-2116547899, iParam1);
			}
			break;
		
		case 144:
			if (bParam3 == 1)
			{
				func_1086(924445424, iParam1);
			}
			else
			{
				func_1086(1227062271, iParam1);
			}
			break;
		
		case 117:
			if (bParam3 == 1)
			{
				func_1086(430755273, iParam1);
				func_1086(-1473879802, iParam1);
			}
			else
			{
				func_1086(1121266049, iParam1);
			}
			break;
		
		case 118:
			if (bParam3 == 1)
			{
				func_1086(73885747, iParam1);
			}
			else if (func_1088(117))
			{
				func_1086(1559707913, iParam1);
			}
			else
			{
				func_1086(926897873, iParam1);
			}
			break;
		
		case 119:
			if (bParam3 == 1)
			{
				func_1086(-2103887972, iParam1);
			}
			else if (func_1088(118))
			{
				func_1086(-435828462, iParam1);
			}
			else
			{
				func_1086(-516020583, iParam1);
			}
			break;
		
		case 121:
			if (bParam3 == 1)
			{
				func_1086(2054486196, iParam1);
			}
			else
			{
				func_1086(1809320262, iParam1);
			}
			break;
		
		case 122:
			if (bParam3 == 1)
			{
				func_1086(-570086056, iParam1);
			}
			else if (func_1088(121))
			{
				func_1086(32337856, iParam1);
			}
			else
			{
				func_1086(-206811842, iParam1);
			}
			break;
		
		case 124:
			if (bParam3 == 1)
			{
				func_1086(813493663, iParam1);
			}
			else if (func_1088(122))
			{
				func_1086(-2132763590, iParam1);
			}
			else
			{
				func_1086(477901035, iParam1);
			}
			break;
		
		case 125:
			if (bParam3 == 1)
			{
				func_1086(-66240572, iParam1);
				func_1086(1563075046, iParam1);
			}
			else
			{
				func_1086(-787011772, iParam1);
				func_1086(-1523377438, iParam1);
			}
			break;
		
		case 127:
			func_1086(61020800, iParam1);
			break;
		
		case 129:
			func_1086(428985222, iParam1);
			break;
		
		case 131:
			func_1086(-1393851036, iParam1);
			break;
		
		case 133:
			func_1086(1559531342, iParam1);
			break;
		
		case 134:
			func_1086(-718846442, iParam1);
			break;
		
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1086(-1374407408, iParam1);
				}
				else
				{
					func_1086(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_1086(-472672138, iParam1);
				}
				else
				{
					func_1086(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1086(-1678710489, iParam1);
			}
			else
			{
				func_1086(1522210661, iParam1);
			}
			break;
		
		case 136:
			if (bParam3 == 1)
			{
				func_1086(1717582460, iParam1);
			}
			else
			{
				func_1086(343644664, iParam1);
			}
			break;
		
		case 137:
			if (bParam3 == 1)
			{
				func_1086(1568112362, iParam1);
				func_1086(1388317526, iParam1);
			}
			else if (func_1088(136))
			{
				func_1086(-1597534828, iParam1);
				func_1086(-1207918353, iParam1);
			}
			else
			{
				func_1086(-1940891082, iParam1);
				func_1086(-598277294, iParam1);
			}
			break;
		
		case 142:
			if (iParam2 == 1)
			{
				func_1086(448334530, iParam1);
				func_1086(2145375502, iParam1);
			}
			else
			{
				func_1086(-1891994685, iParam1);
			}
			break;
		
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_1086(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1086(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_1086(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1086(848633571, iParam1);
			}
			break;
		
		case 147:
			if (bParam3 == 1)
			{
				func_1086(-66616327, iParam1);
			}
			else
			{
				func_1086(1978361607, iParam1);
			}
			break;
		
		case 148:
			if (bParam3 == 1)
			{
				func_1086(1862916706, iParam1);
			}
			else if (func_1088(147))
			{
				func_1086(675105199, iParam1);
			}
			else
			{
				func_1086(-1993800776, iParam1);
			}
			break;
		
		case 149:
			if (bParam3 == 1)
			{
				func_1086(174409701, iParam1);
			}
			else if (func_1088(148))
			{
				func_1086(-1730895475, iParam1);
			}
			else
			{
				func_1086(-342396910, iParam1);
			}
			break;
		
		case 150:
			if (bParam3 == 1)
			{
				func_1086(1295237052, iParam1);
			}
			else if (func_1088(149))
			{
				func_1086(-788577684, iParam1);
			}
			else
			{
				func_1086(1527015024, iParam1);
			}
			break;
		
		default:
			break;
	}
}

int func_662(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_104(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_653(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				
				case 1:
					return -694047360;
				
				case 2:
					return -757336127;
				
				case 3:
					return -164763388;
				
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				
				case 5:
					return 2030928096;
				
				case 6:
					return -332258016;
				
				case 10:
					return 1817180056;
				
				case 13:
					return 545240164;
				
				case 15:
					return 1141344854;
				
				case 8:
					return 1796786552;
				
				case 25:
					return 1783253542;
				
				case 14:
					return -2129915369;
				
				case 7:
					return -1393633441;
				
				case 9:
					if (func_446(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				
				case 11:
					return 278608719;
				
				case 12:
					return -561040434;
				
				case 16:
					return 95619635;
				
				case 17:
					return 1185998732;
				
				case 53:
					return -221923309;
				
				case 18:
					return -620369863;
				
				case 19:
					return -1738185394;
				
				case 20:
					return -637873918;
				
				case 22:
					return 561912024;
				
				case 23:
					return 951007010;
				
				case 24:
					return -1512720465;
				
				case 21:
					return 920901415;
				
				case 26:
					return -1664107227;
				
				case 27:
					return -1934704933;
				
				case 28:
					return -582523927;
				
				case 29:
					return -259827569;
				
				case 30:
					return -1633236438;
				
				case 31:
					return -1396074730;
				
				case 32:
					return -248683070;
				
				case 33:
					return 1454698172;
				
				case 34:
					return -1548165899;
				
				case 35:
					return -1486701482;
				
				case 36:
					return 1249990864;
				
				case 37:
					return -164125056;
				
				case 38:
					return -1198456774;
				
				case 39:
					return -820014425;
				
				case 40:
					return -2071373019;
				
				case 41:
					return -162152912;
				
				case 42:
					return -532430534;
				
				case 43:
					return -695655810;
				
				case 44:
					return -1238376790;
				
				case 45:
					return 1927460276;
				
				case 46:
					return 1824331150;
				
				case 47:
					return 1888528254;
				
				case 48:
					return 1971155641;
				
				case 49:
					return -1757085331;
				
				case 50:
					return 1264235360;
				
				case 51:
					return 1157034909;
				
				case 52:
					return 512067206;
				
				case 54:
					return -258855820;
				
				case 55:
					return 2143139308;
				
				case 56:
					return -18183703;
				
				case 57:
					return 692218123;
				
				case 58:
					return 127002552;
				
				case 59:
					return 1769573516;
				
				case 60:
					return 501194998;
				
				case 61:
					return -219249641;
				
				case 62:
					return 1935952956;
				
				case 63:
					return 121222228;
				
				case 64:
					return -1381943684;
				
				case 65:
					return -1417145007;
				
				case 66:
					return -314300362;
				
				case 67:
					return -445710060;
				
				case 68:
					return 122725574;
				
				case 69:
					return -935212592;
				
				case 70:
					return -597010176;
				
				case 71:
					return 534386033;
				
				case 72:
					return -330340613;
				
				case 73:
					return 1425403638;
				
				case 74:
					return 124507607;
				
				case 75:
					return 747937920;
				
				case 76:
					return 1636680094;
			}
			break;
		
		case 8:
			iVar2 = func_105(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				
				case 0:
					return -172442174;
				
				case 63:
					return 569547151;
				
				case 97:
					return 1150653348;
				
				case 98:
					return -2075517304;
				
				case 94:
					return -1048889581;
				
				case 59:
					return 2137967386;
				
				case 61:
					return -1955429862;
				
				case 62:
					return 1899640864;
				
				case 112:
					return 1469701481;
				
				case 113:
					return -954047483;
				
				case 114:
					return -1868521635;
				
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				
				case 76:
					return 281905065;
				
				case 134:
					return 1132574871;
				
				case 3:
					return 709886296;
				
				case 5:
					return -1646431667;
				
				case 21:
					return 2143106360;
				
				case 37:
					return 1073595144;
				
				case 138:
					return -1582252733;
				
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				
				case 106:
					return 195634974;
				
				case 107:
					return 1508162848;
				
				case 115:
					return -1971110347;
				
				case 116:
					return 446631778;
					return 1909655985;
					return -303175962;
					return 437096661;
					*uParam1 = -2060316038;
					return 1046168872;
					return 1593516439;
					return 1234351222;
					return -1988547710;
					return 98434060;
					return 1937922313;
					return -713369135;
					return -1538781541;
					return -925475803;
					return -1479860879;
					return -1025265051;
					return -270246276;
					Jump @1941; //curOff = 1793
					iVar3 = func_105(iParam0);
					switch (iVar3)
					{
						case 581819093:
							return -1202860612;
						
						case -1220302226:
							return 703663141;
						
						case -839878969:
							return 1534808110;
						
						case -360730635:
							return -742985447;
						
						case 687859577:
							return -331451824;
						
						case 1202375449:
							return 1344816618;
						
						case -1891229662:
							return 597768834;
						
						case -668333238:
							return -120359954;
						
						case 99378894:
							return -290258665;
						
						default:
							break;
					}
					return 176656832;
				}

int func_663(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_1091(iParam0);
	uVar3 = func_1092(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = uParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_325();
				func_686(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_1093(iParam0, 1);
			if (func_1094(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_1095(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_1096(1, iParam0);
				}
				else
				{
					func_1097(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_664(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*uParam1 = 35;
			return 70;
		
		case 76:
			*uParam1 = 35;
			return 70;
		
		case 70:
			*uParam1 = 35;
			return 70;
		
		case 73:
			*uParam1 = 35;
			return 70;
		
		case 19:
			*uParam1 = 25;
			return 50;
		
		case 21:
			*uParam1 = 35;
			return 70;
		
		case 60:
			*uParam1 = 35;
			return 70;
		
		case 61:
			*uParam1 = 35;
			return 70;
		
		case 62:
			*uParam1 = 35;
			return 70;
		
		case 63:
			*uParam1 = 35;
			return 70;
		
		case 64:
			*uParam1 = 35;
			return 70;
		
		case 65:
			*uParam1 = 35;
			return 70;
		
		case 66:
			*uParam1 = 35;
			return 70;
		
		case 67:
			*uParam1 = 35;
			return 70;
		
		case 32:
			*uParam1 = 35;
			return 70;
		
		case 48:
			*uParam1 = 35;
			return 70;
		
		case 49:
			*uParam1 = 35;
			return 70;
		
		case 47:
			*uParam1 = 30;
			return 60;
		
		case 58:
			*uParam1 = 30;
			return 60;
		
		case 27:
			*uParam1 = 30;
			return 60;
		
		case 29:
			*uParam1 = 40;
			return 100;
		
		case 30:
			*uParam1 = 50;
			return 100;
		
		case 33:
			*uParam1 = 30;
			return 60;
		
		case 23:
			*uParam1 = 30;
			return 60;
		
		case 10:
			*uParam1 = 30;
			return 60;
		
		case 5:
			*uParam1 = 45;
			return 60;
		
		case 11:
			*uParam1 = 35;
			return 70;
		
		case 9:
			*uParam1 = 45;
			return 70;
		
		case 15:
			*uParam1 = 15;
			return 35;
		
		case 35:
			*uParam1 = 50;
			return 70;
		
		case 8:
			*uParam1 = 50;
			return 100;
		
		case 36:
			*uParam1 = 40;
			return 80;
		
		case 22:
			*uParam1 = 25;
			return 45;
		
		case 39:
		case 41:
		case 42:
		case 43:
			*uParam1 = 20;
			return 40;
	}
	return 120;
}

int func_665(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_666(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		
		case 60:
			*iParam1 = 0;
			return 0;
		
		case 74:
			*iParam1 = 45;
			return 75;
		
		case 119:
			*iParam1 = 45;
			return 75;
		
		case 84:
			*iParam1 = 45;
			return 75;
		
		case 85:
			*iParam1 = 45;
			return 75;
		
		case 106:
			*iParam1 = 20;
			return 35;
		
		case 107:
			*iParam1 = 20;
			return 35;
		
		case 8:
			*iParam1 = 45;
			return 75;
		
		case 9:
			*iParam1 = 45;
			return 75;
		
		case 10:
			*iParam1 = 45;
			return 75;
		
		case 98:
			*iParam1 = 30;
			return 50;
		
		case 82:
			*iParam1 = 30;
			return 50;
		
		case 83:
			*iParam1 = 30;
			return 50;
		
		case 99:
			*iParam1 = 30;
			return 50;
		
		case 138:
			*iParam1 = 30;
			return 50;
		
		case 139:
			*iParam1 = 30;
			return 50;
		
		case 140:
			*iParam1 = 30;
			return 50;
		
		case 141:
			*iParam1 = 30;
			return 50;
		
		case 142:
			*iParam1 = 30;
			return 50;
		
		case 21:
			*iParam1 = 30;
			return 50;
		
		case 136:
			*iParam1 = 30;
			return 50;
		
		case 137:
			*iParam1 = 40;
			return 80;
		
		case 124:
			*iParam1 = 30;
			return 50;
		
		case 125:
			*iParam1 = 30;
			return 50;
		
		case 127:
			*iParam1 = 30;
			return 50;
		
		case 128:
			*iParam1 = 30;
			return 50;
		
		case 131:
			*iParam1 = 30;
			return 50;
		
		case 133:
			*iParam1 = 30;
			return 50;
		
		case 105:
			*iParam1 = 30;
			return 50;
		
		case 89:
			*iParam1 = 30;
			return 50;
		
		case 93:
			*iParam1 = 30;
			return 50;
		
		case 75:
			*iParam1 = 30;
			return 50;
		
		case 5:
			*iParam1 = 50;
			return 100;
		
		case 6:
			*iParam1 = 30;
			return 50;
		
		case 77:
			*iParam1 = 30;
			return 50;
		
		case 78:
			*iParam1 = 30;
			return 50;
		
		case 30:
			*iParam1 = 30;
			return 50;
		
		case 31:
			*iParam1 = 30;
			return 50;
		
		case 32:
			*iParam1 = 30;
			return 50;
		
		case 33:
			*iParam1 = 30;
			return 50;
		
		case 34:
			*iParam1 = 30;
			return 50;
		
		case 35:
			*iParam1 = 30;
			return 50;
		
		case 36:
			*iParam1 = 30;
			return 50;
		
		case 24:
			*iParam1 = 30;
			return 50;
		
		case 25:
			*iParam1 = 30;
			return 50;
		
		case 26:
			*iParam1 = 30;
			return 50;
		
		case 27:
			*iParam1 = 30;
			return 50;
		
		case 28:
			*iParam1 = 30;
			return 50;
		
		case 66:
			*iParam1 = 30;
			return 50;
		
		case 67:
			*iParam1 = 50;
			return 100;
		
		case 146:
			*iParam1 = 30;
			return 50;
		
		case 38:
			*iParam1 = 30;
			return 45;
		
		case 39:
			*iParam1 = 30;
			return 45;
		
		case 40:
			*iParam1 = 30;
			return 45;
		
		case 41:
			*iParam1 = 30;
			return 45;
		
		case 42:
			*iParam1 = 30;
			return 45;
		
		case 43:
			*iParam1 = 30;
			return 45;
		
		case 44:
			*iParam1 = 30;
			return 45;
		
		case 45:
			*iParam1 = 30;
			return 45;
		
		case 46:
			*iParam1 = 30;
			return 45;
		
		case 47:
			*iParam1 = 30;
			return 45;
		
		case 48:
			*iParam1 = 30;
			return 45;
		
		case 49:
			*iParam1 = 30;
			return 45;
		
		case 50:
			*iParam1 = 30;
			return 45;
		
		case 51:
			*iParam1 = 30;
			return 45;
		
		case 112:
			*iParam1 = 10;
			return 20;
		
		case 113:
			*iParam1 = 25;
			return 45;
		
		case 114:
			*iParam1 = 10;
			return 20;
		
		case 59:
			*iParam1 = 15;
			return 35;
		
		case 61:
			*iParam1 = 15;
			return 35;
		
		case 97:
			*iParam1 = 15;
			return 35;
		
		case 94:
			*iParam1 = 20;
			return 30;
		
		case 0:
			*iParam1 = 45;
			return 75;
		
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_668(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_203() != -1)
	{
		return;
	}
	if ((Global_36615 && func_1098(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1099(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_1100(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_1101(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1100(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_669(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

int func_670()
{
	if (func_203() != -1)
	{
		return 0;
	}
	if (!func_1102())
	{
		return 0;
	}
	if (!func_452(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_452(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_452(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_452(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_452(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_452(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_452(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_452(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_452(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_452(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_452(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_452(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_452(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_452(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_452(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_452(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_452(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_452(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_452(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_452(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_452(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_452(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_452(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_452(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_452(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_452(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_671()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_672(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	if (!func_1105(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1106(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1107(iParam0, bParam2);
	iVar2 = 0;
	if (func_1108(iParam0, 0, 0) == 0)
	{
		if (func_1109(iParam0))
		{
			iVar5 = func_1110(iParam0);
			iVar6 = func_1111(iVar5);
			iVar7 = func_1112(iVar6) + 1;
			func_1113(iVar5);
			if (func_1114(38))
			{
				func_299(483, 0);
			}
			else
			{
				func_299(482, 0);
			}
			if (iVar7 == func_1115(iVar6))
			{
				func_672(func_1116(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_1102() && func_1117(4))
				{
					if (func_1102() && (func_1118(38) || func_1114(38)))
					{
						func_1120(38, func_1116(iVar6), 0, 0, func_1119(), 0, -1, 0);
						func_1121(2);
					}
					else
					{
						func_1120(38, func_1116(iVar6), 0, 0, func_1119(), 0, -1, 0);
						func_1121(1);
					}
				}
			}
			else if (func_1102() && func_1117(4))
			{
				if (func_1102() && (func_1118(38) || func_1114(38)))
				{
					func_1120(38, 0, 0, 0, func_1119(), 0, -1, 0);
					func_1121(2);
				}
				else
				{
					func_1120(38, 0, 0, 0, func_1119(), 0, -1, 0);
					func_1121(1);
				}
			}
			if (func_1102() && func_1117(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_1102() && (func_1118(38) || func_1114(38)))
					{
						func_1122(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1122(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_1123(iParam0) == -1037537535)
	{
		if ((!func_1124(iParam0, 866047851) && !func_1124(iParam0, -1979000645)) && !func_1124(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1125(iParam0, 8388608) && !func_1126(28))
	{
		func_1127(28);
	}
	if (!bVar3)
	{
		if (func_1124(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_1128(iParam0) == -1447088266)
			{
				iVar1 = func_1130(func_1129(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_203() == -1)
					{
						func_544(iVar1);
					}
					if (func_1131(0) && func_892(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1132(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_203() == -1)
					{
						func_544(iParam0);
					}
					if (func_1131(0) && func_892(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1132(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_1123(iParam0) == -427144552)
		{
			if (!func_1133(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1123(iParam0) == 307971639 && func_1134(iParam0))
		{
			if (!func_1135(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1124(iParam0, 866047851))
		{
			func_1136(iParam0);
		}
		else if (func_1124(iParam0, 2000026003))
		{
			func_1137(iParam0);
		}
		else if (func_1124(iParam0, -103750053))
		{
			func_1139(func_1138(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_1139(func_1140(-717883113, 2091222383), iVar0);
		}
		else if (func_1124(iParam0, -121341956) && !func_1124(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_452(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_299(498, 0);
				}
			}
			if (func_1124(iParam0, -2017733358) || func_1124(iParam0, -1369131378))
			{
				func_1141(iParam0);
			}
		}
		else if (func_1124(iParam0, -136654233))
		{
			if (func_1124(iParam0, -1021472396))
			{
			}
		}
		else if (func_1124(iParam0, -1466706512) && func_1124(iParam0, 1147021565))
		{
			func_299(484, 0);
		}
		else if (func_1124(iParam0, 1147021565) && func_1124(iParam0, -524514947))
		{
		}
		else if (func_1124(iParam0, 554195525))
		{
		}
		else if (func_1124(iParam0, 589988438))
		{
			if (func_1142())
			{
				func_1143(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1124(iParam0, 787083290) && func_1124(iParam0, 949916894))
		{
			func_1144(iParam0);
		}
		else if (func_1124(iParam0, -1718133314))
		{
			func_1145(iParam0);
		}
		else if (func_1124(iParam0, -1738650224))
		{
			func_1146(iParam0);
		}
		else if (func_1124(iParam0, -1112814642) && func_1124(iParam0, 949916894))
		{
			func_1147(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_1124(iParam0, 1841149704))
		{
			func_1148();
		}
		else if (func_1124(iParam0, 606799272))
		{
			func_1149(iParam0, iParam1);
			func_1150(iParam0);
		}
		else if (func_1124(iParam0, -1112814642) && func_1124(iParam0, -1697809989))
		{
			func_1151(iParam0, 0, 0, 0);
		}
		else if (func_1124(iParam0, -2017733358) || func_1124(iParam0, -1369131378))
		{
			func_1141(iParam0);
		}
		else if (func_1124(iParam0, -1921346699))
		{
			if (func_203() != -1)
			{
				return 0;
			}
			func_1152(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_1124(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_698(215778062, 1, 0))
					{
						func_672(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1334018438:
					if (!func_698(670273567, 1, 0))
					{
						func_672(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1055480217:
					if (!func_698(-967317137, 1, 0))
					{
						func_672(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -978159653:
					if (!func_698(526074061, 1, 0))
					{
						func_672(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 2100131425:
					if (!func_698(-1045488665, 1, 0))
					{
						func_672(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -2041382104:
					if (!func_698(471514780, 1, 0))
					{
						func_672(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1124(iParam0, -839724752) && func_1125(iParam0, 4))
		{
			if (!func_1114(42))
			{
				func_1153(iParam0);
			}
		}
		else if (func_1124(iParam0, 1399091007))
		{
			func_1154(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_1124(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				
				case -1421669656:
					iVar8 = -59585102;
					break;
				
				case -830181022:
					iVar8 = 1018123892;
					break;
				
				case 917695895:
					iVar8 = -1455768246;
					break;
				
				case -1580595448:
					iVar8 = -921879912;
					break;
				
				case 1309992709:
					iVar8 = 982182330;
					break;
				
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_672(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case -1185145312:
				func_1127(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_1022(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1155(&iVar9, 0))
				{
					func_892(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			
			case 1171350303:
				if (func_203() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_1022(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			
			case -160924582:
				break;
			
			case 2131771850:
				func_299(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1156();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1157();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1158();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1159();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_888();
				break;
			
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			
			case -1937935584:
				func_1160(499813453, 854119837, 0);
				func_1161(499813453, 0);
				func_1162(1);
				break;
			
			case 2127812557:
				func_1160(499813453, -1292544588, 0);
				func_1161(499813453, 0);
				func_1162(2);
				break;
			
			case 808991383:
				func_1160(499813453, -1003325394, 0);
				func_1161(499813453, 0);
				func_1162(4);
				break;
			
			case 1134518629:
				func_1160(666607663, -335460405, 0);
				func_1161(666607663, 0);
				func_1163(1);
				break;
			
			case 902940106:
				func_1160(666607663, 903797617, 0);
				func_1161(666607663, 0);
				func_1163(2);
				break;
			
			case -418174898:
				func_1160(666607663, 669728650, 0);
				func_1161(666607663, 0);
				func_1163(4);
				break;
			
			case -648114971:
				func_1160(-220219788, 1214120047, 0);
				func_1161(-220219788, 0);
				func_1164(1);
				break;
			
			case 211153747:
				func_1160(-220219788, 655769340, 0);
				func_1161(-220219788, 0);
				func_1164(2);
				break;
			
			case -32876996:
				func_1160(-220219788, 885316185, 0);
				func_1161(-220219788, 0);
				func_1164(4);
				break;
			
			case 1191437462:
				func_1160(218622660, -1491419385, 0);
				func_1161(218622660, 0);
				func_1165(1);
				break;
			
			case 1119149048:
				func_1160(218622660, 1809565830, 0);
				func_1161(218622660, 0);
				func_1165(2);
				break;
			
			case 506073827:
				func_1160(390004462, -628873767, 0);
				func_1161(390004462, 0);
				func_1166(1);
				break;
			
			case -1876986168:
				func_1160(390004462, -405421956, 0);
				func_1161(390004462, 0);
				func_1166(2);
				break;
			
			case 2142623221:
				func_1160(390004462, -1108972386, 0);
				func_1161(390004462, 0);
				func_1166(4);
				break;
			
			case 1508215381:
				func_1160(6410548, 1053716392, 0);
				func_1161(6410548, 0);
				func_1167(1);
				break;
			
			case -888935280:
				func_1160(6410548, 806507056, 0);
				func_1161(6410548, 0);
				func_1167(2);
				break;
			
			case -1252474566:
				func_1160(6410548, 1571925350, 0);
				func_1161(6410548, 0);
				func_1167(4);
				break;
			
			case -1465702449:
				func_1160(6410548, 1330352282, 0);
				func_1161(6410548, 0);
				func_1167(8);
				break;
			
			case -21093309:
				func_1169(242, func_1168(-21093309), 0);
				break;
			
			case 204375141:
				func_1169(240, func_1168(204375141), 0);
				break;
			
			case -417963070:
				func_1169(241, func_1168(-417963070), 0);
				break;
			
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1170(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1170(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1170(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1170(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1170(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1170(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 80178851:
				func_299(488, 0);
				break;
			
			case 1613651027:
				func_299(491, 0);
				break;
			
			case -885810591:
				func_299(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_672(func_1171(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_672(func_1172(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			
			case -601932535:
				if (func_1126(1))
				{
					func_299(487, 0);
				}
				break;
			
			case -898386032:
				func_299(486, 0);
				break;
			
			case -2035110427:
				if (func_203() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			
			case 1510719693:
				func_299(496, 0);
				break;
			
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_1173(&iVar10);
		if (!func_1174(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_1131(0))
		{
			return 1;
		}
		if (func_1123(iParam0) == -1037537535)
		{
			func_1175(iParam0);
		}
		if (func_1124(iParam0, -1979000645))
		{
			func_1176(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_1131(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_672(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1177(iVar2, 0);
		}
	}
	Var35 = { func_1178(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_1179(iParam0);
	if (sParam6 > 0f)
	{
		if (func_1124(iParam0, -839724752))
		{
			func_1180(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_1181(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_673(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (func_1124(iParam0, 1989861793))
	{
		iVar0 = func_1182(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_1183(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_1184(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_1185(iVar14, iVar1);
					if (iVar15 != iParam0 && func_1104(iVar15, 0))
					{
						if (func_1186(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_1187(iVar1);
				if (bVar13)
				{
					func_1188(iParam0);
				}
				else
				{
					func_299(306, 0);
				}
			}
		}
	}
}

void func_674()
{
	if (func_203() != -1)
	{
		return;
	}
	func_1189();
	func_1190();
	func_1191();
	func_1192();
	func_1193();
	func_1194();
	func_1195();
}

void func_675(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	
	func_1196(iParam0, 1, 1, -142743235, 1);
	if (func_1197(iParam0))
	{
		func_1198(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_1200(func_1199(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1201(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_1202() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1203(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1203(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_1204(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_1204(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_1204(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_1204(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_1204(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_1204(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_1204(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_1204(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_1204(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1205(iVar8, iVar0))
				{
					func_1206(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1205(iVar8, iVar0))
		{
			func_1206(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_676()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1205(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_1202() == -2125499975 || func_1202() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_1206(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_1206(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_677()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_678(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		
		case 1:
			return "COMP_JOHN";
		
		case 2:
			return "COMP_JAVIER";
		
		case 3:
			return "COMP_BILL";
		
		case 4:
			return "COMP_UNCLE";
		
		case 5:
			return "COMP_HOSEA";
		
		case 6:
			return "COMP_MICAH";
		
		case 7:
			return "COMP_CHARLES";
		
		case 8:
			return "COMP_SEAN";
		
		case 9:
			return "COMP_LENNY";
		
		case 10:
			return "COMP_KIERAN";
		
		case 23:
			return "COMP_TRELAWNY";
		
		case 17:
			return "COMP_PEARSON";
		
		case 18:
			return "COMP_STRAUSS";
		
		case 13:
			return "COMP_ABIGAIL";
		
		case 14:
			return "COMP_JACK";
		
		case 16:
			return "COMP_MOLLY_OSHEA";
		
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		
		case 15:
			return "COMP_MARY_BETH";
		
		case 20:
			return "COMP_KAREN";
		
		case 22:
			return "COMP_TILLY";
		
		case 11:
			return "COMP_SADIE";
		
		case 24:
			return "COMP_CLEET";
		
		case 25:
			return "COMP_JOE";
		
		case 26:
			return "COMP_EAGLE_FLIES";
		
		case 12:
			if ((func_452(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_452(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_159(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_465(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_679(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1200(iParam0, 1);
	func_1207(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_1207(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_1208(17, iParam0, 0, 0, 0);
		}
	}
	if (func_203() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1207((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1207((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_680()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_681()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_682(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_1209(iParam1, 1, 0) };
		iParam3 = func_1210(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1211(iParam3);
	return func_1022(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

bool func_683()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_684(int iParam0)
{
	int iVar0;
	
	if (!func_891(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_685(int iParam0, int iParam1)
{
	if (!func_1212(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1213(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_1214(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_686(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_1215(*iParam0);
	iVar1 = func_1216(*iParam0);
	iVar2 = func_1217(*iParam0);
	iVar3 = func_807(*iParam0);
	iVar4 = func_1218(*iParam0);
	iVar5 = func_1219(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_1220(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1220(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_1221(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_687(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_1212(iParam0))
	{
		return;
	}
	if (!func_1222(iParam1))
	{
		return;
	}
	if (func_1084(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1213(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_685(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1223(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_139(0, 0, 1))
		{
			func_715(0, 17);
		}
	}
}

void func_688()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_689()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_690()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_691()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_692()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_693()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_694()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_695()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_696()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_697(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_698(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_1104(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1123(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_1224(iParam0, 1))
		{
			return false;
		}
	}
	return func_1108(iParam0, 0, bParam2) >= iParam1;
}

void func_699(int iParam0)
{
	if (func_171(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1225(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_1225(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_700()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_701()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_702()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_703()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_704()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1103(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_705()
{
	if (func_1226() > 1)
	{
		func_1227();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_299(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_299(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_299(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_299(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_299(452, 1);
		}
	}
}

bool func_706(int iParam0)
{
	return func_468(iParam0, 4, 1);
}

void func_707(int iParam0)
{
	func_1228(iParam0, 4, 1);
}

void func_708(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_658(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_709(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_171(32768))
	{
		return;
	}
	if (!func_55(iParam0))
	{
		return;
	}
	func_271(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_104(iParam0))
	{
		case 1:
			func_1139(func_1140(909007663, -587839005), 1);
			iVar0 = func_105(iParam0);
			func_1139(func_658(-634848880), 1);
			switch (func_772(iVar0))
			{
				case 0:
					func_1139(func_1140(909007663, 1325140787), 1);
					break;
				
				case 1:
					func_1139(func_1140(909007663, 2101241783), 1);
					break;
				
				case 2:
					func_1139(func_1140(909007663, -1296936294), 1);
					break;
				
				case 3:
					func_1139(func_1140(909007663, -798388728), 1);
					break;
				
				case 4:
					func_1139(func_1140(909007663, -1787586531), 1);
					break;
				
				case 5:
					func_1139(func_1140(909007663, -1002834519), 1);
					break;
				
				case 6:
					func_1139(func_1140(909007663, -50600144), 1);
					break;
				
				case 7:
					func_1139(func_1140(909007663, -348503123), 1);
					break;
				
				case 8:
					func_1139(func_1140(909007663, -528798161), 1);
					break;
				
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_1139(func_1140(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_1139(func_1140(909007663, 532323983), 1);
			}
			break;
		
		case 8:
			iVar1 = func_105(iParam0);
			if (func_29(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_1139(func_658(-634848880), 1);
			}
			if (func_29(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_29(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_1139(func_1140(909007663, -587839005), 1);
				}
				else
				{
					func_1139(func_1140(909007663, -2049243343), 1);
				}
			}
			if (func_29(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_773(iVar1))
				{
					case 0:
						func_1139(func_1140(909007663, 1325140787), 1);
						break;
					
					case 1:
						func_1139(func_1140(909007663, 2101241783), 1);
						break;
					
					case 2:
						func_1139(func_1140(909007663, -1296936294), 1);
						break;
					
					case 3:
						func_1139(func_1140(909007663, -798388728), 1);
						break;
					
					case 4:
						func_1139(func_1140(909007663, -1787586531), 1);
						break;
					
					case 5:
						func_1139(func_1140(909007663, -1002834519), 1);
						break;
					
					case 6:
						func_1139(func_1140(909007663, -50600144), 1);
						break;
					
					case 7:
						func_1139(func_1140(909007663, -348503123), 1);
						break;
					
					case 8:
						func_1139(func_1140(909007663, -528798161), 1);
						break;
					
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_1139(func_1140(909007663, 532323983), 1);
				}
			}
			else if (func_29(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_29(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_29(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_1139(func_1140(909007663, 551192206), 1);
				}
				else
				{
					func_1139(func_1140(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_710()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_203() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_77(64))
	{
		return;
	}
	else if (func_84(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_139(0, 0, 1) || func_1229()) || func_670())
	{
		return;
	}
	iVar0 = func_399();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1230(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_651(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_651(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1231(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_715(0, -1);
	}
	if (iVar2 > 0)
	{
		func_374("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1232(1, 0);
	Global_1956575->f_2 = 1;
}

void func_711(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_171(32768))
	{
		return;
	}
	func_1233(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_1234(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_712(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_1235(iParam0))
	{
		return 0;
	}
	if (!func_1102())
	{
		return 0;
	}
	if (!func_1236(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_713(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1237(1330954593, 0, -1);
		
		case 1:
			return func_1237(1330954593, 0, -1);
		
		case 2:
			return func_1237(1330954593, 0, -1) * 2;
		
		case 4:
			return func_1237(1330954593, 0, -1);
		
		case 5:
			return func_1237(1330954593, 0, -1);
		
		case 6:
			return func_1237(1330954593, 0, -1) * 2;
		
		case 12:
			return 75000;
		
		case 8:
			return func_1237(1330954593, 0, -1) * 3;
		
		case 9:
			return func_1237(1330954593, 0, -1) * 3;
		
		case 10:
			return func_1237(1330954593, 0, -1) * 3;
		
		case 11:
			return func_1237(1330954593, 0, -1);
		
		default:
			break;
	}
	return 0;
}

void func_714(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_1879514->f_11)
	{
		iVar0 = func_716();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_104(Global_1879514->f_1) == 1)
			{
				func_712(5, 1);
			}
			else if (func_104(Global_1879514->f_1) == 8 && (func_29(((*Global_1347702)[func_105(Global_1879514->f_1) /*49*/])->f_12, 1) || func_29(((*Global_1347702)[func_105(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_712(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_715(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_536(&Global_0, 8);
	}
	if (!func_1102() || func_203() != -1)
	{
		return;
	}
	func_536(&Global_0, 1);
}

int func_716()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1238(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1239(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

Vector3 func_717(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	
	fVar2 = 9999999f;
	func_1240(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1241() == 0 && !func_1242(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1243(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_1244();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_1245(Global_1310720->f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1246(iVar0, iVar1) };
			bVar11 = func_1247(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_242(vVar7)) && func_1248(iVar0, uParam8, iParam12)) && !func_1249(iVar0)) || bVar11)
			{
				if (func_1250(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*uParam3 = iVar0;
					*uParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}

void func_718()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_719()
{
}

void func_720()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

void func_721()
{
	if (func_203() != -1)
	{
		return;
	}
	if (!func_1102())
	{
		return;
	}
	func_1251(&(Global_40.f_40));
}

void func_722()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
		{
			(Global_40.f_11029[iVar0 /*5*/])->f_1 = { VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iVar0 /*373*/])->f_1) };
			(Global_40.f_11029[iVar0 /*5*/])->f_4 = VEHICLE::_0x67995318F5FAA496(((*Global_1425371)[iVar0 /*373*/])->f_1);
		}
		iVar0++;
	}
}

bool func_723()
{
	return !func_242(Global_1310720->f_1);
}

int func_724()
{
	return Global_40.f_4283.f_1;
}

int func_725()
{
	return Global_40.f_4283.f_4;
}

void func_726(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1252())
	{
		fVar0 = func_1253(vParam0, Global_40.f_6);
	}
	if (func_1254(33554432))
	{
		if (!func_1054(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1253(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

float func_727(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_728()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	
	if (!func_84(&Global_1935630, 8192))
	{
		return;
	}
	if (func_171(32768))
	{
		return;
	}
	func_119(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1255(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_1255(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_1255(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_1255(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1255(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_1255(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_1255(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_1255(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_1255(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1256(10f, BUILTIN::TO_FLOAT(func_1255(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1256(5f, BUILTIN::TO_FLOAT(func_1255(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1256(25f, BUILTIN::TO_FLOAT(func_1257(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1256(1f, BUILTIN::TO_FLOAT(func_1257(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1256(6f, BUILTIN::TO_FLOAT(func_1257(64058978)))));
	fVar0 = (fVar0 + (3f * func_1256(1f, BUILTIN::TO_FLOAT(func_1257(795577402)))));
	iVar1 = func_1258();
	fVar0 = (fVar0 + (0.1111111f * func_1256(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745)));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1256(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1256(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_1260()))));
	if (func_462(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_462(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_462(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_462(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_462(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 499813453)));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 666607663))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, -220219788))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 218622660))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 390004462))));
	fVar2 = func_1259(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1256(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1256(5f, BUILTIN::TO_FLOAT(func_1257(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1256(5f, BUILTIN::TO_FLOAT(func_1255(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1261(COMPENDIUM::_0x729D52F61A5A9E22(1979337996), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1261(COMPENDIUM::_0x729D52F61A5A9E22(-2125891426), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1261(COMPENDIUM::_0x729D52F61A5A9E22(1630085303), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(-1658238931));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1261(COMPENDIUM::_0x729D52F61A5A9E22(1807539419), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1261(COMPENDIUM::_0x729D52F61A5A9E22(717108105), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1261(COMPENDIUM::_0x729D52F61A5A9E22(-2143405780), 48)) / BUILTIN::TO_FLOAT(48)));
	func_1262(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1256((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1256(1f, BUILTIN::TO_FLOAT(func_1263(-2116919750)))));
	fVar5 = BUILTIN::TO_FLOAT(func_1264());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1256(5f, BUILTIN::TO_FLOAT(func_1257(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1256(1f, BUILTIN::TO_FLOAT(func_1257(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1256(1f, BUILTIN::TO_FLOAT(func_1257(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1256(1f, BUILTIN::TO_FLOAT(func_1257(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(978382515, joaat("coach"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1256(1f, BUILTIN::TO_FLOAT(func_1255(978382515, 1015970717)))));
	Var6 = { func_658(joaat("total_progress_made")) };
	fVar8 = func_1265(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_55(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_55(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_364(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_647(Global_1898330[iVar61]);
				}
				else
				{
					func_1266(iVar61, 0);
					if (func_104(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_103(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_103(((*Global_1347702)[&Global_40.f_450[iVar63] /*49*/])->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_0x51EC204A6E5B5A1A(func_103(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}

bool func_729(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_730(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_731(var uParam0)
{
	if (func_729(uParam0, 1))
	{
		func_1267(1);
	}
}

int func_732(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_733(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_734(int iParam0)
{
	struct<5> Var0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_878(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_735(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1268(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_736(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1269(iParam0);
	}
	else
	{
		func_1270(iParam0, iParam1);
	}
	func_1271();
}

void func_737(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_1272(iParam0, iParam1, bParam2);
}

bool func_738()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_739(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		uVar0 = func_410(0);
		MISC::SET_BIT(&uVar0, iParam0);
		func_411(0, uVar0);
	}
}

void func_740(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[uParam0->f_174 /*49*/])->f_21))
	{
		return;
	}
	if (ITEMSET::IS_IN_ITEMSET(iParam1, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_21))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam1, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_21);
	}
}

int func_741(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return 1;
		
		case 3:
			return 1;
		
		case 1:
			return 1;
		
		case 19:
			return 1;
		
		case 4:
			return 1;
		
		case 12:
			return 0;
		
		case 2:
			return 0;
		
		case 0:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
			break;
	}
	if (func_1273(iParam0, iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

void func_742(int iParam0)
{
	STREAMING::REMOVE_ANIM_DICT(func_1274(iParam0, 0));
	STREAMING::REMOVE_ANIM_DICT(func_1274(iParam0, 1));
	STREAMING::REMOVE_ANIM_DICT(func_1274(19, 0));
	STREAMING::REMOVE_ANIM_DICT(func_1274(43, 0));
	STREAMING::REMOVE_ANIM_DICT(func_1274(43, 1));
	STREAMING::REMOVE_ANIM_DICT("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER");
}

void func_743(var uParam0)
{
	func_383(uParam0->f_239);
}

void func_744(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_383(&(uParam0->f_234[iVar0]));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 11)
	{
		func_1275(uParam0->f_222[iVar1], 1);
		iVar1++;
	}
}

void func_745()
{
	func_739(6);
}

void func_746()
{
	func_739(8);
}

void func_747(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1276(iParam0) == 1 && iParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((iParam1 || bParam6) || func_203() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_748(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_1277(iParam0))
	{
		return;
	}
	iVar0 = func_1278(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_166(iVar0);
	func_1279(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_1280(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_1281(iVar0))
		{
			return;
		}
	}
	func_1282(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_203() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_749(var uParam0, int iParam1)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		STREAMING::REMOVE_NAMED_PTFX_ASSET(-458373790);
		func_796(&(uParam0->f_1), 4);
	}
}

void func_750(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			(Global_36580[iVar0 /*2*/])->f_1 = 3;
		}
		iVar0++;
	}
}

char* func_751(char* sParam0)
{
	return sParam0;
}

bool func_752(int iParam0)
{
	return func_468(iParam0, 16, 1);
}

void func_753(int iParam0, int iParam1, bool bParam2)
{
	if (!func_765(iParam0))
	{
		return;
	}
	func_1283(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_754(int iParam0)
{
	func_476(iParam0, 36, 1);
}

void func_755(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_765(iParam0))
		{
			return;
		}
	}
	func_830(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_756(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_433(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_433(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_433(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_433(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_433(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_433(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_433(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_433(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_757(int iParam0, bool bParam1)
{
	if (!func_387(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_1284(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_758(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_387(iParam0))
	{
		iVar1 = func_1072(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_1285(iParam0);
		}
	}
	if (func_469(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_1072(iParam0), 137, true);
	}
}

void func_759(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_765(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_755(iParam0, 50, 1);
		func_755(iParam0, 48, 1);
		func_755(iParam0, 49, 1);
		func_755(iParam0, 51, 1);
		func_755(iParam0, 52, 1);
		func_755(iParam0, 54, 1);
		func_755(iParam0, 55, 1);
	}
	else
	{
		func_476(iParam0, 50, 1);
		func_476(iParam0, 48, 1);
		func_476(iParam0, 49, 1);
		func_476(iParam0, 51, 1);
		if (bParam3)
		{
			func_476(iParam0, 54, 1);
		}
		else
		{
			func_755(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_476(iParam0, 52, 1);
			if (bParam3)
			{
				func_476(iParam0, 55, 1);
			}
		}
		else
		{
			func_755(iParam0, 52, 1);
			if (!bParam3)
			{
				func_755(iParam0, 55, 1);
			}
		}
	}
}

void func_760(int iParam0, bool bParam1)
{
	if (!func_765(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_1072(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_1072(iParam0), 204, false);
	}
}

void func_761(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_387(iParam0))
	{
		return;
	}
	if (func_752(iParam0))
	{
		if (!func_388(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_469(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_757(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_1072(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_1286(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_476(iParam0, 2, 1);
	}
	else
	{
		func_1287(iParam0);
		func_476(iParam0, 1, 1);
	}
}

void func_762(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_387(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_763(int iParam0)
{
	if (!func_387(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_764(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_765(iParam1))
	{
		return;
	}
	iVar0 = func_763(iParam1);
	if (func_1288(iParam1))
	{
		if (!func_1289(iParam1))
		{
			return;
		}
	}
	func_755(iParam1, 39, 1);
	func_1290(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_1290(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_1290(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_476(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1291(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_765(int iParam0)
{
	return iParam0 > -1;
}

bool func_766(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_767(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	if (func_242(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_1054(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_768(int iParam0)
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_769(int iParam0)
{
	if (iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_770(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_768(iParam0))
	{
		return false;
	}
	func_1292(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1935183->f_73[iParam0 /*7*/][iVar0], iVar1);
}

void func_771(int iParam0, var uParam1)
{
	if (!func_768(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1293(iParam0, *uParam1, 0);
	func_1294(uParam1);
	Global_1935183->f_24 = 1;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		
		case 59:
			return 6;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_773(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		
		case 115:
		case 116:
			return 3;
		
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_774(int iParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_775()
{
	float fVar0;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 112;
		
		case 2:
			return 113;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 8:
			return 7;
		
		case 9:
			return 8;
		
		case 10:
			return 9;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 15:
			return 12;
		
		case 16:
			return 13;
		
		case 17:
			return 15;
		
		case 19:
			return 17;
		
		case 20:
			return 18;
		
		case 21:
			return 19;
		
		case 22:
			return 20;
		
		case 23:
			return 21;
		
		case 25:
			return 23;
		
		case 26:
			return 25;
		
		case 27:
			return 26;
		
		case 28:
			return 62;
		
		case 29:
			return 27;
		
		case 49:
			return 28;
		
		case 30:
			return 29;
		
		case 31:
			return 30;
		
		case 32:
			return 31;
		
		case 120:
			return 32;
		
		case 124:
			return 33;
		
		case 125:
			return 34;
		
		case 33:
			return 35;
		
		case 83:
			return 40;
		
		case 35:
			return 42;
		
		case 36:
			return 43;
		
		case 89:
			return 44;
		
		case 115:
			return 46;
		
		case 37:
			return 47;
		
		case 38:
			return 48;
		
		case 39:
			return 49;
		
		case 40:
			return 50;
		
		case 50:
			return 51;
		
		case 42:
			return 52;
		
		case 52:
			return 53;
		
		case 43:
			return 54;
		
		case 45:
			return 57;
		
		case 48:
			return 61;
		
		case 56:
			return 63;
		
		case 57:
			return 64;
		
		case 58:
			return 65;
		
		case 59:
			return 66;
		
		case 60:
			return 67;
		
		case 61:
			return 68;
		
		case 126:
			return 69;
		
		case 127:
			return 70;
		
		case 62:
			return 71;
		
		case 77:
			return 72;
		
		case 64:
			return 73;
		
		case 65:
			return 74;
		
		case 67:
			return 76;
		
		case 68:
			return 78;
		
		case 69:
			return 79;
		
		case 70:
			return 80;
		
		case 71:
			return 81;
		
		case 72:
			return 82;
		
		case 75:
			return 84;
		
		case 76:
			return 85;
		
		case 117:
			return 86;
		
		case 78:
			return 87;
		
		case 79:
			return 88;
		
		case 80:
			return 90;
		
		case 81:
			return 91;
		
		case 82:
			return 92;
		
		case 87:
			return 96;
		
		case 88:
			return 97;
		
		case 91:
			return 98;
		
		case 92:
			return 99;
		
		case 93:
			return 100;
		
		case 94:
			return 101;
		
		case 95:
			return 102;
		
		case 96:
			return 103;
		
		case 97:
			return 104;
		
		case 98:
			return 105;
		
		case 99:
			return 106;
		
		case 100:
			return 107;
		
		case 104:
			return 114;
		
		case 105:
			return 115;
		
		case 107:
			return 118;
		
		case 109:
			return 119;
		
		case 110:
			return 120;
		
		case 111:
			return 121;
		
		case 112:
			return 122;
		
		case 128:
			return 123;
		
		default:
			break;
	}
	return 0;
}

void func_777(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_778(int iParam0)
{
	if (!func_55(iParam0))
	{
		return 0;
	}
	switch (func_104(iParam0))
	{
		case 1:
			switch (func_105(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		
		case 8:
			switch (func_105(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_779(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1295(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_1128(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1297(func_1296(iParam0), 6);
}

void func_780(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1295(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_1128(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1298(func_1296(iParam0), 6);
}

bool func_781(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_782(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_124(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_1299(iParam0, 64))
	{
		func_783(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_1126(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_1300(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_783(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1301(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_0x23F74C2FDA6E7C61(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_1302(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1299(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1303(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_1253(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1304(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1305(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1306(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_1307(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_1301(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			
			case 1:
				iVar22 = 13992470;
				break;
			
			case 2:
				iVar22 = 396341162;
				break;
			
			case 3:
				iVar22 = 623069873;
				break;
			
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			
			case 1:
				iVar22 = 489732756;
				break;
			
			case 2:
				iVar22 = 195204984;
				break;
			
			case 3:
				iVar22 = -103418913;
				break;
			
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_783(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

int func_784(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = func_1308(vParam0, 0f, 0f, 0, 2);
	return func_1308(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

void func_785(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_786(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1309(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return (Global_17503.f_1003[iVar0 /*6*/])->f_1;
	}
	return 0;
}

void func_787(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1310(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_1 = uParam2;
}

bool func_788(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_789(var uParam0)
{
	return uParam0->f_24;
}

void func_790(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_796(uParam0, 1);
	}
	else
	{
		func_795(uParam0, 1);
	}
}

void func_791(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_796(uParam0, 16);
	}
	else
	{
		func_795(uParam0, 67108864);
		func_795(uParam0, 16);
	}
}

void func_792(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_795(&(uParam0->f_1), 128);
	}
	else
	{
		func_796(&(uParam0->f_1), 128);
	}
}

void func_793(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_796(uParam0, 256);
	}
	else
	{
		func_795(uParam0, 256);
	}
}

void func_794(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_796(uParam0, 268435456);
	}
	else
	{
		func_795(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_796(uParam0, 1073741824);
	}
	else
	{
		func_795(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_796(uParam0, 536870912);
	}
	else
	{
		func_795(uParam0, 536870912);
	}
}

void func_795(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_796(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_797(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_798(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	
	fParam5 = func_1311(vParam1, fParam5);
	fVar0 = func_1312(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar0);
	}
}

void func_799(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar0 = (IntToFloat((MISC::GET_FRAME_COUNT() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_796(&(uParam0->f_1), 16);
		func_798(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_1311(vParam1, fParam5);
		fVar1 = func_1312(fParam5, iParam4);
		uVar3 = func_1313(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_1313(0f, fVar1, fVar0);
	}
	GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uVar3);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar2);
}

var func_800(float fParam0)
{
	var uVar0;
	
	uVar0 = func_1314(fParam0);
	return uVar0;
}

float func_801(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		
		case 2:
			return 1000f;
		
		default:
			break;
	}
	return 300f;
}

var func_802(float fParam0)
{
	var uVar0;
	
	uVar0 = func_1314(fParam0);
	return uVar0;
}

float func_803(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		
		case 1:
			return 40f;
		
		case 3:
			return 200f;
		
		case 4:
			return 180f;
		
		case 2:
			return 150f;
		
		default:
			break;
	}
	return 128f;
}

float func_804(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		
		case 3:
			return 0.8f;
		
		case 4:
			return 0.5f;
		
		case 0:
			return 0.6f;
		
		case 2:
			return 0.9f;
		
		default:
			break;
	}
	return 1f;
}

float func_805(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { func_1315(0) };
	vVar3 = { func_978(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_806(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

int func_807(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_808(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_809(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_810(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar0 /*49*/])->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_811(var uParam0)
{
	if (!func_781(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_812(&(uParam0->f_1), 1);
	}
}

void func_812(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_813(var uParam0)
{
	if (!func_781(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
				break;
			
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
			
			default:
				break;
		}
		func_812(&(uParam0->f_3), 1);
	}
}

void func_814(var uParam0)
{
	if (!func_781(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_812(&(uParam0->f_1), 1);
	}
}

void func_815(var uParam0)
{
	if (!func_781(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_CLIP_SET(*uParam0);
		func_812(&(uParam0->f_1), 1);
	}
}

int func_816(int iParam0)
{
	if (PED::_0x5C16855277819BBF() >= iParam0)
	{
		return 1;
	}
	return 0;
}

int func_817(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_818()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_819(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_820(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_1316(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_818())
	{
		return -1;
	}
	uVar0 = func_819(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_736(iVar1, 0);
	func_876(iVar1, 0);
	func_1317(iVar1, 0);
	func_822(iVar1, 0);
	func_1318(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_1319(iVar1, iParam4);
	}
	return iVar1;
}

int func_821(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_4;
	}
	return 0;
}

void func_822(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

int func_823(int iParam0)
{
	if (!func_55(iParam0))
	{
		return -15;
	}
	return func_1320(iParam0);
}

bool func_824(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1222(iParam1) || !func_1222(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_825(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case 987244216:
						iVar1 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
						if (func_29(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
							if (func_809(iVar2) && !func_1321(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_826(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_1322(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_827(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1368127279:
			return 3;
		
		case -1324765740:
			return 4;
		
		case -1119640448:
			return 6;
		
		case -1015925347:
			return 8;
		
		case -857562377:
			return 7;
		
		case -579939614:
			return 10;
		
		case -193557170:
			return 9;
		
		case 0:
			return 13;
		
		case 15:
			return 14;
		
		case 54488187:
			return 2;
		
		case 100010212:
			return 11;
		
		case 679418883:
			return 0;
		
		case 880414984:
			return 12;
		
		case 1077154516:
			return 1;
		
		case 1620037762:
			return 5;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_828(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1721991356:
			return 2;
		
		case -1439599467:
			return 23;
		
		case -1317052143:
			return 12;
		
		case -1233681761:
			return 19;
		
		case -1148613331:
			return 9;
		
		case -702816767:
			return 3;
		
		case -416908843:
			return 13;
		
		case -273223690:
			return 15;
		
		case -173507739:
			return 6;
		
		case 0:
			return 22;
		
		case 212278652:
			return 14;
		
		case 433385945:
			return 10;
		
		case 603685163:
			return 17;
		
		case 669657108:
			return 0;
		
		case 725623432:
			return 21;
		
		case 821931868:
			return 1;
		
		case 839715153:
			return 7;
		
		case 1420204096:
			return 11;
		
		case 1500834021:
			return 8;
		
		case 1632247697:
			return 18;
		
		case 1679686673:
			return 16;
		
		case 1974067816:
			return 5;
		
		case 2082228755:
			return 20;
		
		case 2137137442:
			return 4;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_829(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_830(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_831()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0;
}

int func_832(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_1323(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_1324(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_1325(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_1326(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_1327(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_1328(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_467(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_1325(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_1329(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_1330(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_1325(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_1331(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_1325(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_1332(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_1332(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_1325(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_1333(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_1334(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_1335(uParam2, 4000))
				{
					if ((func_1336(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_1337(uParam2, iParam0)) && func_1338(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_1325(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_1336(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_1337(uParam2, iParam0)) && func_1338(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_1339(iParam0, Global_1935630->f_41))
							{
								func_1340();
								*uParam3 = 2;
								func_1325(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_1339(iParam0, Global_1935630->f_41))
						{
							func_1340();
							*uParam3 = 2;
							func_1325(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_1341(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_259() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_1340();
						*uParam3 = 2;
						func_1325(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_1342())
					{
						if (func_1339(iParam0, Global_1935630->f_42))
						{
							func_1340();
							*uParam3 = 2;
							func_1325(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_1343(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_1325(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_1344(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_1345(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_1325(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_1346(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_1347(uParam2, 4000))
				{
					if (func_1348(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_1325(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_1349(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_1325(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_1350(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_1325(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_833(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_1351(iParam0, vVar0, fParam2);
}

bool func_834(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_835(var uParam0, var uParam1)
{
	char* sVar0;
	
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, sVar0);
}

int func_836(var uParam0, var uParam1, bool bParam2)
{
	MISC::SET_BIT(&(uParam0->f_8), 4);
	uParam0->f_15[4] = uParam1;
	if (func_1352(uParam0, uParam1))
	{
		return func_906(uParam0, uParam1);
	}
	else
	{
		func_1353(uParam0, 4, 0);
		return 0;
	}
	if (bParam2)
	{
		func_837(uParam0, 4, 1);
	}
	return 1;
}

void func_837(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_549(uParam0, 0, 0, 0))
	{
		return;
	}
	if (iParam1 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (iVar0 != iParam1)
			{
				func_1353(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			func_1353(uParam0, iVar0, 0);
			iVar0++;
		}
	}
}

void func_838(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_1354(iParam0, 13))
	{
		func_1355(iParam0, 0);
	}
	else
	{
		func_1356(iParam0, 0);
	}
	if (func_1357(iParam0->f_6))
	{
		if (bParam2)
		{
			func_1358(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_839(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_840(int iParam0)
{
	if (!func_1359(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_841(int iParam0)
{
	if (func_1359(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_842(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_843(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	func_747(iParam0, iParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

float func_844()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 0;
	}
	return 1;
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_847(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_848()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_849()
{
	return Global_1894899 & 2 != 0;
}

int func_850(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (!bParam1 && func_1360(iParam0, uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_851(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_1361(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return 0;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return 1;
	}
	return 0;
}

bool func_852(int iParam0)
{
	return func_1321(iParam0);
}

bool func_853(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

int func_854(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!bParam1 && func_487(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

float func_855(int iParam0)
{
	return (((*Global_1347702)[iParam0 /*49*/])->f_18 / 2f);
}

int func_856()
{
	int iVar0;
	
	if (func_1362())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_857(bool bParam0)
{
	if (func_1363())
	{
		return 0;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return 0;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_856())
		{
			return 0;
		}
	}
	if (Global_16)
	{
		return 0;
	}
	if (!func_984())
	{
		return 0;
	}
	if (MISC::_0xF236C84C6ADFCB2F())
	{
		return 0;
	}
	if (func_1364())
	{
		return 0;
	}
	return 1;
}

bool func_858(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

struct<8> func_859(var uParam0)
{
	return uParam0->f_358;
}

struct<8> func_860(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;
	
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<4> func_861(var uParam0)
{
	return uParam0->f_344;
}

char* func_862(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_1365(iVar0);
}

void func_863(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1366(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1366(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1367(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1368(8);
}

struct<8> func_864()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

char* func_865()
{
	return "unnamed";
}

void func_866(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, bParam2, iVar0);
}

void func_867(var uParam0)
{
	int iVar0;
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1013(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1369(uParam0->f_13[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

void func_868(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1013(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (func_1013(uParam0->f_13[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1370(uParam0, &((uParam0->f_13[iVar0 /*12*/])->f_1), &(uParam0->f_13[iVar0 /*12*/]), (uParam0->f_13[iVar0 /*12*/])->f_9);
				if (iParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !func_1013(uParam0->f_13[iVar0 /*12*/], 16))
					{
						func_1371(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_869(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_870(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_776, iVar0, func_1372(iVar0));
		iVar0++;
	}
}

void func_871(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_872(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_873(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1373(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_874(int iParam0)
{
	switch (iParam0)
	{
		case -1398443261:
		case -1297016068:
		case -1134756023:
		case -900222268:
		case -592887111:
		case -26529079:
		case 264503396:
		case 286955722:
		case 462409959:
		case 501744437:
		case 953896601:
		case 958101616:
		case 1594496117:
		case 1912073755:
		case 1960786232:
		case 1976314726:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_875(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_876(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_877(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	if (iParam0 == -1 || iParam0 == 0)
	{
		*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1 /*5*/] = iParam0;
		(Global_1898164->f_1[iParam1 /*5*/])->f_1 = func_313(iParam0);
		func_1374((Global_1898164->f_1[iParam1 /*5*/])->f_1, &((Global_1898164->f_1[iParam1 /*5*/])->f_3), &((Global_1898164->f_1[iParam1 /*5*/])->f_4), &((Global_1898164->f_1[iParam1 /*5*/])->f_2));
	}
}

void func_878(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1375((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1375(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_55(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_368(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_879(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if ((Global_1914319->f_15936[iVar0 /*6*/])->f_5)
		{
			(Global_1914319->f_15936[iVar0 /*6*/])->f_5 = 0;
		}
		func_1376(Global_1914319->f_15936[iVar0 /*6*/], bParam0);
		iVar0++;
	}
}

void func_880(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1376(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_881(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1376(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_882(bool bParam0)
{
	func_1376(Global_1956612, bParam0);
}

void func_883(bool bParam0)
{
	func_1376(&(Global_1415412->f_3), bParam0);
}

void func_884(bool bParam0)
{
	if (func_485(Global_1934051->f_33))
	{
		func_1377(Global_1934051->f_33, 7148155);
	}
	func_1376(&(Global_1934051->f_33), bParam0);
}

void func_885(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1379(func_1378(iVar0));
		if (iVar1 != 0)
		{
			func_1377(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (((*Global_1934051)[iVar0 /*2*/])->f_1)
		{
			((*Global_1934051)[iVar0 /*2*/])->f_1 = 0;
		}
		func_1376((*Global_1934051)[iVar0 /*2*/], bParam0);
		iVar0++;
	}
}

void func_886(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		func_1380(iVar0, -1);
		func_1381(iVar0, 0);
		func_1382(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
			}
			MAP::REMOVE_BLIP(Global_36307[iVar0]);
		}
		iVar0++;
	}
}

void func_887(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

void func_888()
{
	func_1383();
	func_1384();
	func_1385();
}

void func_889(var uParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_890(var uParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

bool func_891(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_892(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_1209(bParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1386((375 + iVar28), 1);
			if (func_1387(bParam0, &Var0, iVar5, 0))
			{
				if (func_1388(bParam0, &Var6, iVar5))
				{
					Var29 = { func_1389(bParam0, Var0, iVar5, 0) };
					func_1390(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1131(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_1132(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_1391(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_893(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		
		case 363815774:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		
		case -1090280091:
		case -1076294934:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_894(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

void func_895(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_1392(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1393(1, bVar1, 1, sVar2);
		func_1394(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1395(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_888();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1395(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1395(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

int func_896()
{
	float fVar0;
	
	fVar0 = BUILTIN::VDIST(func_186(&Local_554), Global_36);
	if (fVar0 > 300f)
	{
		return 0;
	}
	else if (fVar0 > 250f)
	{
		return 1;
	}
	else if (fVar0 > 200f)
	{
		return 2;
	}
	return 3;
}

void func_897()
{
	switch (iLocal_934)
	{
		case 0:
			if (func_505(Global_35, func_186(&Local_554), 1) > 200f || (((func_505(Global_35, func_186(&Local_554), 1) > 50f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_14.f_7, true, false), 5f)) && iLocal_551 == 3) && !func_197(131072)))
			{
				PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_85);
				PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_85, 16);
				PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_86);
				PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_86, 16);
				MISC::CLEAR_AREA(func_186(&Local_554), 20f, 2097152);
				Local_14.f_85 = 0;
				Local_14.f_86 = 0;
				iLocal_934++;
			}
			break;
		
		case 1:
			if (func_1396(-1535066799, 1))
			{
				iLocal_934++;
			}
			break;
		
		case 2:
			if (func_1397(&(Local_14.f_85), func_186(&Local_554), func_187(&Local_554), -1535066799))
			{
				iLocal_934++;
			}
			break;
		
		case 3:
			if (func_1398(&Local_14, func_186(&Local_554), func_187(&Local_554)))
			{
				iLocal_934++;
			}
			break;
		
		case 4:
			if (func_1396(1592899946, 1))
			{
				Local_14.f_86 = PROPSET::_CREATE_PROPSET_3(1592899946, 0f, 0f, 0f, Local_14.f_434.f_6, 0f, false, 1, false);
				iLocal_934++;
			}
			break;
	}
}

int func_898(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
				case 2:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 4:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 3:
			return 1;
	}
	return 0;
}

int func_899(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (PED::_0x5C16855277819BBF() >= 2)
			{
				func_192(&(Local_14.f_20), 9);
				func_1399(&Local_797);
			}
			else
			{
				PED::_0xED9582B3DA8F02B4(2);
				return 0;
			}
			break;
		
		case 3:
			STREAMING::REQUEST_MODEL(func_1400(Local_14.f_240), false);
			break;
		
		case 4:
			func_1401(&(Local_14.f_434), 9, 0, 1);
			break;
		
		case 5:
			break;
		
		case 7:
			break;
		
		case 6:
			if (!func_1404(&Local_776, "script@beat@wilderness@herbalistCamp@leadin@rc1@Leadin_ILO", 229705/*func_1402*/, 229881/*func_1403*/, 2, 64, 0, 0, 0))
			{
			}
			break;
		
		case 8:
			return STREAMING::_0x19A6BE7D9C6884D3(2054734837, 19, Local_14.f_20.f_1, -1904017806);
	}
	return 1;
}

int func_900(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_931, iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
			if (!func_1405(&(Local_14.f_20)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (!func_1396(-1535066799, 1))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_1406(Local_14))
			{
				return 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_1400(Local_14.f_240)))
			{
				return 0;
			}
			break;
		
		case 4:
			if (!func_1407(&(Local_14.f_434)))
			{
				return 0;
			}
			break;
		
		case 5:
			if (!func_1396(-1535066799, 2))
			{
				return 0;
			}
			break;
		
		case 7:
			if (!func_1408(Local_14))
			{
				return 0;
			}
			if (!func_1409(Local_14, &uLocal_552, &(Local_14.f_112), &(Local_14.f_133), &(Local_14.f_154), &(Local_14.f_175)))
			{
				return 0;
			}
			break;
		
		case 6:
			if (!func_1410(&Local_776))
			{
				return 0;
			}
			break;
		
		case 8:
			if (!STREAMING::_0x9427C94D2E4094A4(2054734837, 0))
			{
				return 0;
			}
			break;
	}
	MISC::SET_BIT(&iLocal_931, iParam0);
	return 1;
}

int func_901(var uParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(iLocal_932, iParam1))
	{
		if (Local_14.f_532 == 0)
		{
			Local_14.f_532 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(555.9357f, 173.0989f, 133.3503f, 0f, 0f, -51.99086f, 1.8f, 2.943975f, 2.410691f, "m_volHerbReturn");
		}
		if (Local_14.f_533 == 0)
		{
			Local_14.f_533 = VOLUME::_0x0EB78C2B156635B1(665633627, 558.1541f, 170.2181f, 133.3503f, 0f, 0f, 0f, 1.033522f, 1.130385f, 1.487637f);
		}
		return 1;
	}
	if ((func_197(131072) || func_183()) || !func_1411())
	{
		switch (iParam1)
		{
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
				{
					if (!iLocal_936)
					{
						Local_14.f_7 = func_1412(&(Local_14.f_20), func_186(&Local_554), func_187(&Local_554));
						iLocal_936 = 1;
						func_1413(uParam0, Local_14.f_7);
					}
				}
				else if (PED::_0xA0BC8FAED8CFEB3C(Local_14.f_7))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_7, true);
					func_1414(Local_14.f_7, "HERBALIST", 0);
					func_1415();
					func_1416(Local_14.f_7, &Local_797);
					MISC::SET_BIT(&iLocal_932, iParam1);
					return 1;
				}
				break;
			
			case 2:
				if (func_1397(&(Local_14.f_85), func_186(&Local_554), func_187(&Local_554), -1535066799))
				{
					MISC::SET_BIT(&iLocal_932, iParam1);
					return 1;
				}
				else if (!ENTITY::_0x6BFBDC46139C45AB(func_186(&Local_554)))
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(func_186(&Local_554));
				}
				break;
			
			case 3:
				if (MISC::IS_BIT_SET(iLocal_932, 2))
				{
					if (func_1417())
					{
						func_1418(&(Local_14.f_90), Local_14, func_186(&Local_554), func_187(&Local_554), &(Local_14.f_90[2]), func_197(131072));
						Local_14.f_242 = OBJECT::CREATE_OBJECT(func_1400(Local_14.f_240), func_186(&Local_554), true, true, false, false, true);
						ENTITY::SET_ENTITY_VISIBLE(Local_14.f_242, false);
						ENTITY::SET_ENTITY_INVINCIBLE(&(Local_14.f_90[3]), true);
						MISC::SET_BIT(&iLocal_932, iParam1);
						if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[3])))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[17])))
						{
							ENTITY::SET_ENTITY_VISIBLE(&(Local_14.f_90[17]), false);
							ENTITY::SET_ENTITY_COLLISION(&(Local_14.f_90[17]), false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[4])))
						{
							func_1419(&(Local_14.f_90[4]), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[0])))
						{
							ENTITY::FREEZE_ENTITY_POSITION(&(Local_14.f_90[0]), true);
							ENTITY::SET_ENTITY_COLLISION(&(Local_14.f_90[0]), false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[18])))
						{
							ENTITY::SET_ENTITY_COLLISION(&(Local_14.f_90[18]), false, false);
						}
						return 1;
					}
					else
					{
						func_1420(&(Local_14.f_90), 43, Local_14.f_85);
					}
				}
				break;
			
			case 4:
				if (!iLocal_936)
				{
					func_1421(&(Local_14.f_434), Local_14.f_7, 1);
					if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_86))
					{
						ENTITY::_0x9587913B9E772D29(Local_14.f_434.f_6, 1);
					}
					iLocal_936 = 1;
					MISC::SET_BIT(&iLocal_932, iParam1);
					return 1;
				}
				break;
			
			case 5:
				if (MISC::IS_BIT_SET(iLocal_932, 4))
				{
					Local_14.f_86 = PROPSET::_CREATE_PROPSET_3(1592899946, 0f, 0f, 0f, Local_14.f_434.f_6, 0f, false, 1, false);
					MISC::SET_BIT(&iLocal_932, iParam1);
					return 1;
				}
				break;
			
			case 8:
				if (MISC::IS_BIT_SET(iLocal_932, 3))
				{
					if (func_1398(&Local_14, func_186(&Local_554), func_187(&Local_554)))
					{
						ENTITY::SET_CAN_CLIMB_ON_ENTITY(&(Local_14.f_90[2]), false);
						func_307();
						MISC::SET_BIT(&iLocal_932, iParam1);
						return 1;
					}
					else if (!func_1422(2))
					{
						func_1420(&(Local_14.f_90), 43, Local_14.f_85);
					}
				}
				break;
			
			case 9:
				func_1423(&Local_14, &Local_554, 1109393408, 1101004800);
				func_1424(&Local_14, &Local_554);
				func_1425(&Local_14, &Local_554);
				MISC::SET_BIT(&iLocal_932, iParam1);
				return 1;
			
			default:
				MISC::SET_BIT(&iLocal_932, iParam1);
				return 1;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
				{
					if (!iLocal_936)
					{
						if (PED::GET_CLOSEST_PED(func_186(&Local_554), 20f, 1, 1, &(Local_14.f_7), 0, 1, 1, 28))
						{
							iLocal_936 = 1;
							func_1413(uParam0, Local_14.f_7);
						}
					}
				}
				else if (PED::_0xA0BC8FAED8CFEB3C(Local_14.f_7))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_7, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14.f_7, true, true);
					func_1414(Local_14.f_7, "HERBALIST", 0);
					func_1416(Local_14.f_7, &Local_797);
					MISC::SET_BIT(&iLocal_932, iParam1);
					return 1;
				}
				break;
			
			case 2:
				if (Local_14.f_85 == 0)
				{
					Local_14.f_85 = PROPSET::_0xC061E50F8D299F95(-1535066799, func_186(&Local_554));
				}
				else
				{
					MISC::SET_BIT(&iLocal_932, iParam1);
					return 1;
				}
				break;
			
			case 3:
				if (MISC::IS_BIT_SET(iLocal_932, 2))
				{
					func_1418(&(Local_14.f_90), Local_14, func_186(&Local_554), func_187(&Local_554), &(Local_14.f_90[2]), func_197(131072));
					Local_14.f_242 = OBJECT::CREATE_OBJECT(func_1400(Local_14.f_240), func_186(&Local_554), true, true, false, false, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_14.f_242, false);
					ENTITY::SET_ENTITY_INVINCIBLE(&(Local_14.f_90[3]), true);
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[17])))
					{
						ENTITY::SET_ENTITY_VISIBLE(&(Local_14.f_90[17]), false);
						ENTITY::SET_ENTITY_COLLISION(&(Local_14.f_90[17]), false, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[4])))
					{
						func_1419(&(Local_14.f_90[4]), 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[0])))
					{
						ENTITY::FREEZE_ENTITY_POSITION(&(Local_14.f_90[0]), true);
						ENTITY::SET_ENTITY_COLLISION(&(Local_14.f_90[0]), false, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[18])))
					{
						ENTITY::SET_ENTITY_COLLISION(&(Local_14.f_90[18]), false, false);
					}
					MISC::SET_BIT(&iLocal_932, iParam1);
					return 1;
				}
				break;
			
			case 4:
				if (!iLocal_936)
				{
					func_1421(&(Local_14.f_434), Local_14.f_7, 0);
					if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_86))
					{
						ENTITY::_0x9587913B9E772D29(Local_14.f_434.f_6, 1);
					}
					if (PED::GET_CLOSEST_PED(567.0706f, 174.5801f, 134.2049f, 4f, 1, 1, &(Local_14.f_434.f_5), 0, 1, 1, -1))
					{
						iLocal_936 = 1;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14.f_434.f_5, true, true);
						MISC::SET_BIT(&iLocal_932, iParam1);
					}
					return 1;
				}
				break;
			
			case 5:
				if (MISC::IS_BIT_SET(iLocal_932, 4))
				{
					Local_14.f_86 = PROPSET::_CREATE_PROPSET_3(1592899946, 0f, 0f, 0f, Local_14.f_434.f_6, 0f, false, 1, false);
					MISC::SET_BIT(&iLocal_932, iParam1);
					return 1;
				}
				break;
			
			case 8:
				if (MISC::IS_BIT_SET(iLocal_932, 3))
				{
					if (func_1398(&Local_14, func_186(&Local_554), func_187(&Local_554)))
					{
						ENTITY::SET_CAN_CLIMB_ON_ENTITY(&(Local_14.f_90[2]), false);
						if (func_193())
						{
							func_384(1);
						}
						else
						{
							func_307();
						}
						MISC::SET_BIT(&iLocal_932, iParam1);
						return 1;
					}
					else if (!func_1422(2))
					{
						func_1420(&(Local_14.f_90), 43, Local_14.f_85);
					}
				}
				break;
			
			case 9:
				func_1423(&Local_14, &Local_554, 1109393408, 1101004800);
				func_1424(&Local_14, &Local_554);
				func_1425(&Local_14, &Local_554);
				MISC::SET_BIT(&iLocal_932, iParam1);
				return 1;
			
			default:
				MISC::SET_BIT(&iLocal_932, iParam1);
				return 1;
		}
	}
	return 0;
}

void func_902(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
		case 2:
			if (func_197(131072))
			{
				func_1415();
			}
			break;
		
		case 3:
			switch (func_284())
			{
				case 0:
					func_1426();
					break;
				
				case 2:
					func_307();
					func_1427(&Local_14, 0, 494354620, 0, 1, 1, 0);
					break;
				
				case 3:
					func_307();
					func_1427(&Local_14, 0, 494354620, 0, 1, 1, 0);
					break;
				
				case 4:
					func_307();
					TASK::TASK_WANDER_IN_AREA(Local_14.f_7, func_186(&Local_554), 5f, 1077936128, 1086324736, 1);
					break;
			}
			func_1428(&Local_14);
			break;
	}
	func_1414(Local_14.f_7, "HERBALIST", 0);
}

void func_903()
{
	func_181(10);
}

bool func_904(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return false;
	}
	return ((!bParam2 || func_549(uParam0, 0, 0, 0)) && MISC::IS_BIT_SET(uParam0->f_8, iParam1));
}

bool func_905(var uParam0, int iParam1)
{
	return func_835(uParam0, &(uParam0->f_15[iParam1]));
}

bool func_906(var uParam0, var uParam1)
{
	char* sVar0;
	
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, sVar0);
}

bool func_907(var uParam0, int iParam1)
{
	return func_1429(uParam0, &(uParam0->f_15[iParam1]));
}

bool func_908(int iParam0, int iParam1)
{
	return (func_1430(iParam0) || (ANIMSCENE::_0x49F1D143ADE32656(iParam0) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0)) <= (BUILTIN::TO_FLOAT(iParam1) * 0.001f));
}

void func_909(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = &uParam0->f_15[iParam1];
	Stack.Push(uParam0->f_1);
	Stack.Push(uVar0);
	Call_Loc(uParam0->f_6);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(StackVal, StackVal, true);
	func_1353(uParam0, iParam1, 0);
	uParam0->f_2 = uVar0;
	Stack.Push(uVar0);
	Call_Loc(uParam0->f_5);
}

bool func_910(int iParam0, float fParam1, float fParam2)
{
	return (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0) >= fParam1 && ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0) <= fParam2);
}

void func_911(var uParam0, var uParam1)
{
	uParam0->f_530 = 0;
	if (func_1431(uParam0->f_7, &(uParam0->f_243), &(uParam0->f_530), 0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, uParam0->f_7))
	{
		func_176(uParam0, 49);
	}
	else
	{
		func_913(uParam0, 49);
	}
	if (!uParam1->f_46)
	{
		if (func_1432(uParam0, &(uParam1->f_5)))
		{
			if (func_916(uParam0->f_215, 1, 1))
			{
				func_917(&(uParam0->f_215), 1);
			}
			func_46();
			func_913(uParam0, 13);
			func_914(uParam0, 262144);
			func_913(uParam0, 67);
			func_915(uParam0);
			func_913(uParam0, 62);
			if (!uParam0->f_221)
			{
				uParam1->f_46 = 1;
				func_922(uParam0, 0);
			}
		}
		else if (uParam0->f_521)
		{
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_7, 0))
			{
				PED::SET_PED_CAPSULE(uParam0->f_7, 0f);
			}
			else
			{
				uParam0->f_521 = 0;
			}
		}
	}
	PED::SET_PED_CAPSULE(uParam0->f_7, 0f);
	if (func_282(uParam0, 26) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		if (func_1433(Global_35, 0, 1, 0) != joaat("weapon_unarmed") && !WEAPON::_0x959383DCD42040DA(func_1433(Global_35, 0, 1, 0)))
		{
			func_913(uParam0, 26);
			func_1434(uParam0, 3);
			func_945(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
		}
	}
	func_1436(uParam0->f_7, 0, 0, (func_282(uParam0, 35) || func_1435()), func_282(uParam0, 32));
	if (uParam0->f_1 > 0)
	{
		func_958(uParam0->f_284.f_21[2 /*17*/]);
		uParam0->f_433 = func_959(&(uParam0->f_284), &(uParam0->f_7), func_282(uParam0, 21));
		if (!func_282(uParam0, 24))
		{
			switch (uParam0->f_433)
			{
				case 1:
					if (func_282(uParam0, 62))
					{
						func_176(uParam0, 60);
						func_176(uParam0, 38);
						func_913(uParam0, 67);
						func_960(&(uParam0->f_284), 0);
						uParam0->f_197 = 1;
						uParam0->f_198 = 3;
					}
					break;
				
				case 2:
					func_176(uParam0, 24);
					func_960(&(uParam0->f_284), 0);
					func_945(Global_35, uParam0->f_7, "RE_HEC_UNI_V1_VALUABLE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_915(uParam0);
					func_922(uParam0, 0);
					uParam0->f_1 = 7;
					break;
			}
		}
	}
	func_1437(uParam0, uParam1);
}

void func_912(var uParam0, var uParam1)
{
	if (func_1438(uParam0, 1))
	{
		func_1439(uParam0->f_7);
		if (!func_282(uParam0, 47))
		{
			func_958(uParam0->f_284.f_21[2 /*17*/]);
			if (!func_282(uParam0, 62))
			{
				func_958(uParam0->f_284.f_21[1 /*17*/]);
			}
			if (!func_282(uParam0, 63))
			{
				func_958(uParam0->f_284.f_21[0 /*17*/]);
			}
		}
		if (uParam0->f_433 == 0)
		{
			func_960(&(uParam0->f_284), 0);
			func_176(uParam0, 50);
			func_913(uParam0, 63);
			func_945(Global_35, uParam0->f_7, "RE_HEC_UNI_V1_DEFUSE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			if (func_282(uParam0, 62))
			{
				func_475(&(uParam0->f_284), 1, 1);
			}
			if (func_73(&(uParam0->f_496)))
			{
				func_228(&(uParam0->f_496));
			}
			func_176(uParam0, 64);
		}
		else if (func_282(uParam0, 64))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			{
				return;
			}
		}
		switch (uParam0->f_522)
		{
			case 0:
				if (func_1440(uParam0, uParam1, uParam0->f_523))
				{
					func_1441(uParam0, uParam0->f_523);
					uParam0->f_522 = 1;
				}
				break;
			
			case 1:
				if (func_1442(uParam0, uParam1, uParam0->f_523))
				{
					uParam0->f_529 = func_1444(uParam0->f_523, func_1443(uParam0, uParam0->f_523));
					uParam0->f_522 = 2;
				}
				break;
			
			case 2:
				if (func_1445(uParam0, uParam1, uParam0->f_523))
				{
					func_257(&(uParam0->f_496));
					uParam0->f_522 = 3;
				}
				break;
			
			case 3:
				if (!func_73(&(uParam0->f_496)))
				{
					func_257(&(uParam0->f_496));
				}
				else if (func_955(&(uParam0->f_496), func_1446(uParam0->f_523)) || func_1447(uParam0))
				{
					if (func_1448(uParam0, uParam0->f_523))
					{
						if (!func_944(uParam0->f_7, 1))
						{
							uParam0->f_529 = func_1444(uParam0->f_523, func_1443(uParam0, uParam0->f_523));
							if (func_73(&(uParam0->f_496)))
							{
								func_228(&(uParam0->f_496));
							}
							if (func_73(&(uParam0->f_499)))
							{
								func_228(&(uParam0->f_499));
							}
							uParam0->f_519 = 0;
							uParam0->f_524 = 0;
							uParam0->f_522 = 2;
						}
					}
					else
					{
						uParam0->f_522 = 4;
					}
				}
				break;
			
			case 4:
				if (func_1448(uParam0, uParam0->f_523))
				{
					uParam0->f_529 = func_1444(uParam0->f_523, func_1443(uParam0, uParam0->f_523));
					if (func_73(&(uParam0->f_496)))
					{
						func_228(&(uParam0->f_496));
					}
					if (func_73(&(uParam0->f_499)))
					{
						func_228(&(uParam0->f_499));
					}
					if (!func_282(uParam0, 57))
					{
						if (func_1433(uParam0->f_7, 0, 1, 0) == -618550132)
						{
							func_176(uParam0, 57);
						}
					}
					uParam0->f_519 = 0;
					uParam0->f_524 = 0;
					uParam0->f_522 = 2;
				}
				else if (func_1447(uParam0) || func_1449(uParam0, uParam1, uParam0->f_523))
				{
					if (!func_282(uParam0, 57))
					{
						if (func_1433(uParam0->f_7, 0, 1, 0) == -618550132)
						{
							func_176(uParam0, 57);
						}
					}
					func_1450(uParam0);
					func_1451(uParam0);
					if (PED::IS_PED_USING_ACTION_MODE(uParam0->f_7))
					{
						PED::SET_PED_USING_ACTION_MODE(uParam0->f_7, false, -1, 0);
						PED::SET_PED_USING_ACTION_MODE(uParam0->f_7, true, 4000, 0);
					}
					uParam0->f_522 = 0;
				}
				break;
		}
	}
}

void func_913(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		MISC::CLEAR_BIT(&(iParam0->f_3), iParam1);
	}
	else if (iParam1 <= 63)
	{
		MISC::CLEAR_BIT(&(iParam0->f_4), (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		MISC::CLEAR_BIT(&(iParam0->f_5), (iParam1 - 64));
	}
}

void func_914(int iParam0, int iParam1)
{
	func_796(&(iParam0->f_473), iParam1);
}

void func_915(int iParam0)
{
	if (func_282(iParam0, 40))
	{
		func_913(iParam0, 40);
		func_119(Global_1935630, 4);
	}
}

int func_916(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::_0x92A78D0BEDB332A3(((*Global_1955500)[iParam0 /*16*/])->f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(((*Global_1955500)[iParam0 /*16*/])->f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_917(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if ((*Global_1955500)[*uParam0 /*16*/])->f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD()
		{
			if (func_1452(1, 1) == *uParam0)
			{
				func_1453(-1, 1, 1);
			}
			if (bParam1)
			{
				func_383(((*Global_1955500)[*uParam0 /*16*/])->f_1);
			}
			(*Global_1955500)[*uParam0 /*16*/] = 0;
			((*Global_1955500)[*uParam0 /*16*/])->f_2 = 0;
			((*Global_1955500)[*uParam0 /*16*/])->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

void func_918(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_338(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

int func_919(int iParam0, var uParam1, var uParam2)
{
	if (func_1435())
	{
		func_176(iParam0, 35);
	}
	func_1428(iParam0);
	func_1454(&(iParam0->f_284));
	if (func_282(iParam0, 1))
	{
		if (func_282(iParam0, 7))
		{
			TASK::TASK_WANDER_IN_AREA(iParam0->f_7, func_186(uParam1), 5f, 1077936128, 1086324736, 1);
			if (func_412(0))
			{
				func_176(iParam0, 12);
				func_176(iParam0, 15);
			}
			else
			{
				func_176(iParam0, 38);
				func_176(iParam0, 23);
			}
			func_176(iParam0, 46);
		}
		else if (func_282(iParam0, 6))
		{
			func_932(iParam0, 3, 1);
			func_176(iParam0, 12);
			func_176(iParam0, 15);
		}
		else if (func_282(iParam0, 5))
		{
			func_932(iParam0, 2, 1);
			func_176(iParam0, 12);
		}
		else
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
			func_932(iParam0, 1, 1);
		}
		func_1455(iParam0, 0);
	}
	else if (func_412(6))
	{
		TASK::TASK_WANDER_IN_AREA(iParam0->f_7, func_186(uParam1), 5f, 1077936128, 1086324736, 1);
	}
	else
	{
		func_932(iParam0, 0, 1);
	}
	if (func_282(iParam0, 5))
	{
		func_176(iParam0, 12);
		func_176(iParam0, 13);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_20.f_11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_20.f_11))
		{
			func_1456(uParam2, iParam0->f_7, iParam0->f_20.f_11, 0);
		}
	}
	return 1;
}

int func_920(vector3 vParam0, int iParam3, var uParam4)
{
	int iVar0;
	
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam0, 0f, 0f, 0f, 5f, 5f, 5f);
	*uParam4 = func_1457(iParam3, iVar0, 3076);
	func_1458(*uParam4, 256);
	return func_916(*uParam4, 1, 1);
}

int func_921(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_1416(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_922(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_176(iParam0, 42);
	}
	else
	{
		func_913(iParam0, 42);
	}
}

void func_923(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_1354(iParam0, 13))
		{
			if (bParam2)
			{
				func_838(iParam0, 0, 0);
			}
			func_1355(iParam0, 13);
		}
	}
	else if (func_1354(iParam0, 13))
	{
		func_1356(iParam0, 13);
	}
}

void func_924(var uParam0)
{
	func_1459(uParam0, 1);
	func_1460(uParam0, 1);
	func_1461(uParam0, 1);
}

void func_925(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_483 = iParam1;
	iParam0->f_484 = iParam2;
}

bool func_926()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_1462(43))
	{
		iVar0++;
	}
	if (func_1462(18))
	{
		iVar0++;
	}
	if (func_1462(40))
	{
		iVar0++;
	}
	if (func_1462(19))
	{
		iVar0++;
	}
	return iVar0 >= 3;
}

void func_927(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_6), iParam1);
}

void func_928(int iParam0, int iParam1)
{
	func_176(iParam0, 27);
	func_925(iParam0, 2, 1);
	func_1463(iParam0);
	func_228(&(iParam0->f_462));
	iParam0->f_205 = iParam1;
}

void func_929()
{
	func_181(9);
}

void func_930(int iParam0)
{
}

int func_931(int iParam0, var uParam1)
{
	float fVar0;
	
	if (PED::_0x569F1E1237508DEB(iParam0->f_7) == 2093245709)
	{
		if (!func_1464(iParam0, 2))
		{
			func_914(iParam0, 2);
		}
	}
	else if (func_1464(iParam0, 2))
	{
		func_935(iParam0, 2);
	}
	if (func_1465(uParam1, 1077936128, 1114636288, 20f, 1, 0, 1, 10f, 1, 1125515264, 0, 0) && uParam1->f_48)
	{
		fVar0 = func_553(Global_35, iParam0->f_7, 1, 1);
		if (fVar0 <= 80f)
		{
			if (!func_1464(iParam0, 16))
			{
				func_914(iParam0, 16);
			}
		}
		else if (func_1464(iParam0, 16))
		{
			func_935(iParam0, 16);
		}
		if (fVar0 <= 20f)
		{
			if (PED::_0x569F1E1237508DEB(iParam0->f_7) != 2093245709)
			{
				if (!func_1464(iParam0, 131072))
				{
					func_914(iParam0, 131072);
				}
				if (func_1466(iParam0, 0))
				{
					return 1;
				}
			}
		}
		else if (func_1464(iParam0, 131072))
		{
			func_935(iParam0, 131072);
		}
	}
	else if (func_1464(iParam0, 131072))
	{
		func_935(iParam0, 131072);
	}
	return 0;
}

void func_932(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_472 = iParam1;
	if (bParam2)
	{
		func_935(iParam0, 8);
		func_935(iParam0, 4);
		func_935(iParam0, 1);
		func_935(iParam0, 2);
		iParam0->f_473 = (iParam0->f_473 || func_1467(iParam1));
	}
	else
	{
		iParam0->f_473 = func_1467(iParam1);
	}
}

void func_933(int iParam0)
{
	if (func_279(Global_35, iParam0->f_7, 75f, 1))
	{
		if (func_1468(1f, 1, 0, 0))
		{
			func_1469(1715123483, iParam0->f_7, 1);
			func_945(iParam0->f_7, iParam0->f_7, "RE_HEC_UNI_V1_WHISTLE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

int func_934(int iParam0)
{
	switch (iParam0->f_196)
	{
		case 0:
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_7, false);
			if (func_282(iParam0, 1))
			{
				func_176(iParam0, 12);
				func_176(iParam0, 13);
				func_1470(iParam0->f_7, *iParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				iParam0->f_196 = 6;
			}
			else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
			{
				func_1470(iParam0->f_7, 19, "", "", "", "HEY_HELP_ME_AGAIN_UPPER", 0);
				BUILTIN::WAIT(10);
				iParam0->f_10.f_9 = "RE_HERB_HERBALIST";
				func_1471(&(iParam0->f_10), iParam0->f_7, &(iParam0->f_9), 0f, 0f, 0f, 1065353216, 1, 5);
				iParam0->f_196 = 1;
			}
			break;
		
		case 1:
			func_1472(&(iParam0->f_10), &(iParam0->f_9), 1);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_1274(19, 0), "HEY_HELP_ME_AGAIN_UPPER", 1))
			{
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					if (!func_1438(iParam0, 1))
					{
						TASK::TASK_PLAY_ANIM(iParam0->f_7, func_1274(43, 0), "WAIT_01_UPPER", 1090519040, -1056964608, -1, 67117072, 0, 0, 0, 0, 0, 0);
						iParam0->f_196 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_1274(43, 0), "WAIT_01_UPPER", 1))
			{
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					if (!func_1438(iParam0, 1))
					{
						func_257(&uLocal_0);
						func_1455(iParam0, 1);
						func_475(&(iParam0->f_284), 0, 1);
						func_1474(&(iParam0->f_284), 0, func_1473(4));
						if (!func_282(iParam0, 1))
						{
							func_475(&(iParam0->f_284), 1, 1);
							func_1474(&(iParam0->f_284), 1, func_1473(6));
						}
						else
						{
							func_475(&(iParam0->f_284), 1, 0);
						}
						switch (func_1475(119))
						{
							case 0:
								func_1476(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_01");
								func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_01");
								break;
							
							case 1:
								func_1476(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_02");
								func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_02");
								break;
							
							default:
								func_1476(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_03");
								func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_03");
								break;
						}
						func_1477(&(iParam0->f_284));
						iParam0->f_196 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (func_1438(iParam0, 1))
			{
				return 0;
			}
			switch (iParam0->f_433)
			{
				case 0:
					func_1455(iParam0, 0);
					func_1478(iParam0);
					func_176(iParam0, 12);
					func_176(iParam0, 13);
					func_1477(&(iParam0->f_284));
					iParam0->f_196 = 5;
					break;
				
				case 1:
					func_1455(iParam0, 0);
					func_1478(iParam0);
					func_1477(&(iParam0->f_284));
					iParam0->f_196 = 8;
					break;
				
				case -1:
					if (!func_1438(iParam0, 1))
					{
						if (func_1479(iParam0))
						{
							func_1455(iParam0, 0);
							func_913(iParam0, 13);
							func_176(iParam0, 23);
							func_1477(&(iParam0->f_284));
							iParam0->f_196 = 9;
						}
					}
					break;
			}
			break;
		
		case 5:
			if (!func_1438(iParam0, 1))
			{
				if (!func_944(Global_35, 1) && !func_1480(iParam0))
				{
					if (!func_412(5) && func_1481())
					{
						func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_ACCEPT_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iParam0->f_196 = 2;
					}
					else
					{
						func_1470(iParam0->f_7, *iParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
						iParam0->f_196 = 6;
					}
				}
			}
			break;
		
		case 2:
			if (!func_944(iParam0->f_7, 1))
			{
				func_1482(iParam0);
				func_1470(iParam0->f_7, *iParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				iParam0->f_196 = 6;
			}
			break;
		
		case 8:
			if (!func_1438(iParam0, 1))
			{
				if (!func_944(Global_35, 1) && !func_1480(iParam0))
				{
					if (!func_282(iParam0, 23))
					{
						TASK::TASK_PLAY_ANIM(iParam0->f_7, func_1274(19, 0), "NEGATIVE_UPPER", 1090519040, -1056964608, -1, 67117072, 0, 0, 0, 0, 0, 0);
					}
					iParam0->f_196 = 9;
				}
			}
			break;
		
		case 6:
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
			{
				if (func_1483(*iParam0) >= func_1484(*iParam0))
				{
					func_176(iParam0, 9);
				}
				else
				{
					func_918(func_1485(*iParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, func_1484(*iParam0), -1, 1);
				}
			}
			if (!func_1438(iParam0, 1))
			{
				if (!func_1486(iParam0->f_7, *iParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0, 1))
				{
					if (*iParam0 != 40 && *iParam0 != 43)
					{
						func_1470(iParam0->f_7, *iParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0);
					}
					func_1487(*iParam0, 0, 1);
					if (func_1488(iParam0))
					{
						func_176(iParam0, 66);
						return 1;
					}
					iParam0->f_196 = 7;
				}
			}
			break;
		
		case 7:
			if ((*iParam0 == 40 || !func_279(Global_35, iParam0->f_7, 20f, 1)) || !func_1486(iParam0->f_7, *iParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0, 1))
			{
				func_1489(iParam0);
				func_935(iParam0, 131072);
				func_1490(iParam0, 1f, 0);
				func_1427(iParam0, 0, -1904017806, 0, 0, 1, 3f);
				return 1;
			}
			break;
		
		case 9:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_1274(19, 0), "NEGATIVE_UPPER", 1))
			{
				func_319(&(iParam0->f_9));
				func_935(iParam0, 131072);
				func_1427(iParam0, 0, 494354620, 0, 0, 1, 0);
				iParam0->f_1 = 11;
			}
			break;
	}
	return 0;
}

void func_935(int iParam0, int iParam1)
{
	func_795(&(iParam0->f_473), iParam1);
}

void func_936(int iParam0)
{
	if (PED::_0x569F1E1237508DEB(iParam0->f_7) == -1904017806)
	{
		if (!func_1491(iParam0, 0, 1, 1))
		{
			iParam0->f_203 = 2;
		}
		else
		{
			iParam0->f_203 = 3;
		}
		func_1490(iParam0, 5f, 1);
	}
}

void func_937()
{
	func_739(11);
}

int func_938(int iParam0, var uParam1)
{
	switch (iParam0->f_197)
	{
		case 0:
			if (func_1488(iParam0))
			{
				func_176(iParam0, 9);
				if (!func_282(iParam0, 1))
				{
					if (!MAP::DOES_BLIP_EXIST(iParam0->f_9))
					{
						func_1492(iParam0->f_7, &(iParam0->f_9), -89429847, 580546400, 0, 0);
					}
				}
				if (!func_282(iParam0, 9))
				{
					func_1493(iParam0, func_1483(*iParam0), 1);
				}
				else if (!func_282(iParam0, 1))
				{
					func_918("HERB_DONE_EARLY", 7500, 0, 0, -1, -1, 0);
				}
				else
				{
					func_918("HERB_DONE_EARLY_RC", 7500, 0, 0, -1, -1, 0);
				}
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					MAP::_0x662D364ABF16DE2F(iParam0->f_9, -981020806);
				}
				func_1494(iParam0, 0);
				func_932(iParam0, 2, 1);
				iParam0->f_197 = 1;
			}
			else
			{
				func_1495(iParam0, 0);
				func_932(iParam0, 2, 1);
				iParam0->f_197 = 1;
			}
			func_257(&uLocal_0);
			break;
		
		case 1:
			if (func_1496(iParam0, uParam1))
			{
				func_913(iParam0, 13);
				func_1497(&(iParam0->f_112), &(iParam0->f_90[2]));
				func_1498(iParam0);
				func_1499(&(iParam0->f_112), *iParam0, iParam0->f_7, &(iParam0->f_90), 1);
				func_1500(&(iParam0->f_112));
				return 1;
			}
			break;
	}
	return 0;
}

int func_939(int iParam0)
{
	func_1439(iParam0->f_7);
	switch (iParam0->f_199)
	{
		case 0:
			if (!func_1438(iParam0, 1))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0->f_7, -1) || func_968(&(iParam0->f_112), "base02", 1))
				{
					if (*iParam0 == 19)
					{
						if (!func_944(iParam0->f_7, 1))
						{
							func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_SAGE_TIP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_932(iParam0, 4, 1);
							iParam0->f_199 = 1;
						}
					}
					else
					{
						func_932(iParam0, 4, 1);
						iParam0->f_199 = 1;
					}
				}
			}
			break;
		
		case 1:
			return !func_944(iParam0->f_7, 1);
	}
	return 0;
}

int func_940(int iParam0, var uParam1)
{
	struct<4> Var0;
	vector3 vVar4;
	
	func_1439(iParam0->f_7);
	func_1501(iParam0);
	switch (iParam0->f_200)
	{
		case 0:
			if (!func_1438(iParam0, 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
			{
				func_1502(iParam0);
				func_960(&(iParam0->f_284), 0);
				func_1477(&(iParam0->f_284));
				iParam0->f_200 = 1;
			}
			break;
		
		case 1:
			if (!func_1438(iParam0, 1))
			{
				if (func_1468(-4f, 1, 0, 0))
				{
					func_1504(&(iParam0->f_154), &(iParam0->f_175), iParam0->f_7, &(iParam0->f_90[2]), iParam0->f_242, func_1503(iParam0));
					func_1455(iParam0, 1);
					func_475(&(iParam0->f_284), 0, 1);
					func_1474(&(iParam0->f_284), 0, func_1505(iParam0->f_240));
					func_1506(&(iParam0->f_284), 0, 10f);
					func_257(&uLocal_0);
					func_1477(&(iParam0->f_284));
					iParam0->f_200 = 2;
				}
			}
			break;
		
		case 2:
			func_1507(&(iParam0->f_154), iParam0->f_7);
			switch (iParam0->f_433)
			{
				case 0:
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_7, true, false) };
					iParam0->f_241 = func_1508(iParam0, uParam1, &Var0);
					func_1509(&(iParam0->f_52));
					iParam0->f_52.f_8 = { Var0 };
					iParam0->f_52.f_19 = Var0.f_3;
					iParam0->f_52.f_1 = Global_35;
					iParam0->f_52.f_21 = 1f;
					iParam0->f_52.f_18 = 0.25f;
					iParam0->f_52.f_8.f_2 = vVar4.z;
					func_796(&(iParam0->f_52.f_23), 32);
					func_1455(iParam0, 0);
					func_960(&(iParam0->f_284), 0);
					func_1510(Global_35, &(iParam0->f_8), 0f, 0f, 0f, 0, 7f, 4, 0, 0, 0, 0, 1071644672);
					iParam0->f_200 = 3;
					break;
				
				default:
					if (!func_1438(iParam0, 1))
					{
						if (func_1511(iParam0))
						{
							func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_SUITYOURSELF", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							TASK::TASK_PLAY_ANIM(iParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 4f, -4f, -1, 8192, 0, 0, 0, 0, 0, 0);
							func_1455(iParam0, 0);
							func_960(&(iParam0->f_284), 0);
							func_319(&(iParam0->f_9));
							func_1512(&(iParam0->f_284), 0);
							if (!func_1513(2054734837, 2, 0, 0))
							{
							}
							func_1477(&(iParam0->f_284));
							iParam0->f_200 = 5;
						}
					}
					break;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 1))
			{
				if (func_1514(2054734837))
				{
					func_1515(iParam0, 0);
					func_1516(iParam0, 2093245709, 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (func_1517(iParam0))
			{
				iParam0->f_200 = 6;
			}
			break;
		
		case 6:
			if ((iParam0->f_241 == 0 && ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_175.f_1, 0)) || (iParam0->f_241 == 1 && ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_154.f_1, 0)))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_319(&(iParam0->f_9));
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
				if (!func_1513(2054734837, 2, 0, 0))
				{
				}
				iParam0->f_200 = 7;
			}
			break;
		
		case 7:
			if (!func_1438(iParam0, 1))
			{
				if (func_1468(-3f, 1, 0, 0) && !func_944(iParam0->f_7, 0))
				{
					if (!func_282(iParam0, 16))
					{
						if (func_1514(2054734837))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
							func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_GOODBYE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iParam0->f_200 = 8;
						}
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
						iParam0->f_200 = 9;
					}
				}
			}
			break;
		
		case 8:
			if (!func_944(iParam0->f_7, 1))
			{
				func_1515(iParam0, 0);
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_112.f_1, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_112.f_1, "BASE02_LOOP", true, false);
				}
				func_1427(iParam0, 0, 494354620, 0, 0, 1, 0);
				func_1490(iParam0, 7f, 0);
				return 1;
			}
			break;
		
		case 9:
			if (!func_944(iParam0->f_7, 1))
			{
				if (func_1514(2054734837))
				{
					func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_FAREWELL", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iParam0->f_200 = 8;
				}
			}
			break;
	}
	return 0;
}

int func_941(int iParam0)
{
	return 0;
}

int func_942(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29)
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	fVar1 = func_505(Global_35, func_186(uParam1), 1);
	switch (iParam0->f_201)
	{
		case 0:
			if (func_1431(iParam0->f_7, &uParam2, &uVar2, 0) || fVar1 < 4f)
			{
				if (fVar1 < (35f - 7f))
				{
					if (iParam0->f_219 > 3)
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
						{
							PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 3);
						}
						func_1518(iParam0);
					}
					iParam0->f_220 = 1;
					iParam0->f_201 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_584(Global_35, func_186(uParam1), 35f, 1, 1))
			{
				if (!func_73(&(iParam0->f_216)))
				{
					func_257(&(iParam0->f_216));
				}
				if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
				{
					if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
					{
						PED::_0xF1C03A5352243A30(iParam0->f_7);
					}
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("weapon_unarmed"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				func_1427(iParam0, 1, 494354620, 1, 0, 1, 0);
				func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
				if (func_1520(&(iParam0->f_216), 3f))
				{
					iParam0->f_201 = 0;
				}
			}
			else
			{
				if (func_73(&(iParam0->f_216)))
				{
					func_228(&(iParam0->f_216));
				}
				switch (iParam0->f_219)
				{
					case 0:
						func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_DEFEND", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
						if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
						{
							if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
							{
								PED::_0xF1C03A5352243A30(iParam0->f_7);
							}
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
						iParam0->f_219++;
						break;
					
					case 1:
						if (iParam0->f_220 || func_1468(1f, 1, 0, 0))
						{
							func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_HAVETO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
							if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
							{
								if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
								{
									PED::_0xF1C03A5352243A30(iParam0->f_7);
								}
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							if (func_1433(iParam0->f_7, 0, 1, 0) == joaat("weapon_unarmed"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, -618550132, false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
							func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
							iParam0->f_219++;
						}
						break;
					
					case 2:
						if (iParam0->f_220 || func_1468(0, 1, 0, 0))
						{
							func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_ISAID", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
							if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
							{
								if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
								{
									PED::_0xF1C03A5352243A30(iParam0->f_7);
								}
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							if (func_1433(iParam0->f_7, 0, 1, 0) == joaat("weapon_unarmed"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, -618550132, false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
							func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
							iParam0->f_219++;
						}
						break;
					
					case 3:
						if (iParam0->f_220 || func_1468(-3f, 1, 0, 0))
						{
							func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_FORCEDME", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_1518(iParam0);
							iParam0->f_219++;
						}
						break;
				}
			}
			if (iParam0->f_220)
			{
				iParam0->f_220 = 0;
			}
			break;
	}
	return 0;
}

int func_943(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0))
	{
		if (TASK::_0x02EBBB3989B7E695(iParam0->f_7))
		{
			func_1521(iParam0, -1f);
		}
		else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
		{
			if (!PED::_0xEEED8FAFEC331A70(iParam0->f_7, Global_36, 3))
			{
				if (!PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 3))
				{
					PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
				}
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_7, false);
			if (func_1433(iParam0->f_7, 0, 1, 0) != joaat("weapon_unarmed"))
			{
				func_1434(iParam0, 3);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			}
			return 1;
		}
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_7, false);
		if (func_1433(iParam0->f_7, 0, 1, 0) != joaat("weapon_unarmed"))
		{
			func_1434(iParam0, 3);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_1519(iParam0->f_7, &iVar1, 0, 0, 1, 1);
		}
		return 1;
	}
	return 0;
}

int func_944(int iParam0, int iParam1)
{
	if (func_947(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

bool func_945(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_1522(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_946(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

bool func_947(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_756(iParam0, iParam1);
}

int func_948(int iParam0)
{
	struct<7> Var0;
	
	Var0.f_1 = 2;
	Var0.f_2 = 493038497;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	switch (iParam0->f_204)
	{
		case 0:
			func_319(&(iParam0->f_9));
			func_257(&(iParam0->f_212));
			func_1523(iParam0);
			func_917(&(iParam0->f_215), 1);
			iParam0->f_204 = 1;
			break;
		
		case 1:
			if (func_955(&(iParam0->f_212), 2f))
			{
				func_1524(&(iParam0->f_284));
				Var0 = 41;
				Var0.f_2 = 1789063806;
				Var0.f_3 = 3;
				Var0.f_4 = 1;
				func_1525(&(iParam0->f_7), &Var0, &(iParam0->f_284), &(iParam0->f_284.f_21), iParam0->f_434.f_5);
				func_1526(iParam0);
				if (func_549(&(iParam0->f_112), 1, 0, 0))
				{
					func_382(&(iParam0->f_112));
				}
				iParam0->f_204 = 2;
			}
			break;
		
		case 2:
			return 1;
	}
	return 0;
}

int func_949(int iParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam0->f_202)
		{
			case 0:
				func_1455(iParam0, 0);
				func_932(iParam0, 3, 0);
				func_960(&(iParam0->f_284), 1);
				if (!func_282(iParam0, 46))
				{
					func_1474(&(iParam0->f_284), 0, func_1473(7));
				}
				else
				{
					func_475(&(iParam0->f_284), 0, 0);
				}
				func_1474(&(iParam0->f_284), 1, func_1473(10));
				func_1476(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_STUDIES");
				func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTETIME");
				func_1477(&(iParam0->f_284));
				iParam0->f_202 = 1;
				break;
			
			case 1:
				if (iParam0->f_433 > -1)
				{
					func_960(&(iParam0->f_284), 0);
				}
				switch (iParam0->f_433)
				{
					case 0:
						func_257(&(iParam0->f_212));
						if (func_1527(iParam0))
						{
							func_927(iParam0, 4);
						}
						func_1463(iParam0);
						if (!func_1528(iParam0, 1))
						{
							func_927(iParam0, 0);
						}
						else
						{
							iParam0->f_474 = 3;
							func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
							func_1474(&(iParam0->f_284), 1, func_1473(10));
						}
						func_475(&(iParam0->f_284), 0, 0);
						func_1477(&(iParam0->f_284));
						iParam0->f_202 = 2;
						break;
					
					case 1:
						func_257(&(iParam0->f_212));
						if (func_1527(iParam0))
						{
							func_927(iParam0, 4);
						}
						func_1463(iParam0);
						if (func_1528(iParam0, 1))
						{
							iParam0->f_474 = 2;
						}
						if (iParam0->f_474 > 1)
						{
							func_475(&(iParam0->f_284), 0, 0);
							func_475(&(iParam0->f_284), 1, 0);
						}
						func_1477(&(iParam0->f_284));
						iParam0->f_202 = 4;
						break;
					
					case -1:
						if (func_1528(iParam0, 1))
						{
							if (func_955(&(iParam0->f_212), 6f))
							{
								iParam0->f_474 = 3;
								func_1529(iParam0);
								func_1530(iParam0, 4);
								func_935(iParam0, 131072);
								func_475(&(iParam0->f_284), 0, 0);
								func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
								func_1474(&(iParam0->f_284), 1, func_1473(10));
								func_228(&(iParam0->f_212));
								func_1530(iParam0, 1);
								func_1477(&(iParam0->f_284));
							}
						}
						break;
				}
				break;
			
			case 2:
				if (((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
				{
					func_257(&(iParam0->f_212));
					if (func_1528(iParam0, 1))
					{
						func_945(iParam0->f_7, Global_35, func_1531("RE_HEC_UNI_V1_EXCUSEME"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					else
					{
						func_945(iParam0->f_7, Global_35, func_1531("RE_HEC_UNI_V1_TRAVELS"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					iParam0->f_202 = 3;
				}
				break;
			
			case 3:
				if (((func_955(&(iParam0->f_212), 2f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
				{
					func_1529(iParam0);
					func_1530(iParam0, 4);
					func_935(iParam0, 131072);
					if (!func_1528(iParam0, 3))
					{
						func_475(&(iParam0->f_284), 1, 1);
					}
					func_1490(iParam0, 10f, 0);
					iParam0->f_202 = 1;
				}
				break;
			
			case 4:
				if (func_955(&(iParam0->f_212), 2f))
				{
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
					{
						if (func_1528(iParam0, 4) || func_1466(iParam0, 0))
						{
							func_257(&(iParam0->f_212));
							func_1532(iParam0, iParam0->f_474);
							switch (iParam0->f_474)
							{
								case 2:
									func_176(iParam0, 54);
									break;
								
								case 3:
									func_927(iParam0, 6);
									break;
							}
							iParam0->f_202 = 5;
						}
					}
				}
				break;
			
			case 5:
				if (!func_1438(iParam0, 1))
				{
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
					{
						if ((func_955(&(iParam0->f_212), 2f) || func_1528(iParam0, 6)) || func_1528(iParam0, 5))
						{
							if (func_1533(iParam0))
							{
								func_1523(iParam0);
								if (func_1528(iParam0, 6))
								{
									func_1534(iParam0, 0);
								}
								else
								{
									func_1434(iParam0, 3);
								}
								func_917(&(iParam0->f_215), 1);
								func_915(iParam0);
								uParam1->f_46 = 1;
								iParam0->f_202 = 6;
							}
							else
							{
								func_1490(iParam0, 10f, 0);
								if (!func_1528(iParam0, 1))
								{
									func_1529(iParam0);
									func_1530(iParam0, 4);
									func_935(iParam0, 131072);
								}
								else
								{
									func_257(&(iParam0->f_212));
								}
								iParam0->f_202 = 1;
							}
						}
					}
				}
				break;
			
			case 6:
				break;
		}
	}
	if (func_282(iParam0, 1))
	{
		if (!func_279(Global_35, iParam0->f_7, 300f, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_950(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
	{
		if (!iParam0->f_520)
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(iParam0->f_7) || PED::IS_PED_IN_COMBAT(iParam0->f_7, Global_35))
			{
				if (!func_282(iParam0, 56))
				{
					func_176(iParam0, 56);
					func_1535(&(iParam0->f_284.f_21), 1, 1);
					func_1477(&(iParam0->f_284));
				}
				func_1536(&(iParam0->f_9), iParam0->f_7, 0);
				iParam0->f_520 = 1;
			}
		}
		else if (!PED::IS_PED_IN_MELEE_COMBAT(iParam0->f_7) && !PED::IS_PED_IN_COMBAT(iParam0->f_7, Global_35))
		{
			func_319(&(iParam0->f_9));
			iParam0->f_520 = 0;
		}
		if (func_1443(iParam0, 1) > 1)
		{
			if (!func_282(iParam0, 63))
			{
				func_958(iParam0->f_284.f_21[0 /*17*/]);
			}
		}
		else if (!func_282(iParam0, 50))
		{
			if (!func_282(iParam0, 52))
			{
				if (!func_1438(iParam0, 1))
				{
					func_958(iParam0->f_284.f_21[0 /*17*/]);
				}
			}
		}
		switch (iParam0->f_206)
		{
			case 0:
				func_1537(&(iParam0->f_284));
				func_475(&(iParam0->f_284), 1, 1);
				func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_1ST");
				func_1474(&(iParam0->f_284), 1, func_1473(10));
				if (!func_282(iParam0, 50))
				{
					func_475(&(iParam0->f_284), 0, 1);
					func_1476(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_DEFUSE");
					func_1474(&(iParam0->f_284), 0, func_1473(8));
				}
				func_913(iParam0, 21);
				func_1538(&(iParam0->f_284));
				func_1477(&(iParam0->f_284));
				iParam0->f_206 = 1;
				break;
			
			case 1:
				switch (iParam0->f_433)
				{
					case 0:
						func_257(&(iParam0->f_212));
						func_176(iParam0, 50);
						iParam0->f_206 = 2;
						break;
					
					case 1:
						func_257(&(iParam0->f_212));
						func_176(iParam0, 52);
						iParam0->f_206 = 4;
						break;
				}
				break;
			
			case 2:
				if (func_955(&(iParam0->f_212), 2f))
				{
					iParam0->f_206 = 3;
				}
				break;
			
			case 3:
				if (func_282(iParam0, 51))
				{
					if (!func_944(iParam0->f_7, 1))
					{
						if (iParam0->f_528 < 2)
						{
							func_475(&(iParam0->f_284), 1, 1);
						}
						func_1477(&(iParam0->f_284));
						func_913(iParam0, 50);
						func_913(iParam0, 51);
						iParam0->f_206 = 1;
					}
				}
				break;
			
			case 4:
				if (func_955(&(iParam0->f_212), 2f))
				{
					iParam0->f_206 = 5;
				}
				break;
			
			case 5:
				if (func_282(iParam0, 53))
				{
					if (!func_944(iParam0->f_7, 1))
					{
						if (iParam0->f_528 < 2)
						{
							func_475(&(iParam0->f_284), 1, 1);
							func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_2ND");
						}
						func_1477(&(iParam0->f_284));
						func_913(iParam0, 52);
						func_913(iParam0, 53);
						iParam0->f_206 = 1;
					}
				}
				break;
			
			case 6:
				if (func_282(iParam0, 55))
				{
					if (!func_944(iParam0->f_7, 1))
					{
						func_913(iParam0, 54);
						func_913(iParam0, 55);
						iParam0->f_206 = 1;
					}
				}
				break;
		}
	}
	return ENTITY::IS_ENTITY_DEAD(iParam0->f_7);
}

void func_951(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
	{
		if (iParam0->f_476 != 0)
		{
			PED::_0x8B3B71C80A29A4BB(iParam0->f_7, iParam0->f_475, iParam0->f_476);
		}
	}
}

void func_952(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	if (!func_1539(iParam0, &iVar4, &bVar0, &bVar1, &bVar2, &bVar3))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_7, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_7, true);
	if (func_797(iVar4, 8))
	{
		if (!func_73(&(iParam0->f_447)))
		{
			func_257(&(iParam0->f_447));
		}
	}
	else if (func_73(&(iParam0->f_447)))
	{
		func_228(&(iParam0->f_447));
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_7, -1958015541))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(&(iParam0->f_90[3]), "SCRIPT_RE@HERBALISTCAMP", "MORTAR_PESTAL_STATIC", 1))
		{
			ENTITY::PLAY_ENTITY_ANIM(&(iParam0->f_90[3]), "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
		}
	}
	switch (iParam0->f_203)
	{
		case 0:
			iParam0->f_203 = 2;
			break;
		
		case 2:
			iParam0->f_203 = func_1540(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 3:
			iParam0->f_203 = func_1541(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 4:
			iParam0->f_203 = func_1542(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 6:
			iParam0->f_203 = func_1543(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 7:
			iParam0->f_203 = func_1544(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 10:
			iParam0->f_203 = func_1545(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 12:
			iParam0->f_203 = func_1546(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 14:
			iParam0->f_203 = func_1547(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 15:
			iParam0->f_203 = func_1548(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 18:
			iParam0->f_203 = func_1549(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 19:
			iParam0->f_203 = func_1550(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		
		case 20:
			iParam0->f_203 = func_1551(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
	}
}

int func_953()
{
	if (func_203() == -1 && func_139(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return 0;
}

int func_954(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_955(var uParam0, float fParam1)
{
	if (!func_73(uParam0))
	{
		return 0;
	}
	if (func_583(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_956()
{
	if (!func_197(8))
	{
		if (func_197(4))
		{
			func_960(&(Local_14.f_284), 0);
			func_475(&(Local_14.f_284), 0, 1);
			func_1506(&(Local_14.f_284), 0, 5.5f);
			func_178(8);
		}
	}
}

void func_957()
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
	{
		if (!func_197(16384))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_7, 2017029002))
			{
				func_178(16384);
				func_945(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_HEYTHERE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_257(&uLocal_916);
			}
		}
		if (!func_197(32768))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_7, 193657386))
			{
				StringCopy(&cLocal_812, "REHC_RC1_LI", 24);
				func_257(&uLocal_922);
				func_178(32768);
				func_963(&uLocal_815, cLocal_812, 0, -1, 0, 0);
				func_257(&uLocal_916);
				func_257(&uLocal_925);
			}
		}
		if (func_197(16384))
		{
			if (!TASK::IS_PED_STILL(Global_35) && func_553(Global_35, Local_14.f_7, 1, 1) < 15f)
			{
				func_257(&uLocal_916);
			}
		}
		if (func_197(16384))
		{
			if (!func_1552(1))
			{
				if (func_583(&uLocal_916) > 14f)
				{
					func_945(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_HEYTHERE_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_1553(1);
					func_257(&uLocal_916);
				}
			}
			if (!func_1552(2))
			{
				if (func_583(&uLocal_916) > 15f)
				{
					func_945(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_HEYTHERE_C", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_1553(2);
					func_257(&uLocal_916);
				}
			}
		}
		if (func_73(&uLocal_925))
		{
			if (func_955(&uLocal_925, 1f))
			{
				if (!func_944(Local_14.f_7, 1))
				{
					func_1482(&Local_14);
					func_228(&uLocal_925);
				}
			}
		}
		if (func_197(2) || func_197(32768))
		{
			if (!func_197(4096))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_7, 1898057119))
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_178(4096);
					switch (iVar0)
					{
						case 0:
							func_945(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_BACKAGAIN", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						
						case 1:
							func_945(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_DONTBESHY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
				}
			}
		}
		if (!func_197(8192))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_7, -776468060) || func_1552(1))
			{
				if (func_583(&uLocal_916) > 14f)
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_178(8192);
					func_257(&uLocal_916);
					switch (iVar1)
					{
						case 0:
							func_945(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_SPARETIME", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						
						case 1:
							func_945(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_LETMEKNOW", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
				}
			}
		}
	}
}

void func_958(int* iParam0)
{
	func_1355(iParam0, 9);
}

int func_959(int* iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1554(3, 0, 0);
	func_795(&iVar0, 8);
	if (bParam2)
	{
		func_796(&iVar0, 16);
	}
	iVar1 = -1;
	if (!func_433(iParam0->f_73, 4))
	{
		iVar1 = func_1555(uParam1, iParam0, 15f, &(iParam0->f_21), &(iParam0->f_74), 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
	}
	if (iVar1 > -1)
	{
		if (iVar1 == 0)
		{
			if (!func_433(iParam0->f_73, 1))
			{
				if (func_433(iParam0->f_73, 1))
				{
					func_409(&(iParam0->f_73), 2);
				}
			}
		}
		func_960(iParam0, 0);
		(iParam0->f_21[iVar1 /*17*/])->f_13 = "";
	}
	return iVar1;
}

void func_960(int* iParam0, bool bParam1)
{
	func_1556(&(iParam0->f_21), bParam1, 0);
}

void func_961(int* iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		func_1557(uParam1);
	}
	func_1558(iParam0, &(iParam0->f_21));
}

void func_962(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

bool func_963(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1559(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_964()
{
	if (!func_197(4))
	{
		func_1454(&(Local_14.f_284));
		func_960(&(Local_14.f_284), 0);
		func_1560(&(Local_14.f_284), 0);
		func_178(4);
	}
}

int func_965(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	float fVar0;
	bool bVar1;
	
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_1561(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (iParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_1562(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_844() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_966(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_1399(uParam0);
	return 1;
}

bool func_967(var uParam0, bool bParam1)
{
	return ((!bParam1 || func_549(uParam0, 0, 0, 0)) && uParam0->f_8 != 0);
}

int func_968(var uParam0, char* sParam1, int iParam2)
{
	if (func_549(uParam0, 0, 0, 0))
	{
		return ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_1, sParam1, iParam2);
	}
	return 0;
}

int func_969()
{
	if (!func_279(Global_35, Local_14.f_7, 15f, 1))
	{
		if (!func_73(&uLocal_919) || func_955(&uLocal_919, 16f))
		{
			return 1;
		}
	}
	return 0;
}

void func_970()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	func_1563(0);
	Global_1935689->f_6 = 1;
}

int func_971(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_972(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_971(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_973(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_834(vVar0, vVar3, vParam1);
}

int func_974(int iParam0, int iParam1)
{
	float fVar0;
	
	if (!func_971(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_433(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_433(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_433(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_975(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_976(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_976(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_1564(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1565(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1566(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_1567(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1568(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_1369(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_1569(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

bool func_977(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

Vector3 func_978(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_979(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_980(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

bool func_981(int iParam0, int iParam1)
{
	if (func_203() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_982(int iParam0)
{
	if (func_203() != -1)
	{
		if (func_858(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_858(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_983(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_858(iParam0, 65536) && !func_858(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_858(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_858(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_984()
{
	return Global_1905944->f_5694;
}

bool func_985(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_986()
{
	if (func_1357(Global_43800))
	{
		func_1358(&Global_43800, 0, 0);
	}
}

int func_987(int iParam0)
{
	int iVar0;
	
	if (func_1570(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

bool func_988(int iParam0, bool bParam1)
{
	if (bParam1 && !func_1357(iParam0))
	{
		return false;
	}
	return !func_1571(iParam0, 4);
}

int func_989(int iParam0, bool bParam1)
{
	if (!func_1357(Global_43800))
	{
		Global_43800 = func_1572("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		((*Global_1945938)[Global_43800 /*18*/])->f_16 = &Global_23[3];
		func_1573(Global_43800, 0, 1);
		func_1574(Global_43800, 6, 1);
		if (bParam1)
		{
			func_1574(Global_43800, 14, 1);
		}
	}
	else
	{
		if (!func_988(Global_43800, 0))
		{
			func_1575(Global_43800, 1, 1);
		}
		if (func_1576(Global_43800, 1) != 0f && iParam0)
		{
			func_1573(Global_43800, 1, 1);
		}
		else
		{
			func_1573(Global_43800, 0, 1);
		}
		return func_1577(Global_43800, 1);
	}
	return 0;
}

void func_990(var uParam0)
{
	if (func_30(uParam0, 2))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_640);
	}
}

int func_991(var uParam0, var uParam1)
{
	if (uParam1->f_1580 < 0 || uParam1->f_1580 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30)))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30)))
			{
				func_241(uParam0, &((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30));
				func_498(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

bool func_992(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_993(var uParam0, var uParam1)
{
	if (((!func_500(uParam0, 32) || func_1578(uParam0)) || func_500(uParam0, 268435456)) && !func_500(uParam0, 65536))
	{
		func_564(&(uParam0->f_404), 256);
	}
}

void func_994(var uParam0, int iParam1)
{
	var uVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, iParam1);
	}
}

bool func_995()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

void func_996()
{
	int iVar0;
	
	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == 130487986)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

int func_997()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

void func_998(int iParam0)
{
	if (func_997())
	{
		Global_1357509 = 1;
	}
	if (func_1579(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == -1016714371)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

void func_999(var uParam0, char[16] cParam1)
{
	uParam0->f_344 = { cParam1 };
}

void func_1000(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]))
		{
			func_1580(uParam0, uParam0->f_366[iVar0 /*9*/]);
		}
		iVar0++;
	}
	Var1 = { func_864() };
	func_1580(uParam0, &Var1);
	Var1 = { func_495(uParam0) };
	func_1580(uParam0, &Var1);
}

bool func_1001()
{
	return func_1570(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

void func_1002(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

Vector3 func_1003(var uParam0)
{
	return uParam0->f_406;
}

void func_1004(var uParam0)
{
	int iVar0;
	
	if (func_1581(&iVar0))
	{
		if (func_1104(iVar0, 0))
		{
			if (func_1128(iVar0) == -525676072)
			{
				PED::_0xD710A5007C2AC539(Global_35, 1249071452, 0);
				func_1022(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_0xD710A5007C2AC539(Global_35, 1606587013, 0);
			}
			if (!func_1104(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1005(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_28(0, 0);
		func_1582(-1);
	}
	func_585(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_992(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_992(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_992(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_992(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_992(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam1, 1);
	}
	if (!func_992(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_992(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_992(*uParam0, 4) && !func_992(*uParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_992(*uParam0, 2048))
	{
		func_1583(0, 0);
	}
	if (func_992(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (func_992(*uParam0, 256))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
	}
	if (func_992(*uParam0, 8192))
	{
		func_1584();
	}
	if (!func_992(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_992(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_992(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_992(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_570() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_242(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_414(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_573(2);
						func_572(-1);
						func_1585(vVar3);
						func_1587(func_1586());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, 1, 0);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_992(*uParam0, 4096))
	{
		func_1371(Global_35);
	}
	if (!func_992(*uParam0, 1048576))
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_992(*uParam0, 2097152))
	{
		if (func_1588() || PED::_0x50F124E6EF188B22(Global_35))
		{
			func_276(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1006(var uParam0, vector3 vParam1)
{
	uParam0->f_406 = { vParam1 };
}

void func_1007(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_500(uParam0, 2048) && !func_242(func_1589(uParam0)))
	{
		bVar0 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_500(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_1591(iVar1, func_1589(uParam0), func_1590(uParam0), iVar2, 1073741824);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_500(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1591(iVar3, func_1589(uParam0), func_1590(uParam0), 2, 1073741824);
		}
	}
}

void func_1008(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if ((func_500(uParam0, 268435456) && !func_242(func_1589(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_1589(uParam0) };
			func_1591(iVar0, vVar1, func_1035(vVar1, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1009(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_409 = { vParam1 };
	uParam0->f_412 = iParam4;
	if (func_242(vParam1))
	{
		func_497(uParam0, 2048, 1);
	}
	else
	{
		func_498(uParam0, 2048);
		if (bParam5)
		{
			func_498(uParam0, -2147483648);
		}
	}
}

void func_1010(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/]))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/])) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
				{
					if (!func_1013(uParam0->f_13[iVar0 /*12*/], 8))
					{
						if (func_891(func_1433(iVar1, 0, 1, 0)))
						{
							if (!func_1592(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (func_891(func_1433(iVar1, 1, 1, 0)))
						{
							if (!func_1592(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1011(var uParam0, bool bParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::_0xD710A5007C2AC539(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_1012(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	bVar4 = func_203() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_1368(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1593(iParam1, 29, bVar4, 1, 0);
			func_1593(iParam1, 31, bVar4, 1, 0);
			func_1593(iParam1, 30, bVar4, 1, 0);
			func_1593(iParam1, 22, bVar4, 1, 0);
			func_1593(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1594(32768) && func_1595(1108822547, 8)) && func_1596(10, iParam3))
	{
		func_1597(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1598(iVar1, 1);
			if (func_1595(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_1596(iVar1, iParam3))
				{
				}
				else if ((func_1595(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_1595(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1593(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_1599(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_1593(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_1595(iVar3, 1))
							{
								func_1600(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

bool func_1013(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1014(var uParam0)
{
	StringCopy(&(uParam0->f_344), "", 32);
	func_1601(uParam0);
	func_504(uParam0, 0f, 0f, 0f);
	func_1602(uParam0);
}

void func_1015(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		(uParam0->f_13[iVar0 /*12*/])->f_11 = 0;
		iVar0++;
	}
}

void func_1016(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_1017(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_1569(uParam0->f_13[iVar0 /*12*/], iParam1);
		iVar0++;
	}
}

void func_1018(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_986();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_1019(int iParam0)
{
	func_1603();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_1020()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_1021(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_1604(bParam0);
}

int func_1022(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_1209(iParam1, 1, 0) };
		iParam3 = func_1210(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1605(iParam1, iParam2, func_1200(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1606(1, (func_203() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_1200(iParam3, 1) /*11*/])
			{
				func_1208(31, 0, 0, 0, 0);
			}
			break;
		
		case 1108822547:
			if (func_1594(32768) && iParam1 != &Global_1946804->f_57[func_1200(iParam3, 1) /*11*/])
			{
				func_1607();
				func_1208(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1208(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1608(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1208(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_514(0);
			func_1609(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1208(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1023(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_1209(iParam0, 0, 0) };
	Var5 = { func_1389(iParam0, Var0, Var0.f_4, 0) };
	if (func_1610(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_1295(0), &Var5, bParam1);
}

void func_1024(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	struct<18> Var17;
	struct<41> Var35;
	struct<10> Var76;
	struct<22> Var86;
	
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_355 = { Var1 };
	StringCopy(&(uParam0->f_355), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		*(uParam0->f_371[iVar0 /*18*/]) = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1418)
	{
		*(uParam0->f_1418[iVar0 /*10*/]) = { Var76 };
		iVar0++;
	}
	uParam0->f_1579 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_912)
	{
		*(uParam0->f_912[iVar0 /*41*/]) = { Var35 };
		*(uParam0->f_1241[iVar0 /*22*/]) = { Var86 };
		iVar0++;
	}
	uParam0->f_1580 = -1;
	uParam0->f_1661 = { Global_36 };
	uParam0->f_1664 = 0;
	uParam0->f_1665 = 0;
	uParam0->f_1584 = -1;
	uParam0->f_1585 = -1f;
	uParam0->f_1560 = 0;
	uParam0->f_1562 = 0;
	uParam0->f_1562.f_1 = 0;
	uParam0->f_1799 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
	}
}

void func_1025(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1026()
{
	if (func_1036())
	{
		Global_18 = 0;
		Global_43883 = 0;
		if (!func_1611())
		{
			func_1021(1);
		}
	}
}

void func_1027(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

char* func_1028(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		
		case 1:
			return "mech_inventory@clothing@mask";
		
		case 2:
			return "mech_inventory@clothing@mask";
		
		case 3:
			return "mech_inventory@clothing@mask";
		
		case 4:
			return "mech_inventory@clothing@mask";
		
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_1029(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771))
	{
		if (!bParam1)
		{
			func_1612(uParam0);
		}
		else if (bParam2)
		{
			func_1613(uParam0);
		}
		else
		{
			func_1614(uParam0, uParam0->f_1794);
		}
	}
	else
	{
		if (!func_168(uParam0, 1048576) && bParam1)
		{
			func_1614(uParam0, uParam0->f_1794);
		}
		else if (!func_168(uParam0, 2097152) && bParam2)
		{
			func_1613(uParam0);
		}
		else if ((func_168(uParam0, 1048576) && !bParam1) || (func_168(uParam0, 2097152) && !bParam2))
		{
			func_1612(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1778 * FtoV(func_1615(uParam0->f_1794)) };
			if (!func_1054(vVar0, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_1771), 1056964608, 1) && !func_242(vVar0))
			{
				VOLUME::_0xA46E98BDC407E23D(uParam0->f_1771, vVar0);
			}
		}
	}
}

void func_1030(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_1584 < 0)
	{
		return;
	}
	if ((uParam0->f_1795 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797)) && VEHICLE::_0xEA44E97849E9F3DD(uParam0->f_1797))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_0xA8BA0BAE0173457B(uParam0->f_1797, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || func_505(iVar2, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1) < func_505(iVar1, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!func_168(uParam0, 8192))
		{
			if (func_505(iVar1, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1) <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 + 5f) || VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 5f)
				{
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 5f);
				}
			}
			else if ((!func_1616(512) || func_1617(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 50f)
			{
				VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 50f);
			}
		}
	}
}

void func_1031(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if ((uParam0->f_1529[iVar2 /*15*/])->f_11 && VOLUME::_0x92A78D0BEDB332A3((uParam0->f_1529[iVar2 /*15*/])->f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1794) && !(uParam0->f_1529[iVar2 /*15*/])->f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1794, (uParam0->f_1529[iVar2 /*15*/])->f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_1794, 1);
				(uParam0->f_1529[iVar2 /*15*/])->f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1583 != 0 || func_168(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_0x8BC7C1F929D07BF3(-1679307491);
					}
					uParam0->f_1583 = 0;
					func_565(uParam0, 33554432);
				}
				bVar3 = func_979((uParam0->f_1529[iVar2 /*15*/])->f_10, 131072);
				if (func_1618(Global_35, (uParam0->f_1529[iVar2 /*15*/])->f_12, 0, 1))
				{
					if (uParam0->f_1584 >= 0)
					{
						func_615(uParam0, (uParam0->f_1529[iVar2 /*15*/])->f_10, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
						PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
					}
					if (bVar3)
					{
						func_1619();
					}
					func_1620(uParam0, iVar2, iVar0, bVar3);
				}
				else if (func_1621(uParam0->f_1529[iVar2 /*15*/]) != 0)
				{
					func_1620(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (func_979((uParam0->f_1529[iVar2 /*15*/])->f_10, 4))
			{
				if (uParam0->f_1584 >= 0)
				{
					if (((func_505(Global_35, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1) > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 && func_1618(uParam0->f_1794, (uParam0->f_1529[iVar2 /*15*/])->f_12, 0, 1)) || uParam0->f_1583 != 0) || func_168(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (func_557(Global_35, &(uParam0->f_1583), iVar4, 0, 0, 1084227584, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
							uParam0->f_1583 = 0;
							func_565(uParam0, 33554432);
						}
						else
						{
							func_618(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

int func_1032(var uParam0)
{
	if (uParam0->f_1584 < 0)
	{
		return 0;
	}
	if (func_168(uParam0, 33554432))
	{
		return 0;
	}
	if (func_567(uParam0->f_912[uParam0->f_1584 /*41*/], 2) && uParam0->f_1793)
	{
		return 0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771) && VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1772))
	{
		return 1;
	}
	if (func_168(uParam0, 65536))
	{
		return 1;
	}
	return 0;
}

float func_1033(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	fVar16 = 10000f;
	switch (&uParam0->f_912[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iParam1 /*41*/])->f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iParam1 /*41*/])->f_4, true);
			vVar0 = { (uParam0->f_912[iParam1 /*41*/])->f_4 - (uParam0->f_912[iParam1 /*41*/])->f_1 };
			if (func_1622(&vVar3, (uParam0->f_912[iParam1 /*41*/])->f_1, (uParam0->f_912[iParam1 /*41*/])->f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		
		case 1:
			if (Global_36.f_2 >= (uParam0->f_912[iParam1 /*41*/])->f_1.f_2 && Global_36.f_2 <= ((uParam0->f_912[iParam1 /*41*/])->f_1.f_2 + (uParam0->f_912[iParam1 /*41*/])->f_10))
			{
				func_1623(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iParam1 /*41*/])->f_1, true) - (uParam0->f_912[iParam1 /*41*/])->f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_1034(var uParam0)
{
	int iVar0;
	
	func_1624(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((uParam0->f_912[iVar0 /*41*/])->f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[iVar0 /*41*/])->f_22)) && func_1625(uParam0, iVar0)) && !func_1038(uParam0->f_912[iVar0 /*41*/], 1))
			{
				if (!func_1626(uParam0, &((uParam0->f_912[iVar0 /*41*/])->f_22)))
				{
					func_963(&(uParam0->f_1667), (uParam0->f_912[iVar0 /*41*/])->f_22, 0, -1, 1, 0);
				}
				func_1627(uParam0->f_912[iVar0 /*41*/], 1);
			}
		}
		iVar0++;
	}
}

float func_1035(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_1036()
{
	return func_1628(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_1037(var uParam0, int iParam1)
{
	uParam0->f_1562.f_1 = (uParam0->f_1562.f_1 || iParam1);
}

bool func_1038(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_1039(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

void func_1040(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout")) && !uParam0->f_1665)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout", true);
					}
				}
				else if (func_168(uParam0, 32768) && func_1629(uParam0->f_1418[iVar0 /*10*/], 128))
				{
					func_1630((uParam0->f_1418[iVar0 /*10*/])->f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8, 0);
			}
		}
		iVar0++;
	}
}

char* func_1041()
{
	return "default_leadin_camera";
}

void func_1042()
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-1181125641);
	STREAMING::REMOVE_ANIM_DICT(func_1028(1));
}

void func_1043(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_1044(var uParam0, var uParam1)
{
	*uParam0 = 0;
	if (!func_1050(uParam1, 8))
	{
		if (func_1050(uParam1, 1))
		{
			*uParam0 = 1;
		}
		else if (func_1050(uParam1, 4))
		{
			*uParam0 = 4;
		}
		else if (func_1050(uParam1, 2))
		{
			*uParam0 = 2;
		}
	}
}

void func_1045(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_1051(sParam0, iParam2);
	func_1631(iParam1, fParam3);
}

void func_1046()
{
	if (MISC::IS_BIT_SET(&Global_1357510, 4))
	{
	}
	else
	{
		MISC::SET_BIT(Global_1357510, 0);
	}
}

void func_1047(var uParam0, int iParam1)
{
	uParam0->f_1561 = (uParam0->f_1561 || iParam1);
}

char* func_1048(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_1049()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

bool func_1050(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1051(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (func_1632(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (func_1632(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (func_1632(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			CAM::_0x6A4D224FC7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
		{
			CAM::_0xB8B207C34285E978(sParam0);
		}
	}
}

float func_1052(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_1035(vVar0, vVar3, iParam2);
}

void func_1053(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

int func_1054(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1055(var uParam0, int iParam1)
{
	uParam0->f_1561 = (uParam0->f_1561 - (uParam0->f_1561 && iParam1));
}

int func_1056(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	
	if (func_168(uParam0, 4))
	{
		return 0;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1584 < 0 || uParam0->f_1584 >= 8)
	{
		return 0;
	}
	if (!(uParam0->f_912[uParam0->f_1584 /*41*/])->f_29)
	{
		return 0;
	}
	if (!func_168(uParam0, 4096) && uParam0->f_1792)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_29)
	{
		if (&uParam0->f_912[uParam0->f_1584 /*41*/] == 0)
		{
			vVar3 = { (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4 - (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (func_1622(&vVar0, uParam0->f_1661, Global_36, vVar6, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1))
			{
				iVar9 = 1;
				if (vVar0.x > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1)
				{
					if (vVar0.x > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_1)
					{
						if (vVar0.y > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 - 0.1f) || vVar0.z > ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 + (uParam0->f_912[uParam0->f_1584 /*41*/])->f_10)) || (func_567(uParam0->f_912[uParam0->f_1584 /*41*/], 2) && (uParam0->f_1793 || uParam0->f_1795)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*uParam1 = uParam0->f_1584;
					return 1;
				}
			}
		}
		else if (func_168(uParam0, 8))
		{
			*uParam1 = uParam0->f_1580;
			return 1;
		}
	}
	return 0;
}

void func_1057(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		(uParam0->f_912[iParam1 /*41*/])->f_28 = 1;
		uParam0->f_1580 = iParam1;
		uParam0->f_1584 = iParam1;
		Global_43804 = iParam1;
		uParam0->f_1665 = 1;
	}
}

void func_1058(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	
	switch ((uParam0->f_371[iParam1 /*18*/])->f_2)
	{
		case 9:
			if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8) && ANIMSCENE::_0xCBFC7725DE6CE2E0((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, 0))
			{
				fVar1 = ANIMSCENE::_0x3FBC3F51BF12DFBF((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2)) && (uParam0->f_3[iVar0 /*13*/])->f_8 > 0f) && fVar1 >= (uParam0->f_3[iVar0 /*13*/])->f_8) && !ENTITY::IS_ENTITY_VISIBLE((uParam0->f_3[iVar0 /*13*/])->f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE((uParam0->f_3[iVar0 /*13*/])->f_2, true);
					}
					iVar0++;
				}
				if (((func_1076(uParam0->f_371[iParam1 /*18*/], 4) && (uParam0->f_371[iParam1 /*18*/])->f_12 < 1f) && fVar1 >= (uParam0->f_371[iParam1 /*18*/])->f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				}
				if (func_1076(uParam0->f_371[iParam1 /*18*/], 64) && func_1633(uParam0, iParam1, 0))
				{
					func_1634(uParam0, (uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, (uParam0->f_371[iParam1 /*18*/])->f_13, (uParam0->f_371[iParam1 /*18*/])->f_14);
				}
			}
			break;
		
		case 10:
			if (((uParam0->f_371[iParam1 /*18*/])->f_3 >= 0 && (uParam0->f_371[iParam1 /*18*/])->f_5 >= 0) && (uParam0->f_371[iParam1 /*18*/])->f_3 != (uParam0->f_371[iParam1 /*18*/])->f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2) && !ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2)))
					{
						func_1635(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2), (uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2, (uParam0->f_371[iParam1 /*18*/])->f_13, (uParam0->f_371[iParam1 /*18*/])->f_14);
					}
					if ((func_1076(uParam0->f_371[iParam1 /*18*/], 128) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2)))
					{
						func_1635(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2), (uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2, (uParam0->f_371[iParam1 /*18*/])->f_13, (uParam0->f_371[iParam1 /*18*/])->f_14);
					}
				}
			}
			break;
		
		case 4:
			func_1061(uParam0, iParam1, 0, 0);
			break;
	}
}

int func_1059(var uParam0, int iParam1)
{
	if ((uParam0->f_371[iParam1 /*18*/])->f_1 > uParam0->f_1579)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2))
	{
	}
	if (uParam0->f_1579 < 0 || uParam0->f_1579 > 6)
	{
		return 0;
	}
	if ((uParam0->f_371[iParam1 /*18*/])->f_1 == 0)
	{
		return 1;
	}
	if ((uParam0->f_371[iParam1 /*18*/])->f_17 == 2 && func_603(uParam0) == 9)
	{
		return 1;
	}
	if (!func_168(uParam0, 4096) && uParam0->f_1792)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if (&uParam0->f_371[iParam1 /*18*/] != uParam0->f_1580)
	{
		return 0;
	}
	if (func_603(uParam0) > 3 && &uParam0->f_371[iParam1 /*18*/] != uParam0->f_1580)
	{
		return 0;
	}
	if ((((func_603(uParam0) > 3 && (uParam0->f_371[iParam1 /*18*/])->f_17 == 1) && func_614(uParam0) != 11) && func_613(uParam0, uParam0->f_1580)) && (uParam0->f_371[iParam1 /*18*/])->f_2 != 4)
	{
		return 0;
	}
	if (((uParam0->f_371[iParam1 /*18*/])->f_2 == 9 && (uParam0->f_371[iParam1 /*18*/])->f_4 >= 0) && ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, 1, 0))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, func_862(Global_35)))
		{
			if (func_1629(uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/], 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (func_1629(uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/], 8))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_1060(var uParam0, int iParam1, var uParam2)
{
	switch ((uParam0->f_371[iParam1 /*18*/])->f_2)
	{
		case 9:
			func_1636(uParam0, uParam2, iParam1);
			break;
		
		case 4:
			func_1061(uParam0, iParam1, 0, 0);
			break;
		
		case 5:
			(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22)))
			{
				if (func_583(&(uParam0->f_1768)) >= IntToFloat(((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_25 / 1000)))
				{
					func_1624(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22)))
					{
						func_963(&(uParam0->f_1667), (uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22));
					}
					(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
				}
			}
			else
			{
				(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			}
			break;
		
		case 10:
			(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			break;
		
		case 11:
			(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

int func_1061(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = &uParam0->f_371[iParam1 /*18*/];
		fVar3 = (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7;
		fVar4 = (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (func_614(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_1637(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			}
			if (((!func_567(uParam0->f_912[iVar2 /*41*/], 32) && func_1638()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!func_567(uParam0->f_912[iVar2 /*41*/], 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!func_168(uParam0, 8192))
					{
						VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					func_1070(uParam0, 8);
				}
				else
				{
					func_618(uParam0, 131072);
					func_1070(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				func_1070(uParam0, 5);
			}
			else
			{
				func_1639(uParam0);
			}
			break;
		
		case 1:
			bVar0 = func_632(&(uParam0->f_1765)) >= 3f;
			if ((((!func_971(Global_35, 716706914) && !func_971(Global_35, 242628503)) && func_632(&(uParam0->f_1765)) >= 2.5f) || (!func_891(func_1433(Global_35, 0, 1, 0)) && !func_891(func_1433(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_1639(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		
		case 5:
		case 6:
			bVar0 = func_632(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (func_567(uParam0->f_912[uParam0->f_1584 /*41*/], 512))
			{
				iVar1 |= 128;
			}
			if (!func_613(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (func_557(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4))
			{
				func_1639(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (func_614(uParam0) == 5 || iParam1 < 0)
				{
					func_1639(uParam0);
				}
				else
				{
					func_1640(uParam0, iParam1, bParam2);
					func_257(&(uParam0->f_1765));
					func_1070(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		
		case 7:
			bVar0 = func_632(&(uParam0->f_1765)) >= 1f;
			if (func_954(Global_35, 242628503) || bVar0)
			{
				func_1070(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		
		case 3:
			if (!func_567(uParam0->f_912[iVar2 /*41*/], 256))
			{
				if (func_1581(&(uParam0->f_1799)))
				{
					func_1641(uParam0->f_1799, 0);
				}
			}
			func_257(&(uParam0->f_1765));
			func_1070(uParam0, 4);
			break;
		
		case 4:
			bVar0 = func_632(&(uParam0->f_1765)) >= 2f;
			if ((func_567(uParam0->f_912[iVar2 /*41*/], 256) || !func_1581(&uVar5)) || bVar0)
			{
				if (func_1642())
				{
					func_1643();
					func_1070(uParam0, 10);
				}
				else
				{
					func_1070(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		
		case 10:
			bVar0 = func_632(&(uParam0->f_1765)) >= 2f;
			if (func_1642() || bVar0)
			{
				func_1070(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		
		case 8:
			bVar0 = func_632(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (func_567(uParam0->f_912[uParam0->f_1584 /*41*/], 512))
			{
				iVar1 |= 128;
			}
			if (!func_613(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (func_557(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				func_1070(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		
		case 9:
			if (func_632(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!func_168(uParam0, 8192))
				{
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				func_618(uParam0, 131072);
				func_1070(uParam0, 11);
			}
			break;
		
		case 11:
			break;
	}
	return 0;
}

void func_1062(char* sParam0)
{
	if (sParam0->f_16)
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && CAM::_0xDD0B7C5AE58F721D(sParam0))
		{
			CAM::_0x798BE43C9393632B(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

void func_1063(var uParam0, int iParam1)
{
	uParam0->f_1562.f_1 = (uParam0->f_1562.f_1 - (uParam0->f_1562.f_1 && iParam1));
}

int func_1064(var uParam0, char* sParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	char cVar20[64];
	int iVar28;
	vector3 vVar29;
	int iVar32;
	int iVar33;
	
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_1785);
	if (!bVar0)
	{
		uParam0->f_1785 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_1785);
	if (!bVar1)
	{
		return 0;
	}
	func_1644(uParam0);
	func_1025(uParam0, iParam2);
	if (func_168(uParam0, 16384))
	{
		func_1024(uParam0);
	}
	Var2.f_10 = joaat("weapon_unarmed");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		func_1645(uParam0, iVar18);
		if (func_1646(uParam0, 0))
		{
			if (func_1647(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					(uParam0->f_912[iVar16 /*41*/])->f_27 = 0;
					func_1648(uParam0, 1, &((uParam0->f_912[iVar16 /*41*/])->f_1));
					func_1648(uParam0, 2, &((uParam0->f_912[iVar16 /*41*/])->f_1.f_1));
					func_1648(uParam0, 3, &((uParam0->f_912[iVar16 /*41*/])->f_1.f_2));
					func_1648(uParam0, 4, &((uParam0->f_912[iVar16 /*41*/])->f_11));
					func_1648(uParam0, 5, &((uParam0->f_912[iVar16 /*41*/])->f_12));
					func_1648(uParam0, 6, &((uParam0->f_912[iVar16 /*41*/])->f_13));
					func_1648(uParam0, 7, &((uParam0->f_912[iVar16 /*41*/])->f_4));
					func_1648(uParam0, 8, &((uParam0->f_912[iVar16 /*41*/])->f_4.f_1));
					func_1648(uParam0, 9, &((uParam0->f_912[iVar16 /*41*/])->f_4.f_2));
					func_1648(uParam0, 10, &((uParam0->f_912[iVar16 /*41*/])->f_7));
					func_1648(uParam0, 11, &((uParam0->f_912[iVar16 /*41*/])->f_7.f_1));
					func_1648(uParam0, 12, &((uParam0->f_912[iVar16 /*41*/])->f_7.f_2));
					func_1648(uParam0, 13, &((uParam0->f_912[iVar16 /*41*/])->f_10));
					func_1648(uParam0, 14, &((uParam0->f_912[iVar16 /*41*/])->f_14));
					func_1648(uParam0, 15, &((uParam0->f_912[iVar16 /*41*/])->f_15));
					if (func_1647(uParam0, 16, &iVar17))
					{
						uParam0->f_912[iVar16 /*41*/] = iVar17;
					}
					func_1648(uParam0, 19, &((uParam0->f_912[iVar16 /*41*/])->f_16));
					func_1648(uParam0, 20, &((uParam0->f_912[iVar16 /*41*/])->f_17));
					func_1648(uParam0, 31, &((uParam0->f_912[iVar16 /*41*/])->f_18));
					if (func_1649(uParam0, 21, &cVar20))
					{
						MemCopy(&((uParam0->f_912[iVar16 /*41*/])->f_19), {cVar20}, 3);
					}
					if (func_1649(uParam0, 22, &cVar20))
					{
						MemCopy(&((uParam0->f_912[iVar16 /*41*/])->f_22), {cVar20}, 3);
					}
					func_1647(uParam0, 23, &((uParam0->f_912[iVar16 /*41*/])->f_25));
					func_1650(uParam0, &((uParam0->f_912[iVar16 /*41*/])->f_27));
					if (func_1649(uParam0, 35, &((uParam0->f_912[iVar16 /*41*/])->f_30)))
					{
					}
					if (func_1647(uParam0, 39, &iVar17))
					{
						(uParam0->f_912[iVar16 /*41*/])->f_39 = iVar17;
					}
					else
					{
						(uParam0->f_912[iVar16 /*41*/])->f_39 = 1;
					}
					if (func_1648(uParam0, 40, &((uParam0->f_912[iVar16 /*41*/])->f_40)))
					{
						func_1627(uParam0->f_912[iVar16 /*41*/], 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[iVar16 /*41*/])->f_30)))
					{
						(uParam0->f_912[iVar16 /*41*/])->f_30 = { func_864() };
					}
					(uParam0->f_912[iVar16 /*41*/])->f_29 = 1;
					if (uParam0->f_1791 == -1 || (uParam0->f_912[uParam0->f_1791 /*41*/])->f_17 < (uParam0->f_912[iVar16 /*41*/])->f_17)
					{
						uParam0->f_1791 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if ((uParam0->f_912[iVar18 /*41*/])->f_29)
		{
			vVar29 = { vVar29 + (uParam0->f_912[iVar18 /*41*/])->f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1796 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if ((uParam0->f_912[iVar18 /*41*/])->f_29)
		{
			if (!func_1651(vVar29, (uParam0->f_912[iVar18 /*41*/])->f_1, 5f, 1))
			{
				uParam0->f_1796 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_1645(uParam0, iVar18);
				if (func_1646(uParam0, 45))
				{
					if (func_1647(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							func_1652(uParam0->f_1418[iVar16 /*10*/], 2);
							func_1649(uParam0, 46, uParam0->f_1418[iVar16 /*10*/]);
							if (func_1653(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									func_1652(uParam0->f_1418[iVar16 /*10*/], 1);
								}
							}
							if (func_1647(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									func_1652(uParam0->f_1418[iVar16 /*10*/], 8);
								}
								else if (iVar17 == 2)
								{
									func_1652(uParam0->f_1418[iVar16 /*10*/], 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 27)
			{
				iVar16 = -1;
				func_1645(uParam0, iVar18);
				if (func_1646(uParam0, 50))
				{
					if (func_1647(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					func_1647(uParam0, 43, &(Var2.f_3));
					if (func_1649(uParam0, 52, &cVar20))
					{
						MemCopy(&(Var2.f_4), {cVar20}, 4);
					}
					func_1648(uParam0, 53, &(Var2.f_8));
					if (func_1647(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					func_1653(uParam0, 55, &(Var2.f_11));
					func_1653(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (func_1654(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 27)
						{
							(uParam0->f_3[iVar32 /*13*/])->f_3 = Var2.f_3;
							(uParam0->f_3[iVar32 /*13*/])->f_4 = { Var2.f_4 };
							(uParam0->f_3[iVar32 /*13*/])->f_8 = Var2.f_8;
							(uParam0->f_3[iVar32 /*13*/])->f_10 = Var2.f_10;
							(uParam0->f_3[iVar32 /*13*/])->f_11 = Var2.f_11;
							(uParam0->f_3[iVar32 /*13*/])->f_12 = Var2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (func_1655(Var2.f_1))
							{
								func_618(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			func_1645(uParam0, iVar18);
			if (func_1646(uParam0, 82))
			{
				if (func_1649(uParam0, 83, &cVar20))
				{
					MemCopy(&(uParam0->f_355), {cVar20}, 4);
				}
				func_1649(uParam0, 84, &(uParam0->f_355.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355.f_4)))
				{
					if (uParam0->f_355.f_15 == 1)
					{
						uParam0->f_355.f_4 = { func_238() };
					}
					else if (uParam0->f_355.f_15 == 2)
					{
						uParam0->f_355.f_4 = { func_864() };
					}
					else
					{
						uParam0->f_355.f_4 = { func_864() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				func_1645(uParam0, iVar18);
				if (func_1646(uParam0, 57))
				{
					if (func_1647(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							(uParam0->f_371[iVar16 /*18*/])->f_8 = 0;
							func_1647(uParam0, 58, uParam0->f_371[iVar16 /*18*/]);
							if (func_1647(uParam0, 59, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_1 = func_1656(iVar17);
							}
							if (func_1647(uParam0, 60, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_2 = func_1657(iVar17);
							}
							func_1647(uParam0, 61, &((uParam0->f_371[iVar16 /*18*/])->f_3));
							func_1648(uParam0, 67, &((uParam0->f_371[iVar16 /*18*/])->f_10));
							func_1648(uParam0, 70, &((uParam0->f_371[iVar16 /*18*/])->f_11));
							func_1648(uParam0, 68, &((uParam0->f_371[iVar16 /*18*/])->f_9));
							func_1647(uParam0, 72, &((uParam0->f_371[iVar16 /*18*/])->f_5));
							func_1648(uParam0, 77, &((uParam0->f_371[iVar16 /*18*/])->f_12));
							func_1647(uParam0, 78, &((uParam0->f_371[iVar16 /*18*/])->f_13));
							func_1647(uParam0, 79, &((uParam0->f_371[iVar16 /*18*/])->f_14));
							if (func_1647(uParam0, 73, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_17 = iVar17;
							}
							if (func_1647(uParam0, 75, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_4 = iVar17;
								bVar15 = true;
							}
							func_1648(uParam0, 80, &((uParam0->f_371[iVar16 /*18*/])->f_15));
							if (func_1653(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 1;
								}
							}
							if (func_1653(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 512;
								}
							}
							if (func_1653(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 2;
								}
							}
							if (func_1653(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 16;
								}
							}
							if (func_1653(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 32;
								}
							}
							if (func_1653(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 4;
								}
							}
							if (func_1653(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 64;
								}
							}
							if (func_1653(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 128;
								}
							}
							if (func_1653(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 256;
								}
							}
							if (!bVar15 && (uParam0->f_371[iVar16 /*18*/])->f_2 == 9)
							{
								(uParam0->f_371[iVar16 /*18*/])->f_4 = (uParam0->f_371[iVar16 /*18*/])->f_3;
								(uParam0->f_371[iVar16 /*18*/])->f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							(uParam0->f_371[iVar16 /*18*/])->f_16 = (uParam0->f_371[iVar16 /*18*/])->f_2;
							(uParam0->f_371[iVar16 /*18*/])->f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1790 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				func_1645(uParam0, iVar18);
				if (func_1646(uParam0, 85))
				{
					func_1647(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						func_1653(uParam0, 87, uParam0->f_1241[iVar18 /*22*/]);
						func_1649(uParam0, 96, &((uParam0->f_1241[iVar18 /*22*/])->f_2));
						func_1649(uParam0, 97, &((uParam0->f_1241[iVar18 /*22*/])->f_10));
						func_1648(uParam0, 93, &((uParam0->f_1241[iVar18 /*22*/])->f_18));
						func_1648(uParam0, 94, &((uParam0->f_1241[iVar18 /*22*/])->f_19));
						func_1647(uParam0, 95, &((uParam0->f_1241[iVar18 /*22*/])->f_20));
						(uParam0->f_1241[iVar18 /*22*/])->f_1 = 0;
						func_1658(uParam0, &((uParam0->f_1241[iVar18 /*22*/])->f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				func_1645(uParam0, iVar18);
				if (func_1646(uParam0, 98))
				{
					if (func_1647(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							(uParam0->f_1529[iVar16 /*15*/])->f_10 = 0;
							func_1659(uParam0, 99, uParam0->f_1529[iVar16 /*15*/]);
							func_1659(uParam0, 100, &((uParam0->f_1529[iVar16 /*15*/])->f_6));
							func_1659(uParam0, 101, &((uParam0->f_1529[iVar16 /*15*/])->f_3));
							if (func_1647(uParam0, 102, &iVar17))
							{
								(uParam0->f_1529[iVar16 /*15*/])->f_9 = iVar17;
							}
							func_1650(uParam0, &((uParam0->f_1529[iVar16 /*15*/])->f_10));
							(uParam0->f_1529[iVar16 /*15*/])->f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1785);
			func_618(uParam0, 1);
			func_618(uParam0, 16384);
			func_1660(uParam0);
			return 1;
		}
	}

int func_1065(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1418[iVar0 /*10*/]) && func_1629(uParam0->f_1418[iVar0 /*10*/], 2)) && !func_1629(uParam0->f_1418[iVar0 /*10*/], 16)) && func_1661(uParam0, iVar0))
		{
			if (!ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
			{
				(uParam0->f_1418[iVar0 /*10*/])->f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/], 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
				return 0;
			}
			else if (!ANIMSCENE::_0x95531A4A20CCE7BC((uParam0->f_1418[iVar0 /*10*/])->f_8, 0))
			{
				return 0;
			}
			if (ANIMSCENE::_0xA9016536015DE29D((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout"))
			{
				func_1652(uParam0->f_1418[iVar0 /*10*/], 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
			func_1652(uParam0->f_1418[iVar0 /*10*/], 16);
		}
		iVar0++;
	}
	return 1;
}

void func_1066(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1418[iVar0 /*10*/]) && func_1629(uParam0->f_1418[iVar0 /*10*/], 2))
		{
			iVar1 = 0;
			if (func_1661(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			(uParam0->f_1418[iVar0 /*10*/])->f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/], iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, func_1041(), 64);
	StringCopy(&(Var2.f_8), func_1049(), 64);
	uParam0->f_1604 = { Var2 };
	uParam0->f_1627 = { Var2 };
	if (!func_566(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(func_1041());
		func_1037(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1241[iVar0 /*22*/])->f_2), func_1041()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
			{
				CAM::_0x6A4D224FC7643941(&((uParam0->f_1241[iVar0 /*22*/])->f_2));
				(uParam0->f_1241[iVar0 /*22*/])->f_21 = 1;
			}
		}
		iVar0++;
	}
}

int func_1067(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
		{
			if (!func_1629(uParam0->f_1418[iVar0 /*10*/], 64))
			{
				if (ANIMSCENE::_0x95531A4A20CCE7BC((uParam0->f_1418[iVar0 /*10*/])->f_8, 0))
				{
					func_1662(uParam0, (uParam0->f_1418[iVar0 /*10*/])->f_8);
					ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
					bVar1 = false;
					func_1652(uParam0->f_1418[iVar0 /*10*/], 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_0x477122B8D05E7968((uParam0->f_1418[iVar0 /*10*/])->f_8, 1, 0))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_912)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[iVar0 /*41*/])->f_19)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_912[iVar0 /*41*/])->f_19), "empty"))
		{
			HUD::_0xF66090013DE648D5(&((uParam0->f_912[iVar0 /*41*/])->f_19));
			if (!HUD::_0xD0976CC34002DB57(&((uParam0->f_912[iVar0 /*41*/])->f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (func_566(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(func_1041()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)) && (uParam0->f_1241[iVar0 /*22*/])->f_21) && !CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!func_242(uParam0->f_1781) || uParam0->f_1784 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_0xADF1D53F3B1FE0A7((uParam0->f_1418[iVar0 /*10*/])->f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1784, uParam0->f_1781) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1784);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN((uParam0->f_1418[iVar0 /*10*/])->f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_1068(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2)) && !func_1663((uParam0->f_3[iVar0 /*13*/])->f_2)) && func_891((uParam0->f_3[iVar0 /*13*/])->f_10)) && !func_1655((uParam0->f_3[iVar0 /*13*/])->f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 0, 0))
				{
					if (func_1664((uParam0->f_3[iVar0 /*13*/])->f_10))
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01((uParam0->f_3[iVar0 /*13*/])->f_10))
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if ((uParam0->f_3[iVar0 /*13*/])->f_11)
				{
					if (func_1665(iVar1, 0, 0, 0) != (uParam0->f_3[iVar0 /*13*/])->f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1069(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2) && (uParam0->f_3[iVar0 /*13*/])->f_12)
		{
			func_1666(uParam0->f_3[iVar0 /*13*/]);
		}
		iVar0++;
	}
}

void func_1070(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_257(&(uParam0->f_1765));
}

void func_1071(var uParam0)
{
	func_1667(uParam0);
	func_1668(uParam0);
}

int func_1072(int iParam0)
{
	if (!func_765(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_1073()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_1074(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_387(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_1075(var uParam0)
{
	if (uParam0->f_1581 < 0 || (uParam0->f_371[uParam0->f_1581 /*18*/])->f_4 < 0)
	{
		return -1;
	}
	return (uParam0->f_1418[(uParam0->f_371[uParam0->f_1581 /*18*/])->f_4 /*10*/])->f_8;
}

bool func_1076(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_1077(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

char* func_1078(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		
		case 1:
			return "REGION_BAY_MACOMBS_END";
		
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		
		case 3:
			return "REGION_BAY_LAGRAS";
		
		case 4:
			return "REGION_BAY_LAKAY";
		
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		
		case 8:
			return "REGION_BAY_SERENDIPITY";
		
		case 9:
			return "REGION_BAY_SHADYBELLE";
		
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		
		case 15:
			return "REGION_BGV_FORTRIGGS";
		
		case 16:
			return "REGION_BGV_HANGINGDOG";
		
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		
		case 19:
			return "REGION_BGV_MONTO_REST";
		
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		
		case 22:
			return "REGION_BGV_PRONGHORN";
		
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		
		case 24:
			return "REGION_BGV_SHACK";
		
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		
		case 26:
			return "REGION_BGV_STRAWBERRY";
		
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		
		case 31:
			return "REGION_BLU_COPPERHEAD";
		
		case 32:
			return "REGION_BLU_SISIKA";
		
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		
		case 34:
			return "REGION_CML_DINO_LADY";
		
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		
		case 37:
			return "REGION_GRT_BEECHERS";
		
		case 38:
			return "REGION_GRT_BLACKWATER";
		
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		
		case 52:
			return "REGION_GRZ_COHUTTA";
		
		case 43:
			return "REGION_GRZ_COLTER";
		
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		
		case 54:
			return "REGION_GRZ_THELOFT";
		
		case 55:
			return "REGION_GRE_VETERAN";
		
		case 56:
			return "REGION_GRZ_WAPITI";
		
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		
		case 57:
			return "REGION_GUA_AGUASDULCES";
		
		case 58:
			return "REGION_GUA_CAMP";
		
		case 59:
			return "REGION_GUA_CINCOTORRES";
		
		case 60:
			return "REGION_GUA_LACAPILLA";
		
		case 61:
			return "REGION_GUA_MANICATO";
		
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		
		case 64:
			return "REGION_HRT_CARMODYDELL";
		
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		
		case 66:
			return "REGION_HRT_CROP_FARM";
		
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		
		case 72:
			return "REGION_HRT_LARNEDSOD";
		
		case 73:
			return "REGION_HRT_LOONY_CULT";
		
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		
		case 76:
			return "REGION_HRT_VALENTINE";
		
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		
		case 78:
			return "REGION_ROA_ANNESBURG";
		
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		
		case 63:
			return "REGION_ROA_BEECHERS_C";
		
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		
		case 83:
			return "REGION_ROA_DOVERHILL";
		
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		
		case 90:
			return "REGION_ROA_TRAPPER";
		
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		
		case 92:
			return "REGION_ROA_VANHORNPOST";
		
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		
		case 94:
			return "REGION_SCM_BULGERGLADE";
		
		case 95:
			return "REGION_SCM_CALIGAHALL";
		
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		
		case 105:
			return "REGION_SCM_RHODES";
		
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		
		case 109:
			return "REGION_TAL_COCHINAY";
		
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		
		case 112:
			return "REGION_TAL_TANNERSREACH";
		
		case 113:
			return "REGION_TAL_TRAPPER";
		
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		
		case 120:
			return "REGION_CHO_ARMADILLO";
		
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		
		case 118:
			return "REGION_RIO_FORT_MERCER";
		
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		
		case 128:
			return "REGION_CENTRALUNIONRR";
		
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_1079()
{
	return UILOG::_UILOG_GET_CACHED_OBJECTIVE();
}

void func_1080(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_204(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_157(iParam0);
	}
	if (func_44(((*Global_1347702)[iParam0 /*49*/])->f_13, 256))
	{
		func_161(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 256);
	}
	if (func_29(((*Global_1347702)[iParam0 /*49*/])->f_12, 1024))
	{
		func_164(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_109(iParam0, 0);
	}
	func_158(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[iParam0 /*49*/])->f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1347702)[iParam0 /*49*/])->f_42, iParam4);
		}
		else
		{
			((*Global_1347702)[iParam0 /*49*/])->f_43 = 0;
		}
	}
}

int func_1081(int iParam0)
{
	int iVar0;
	
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1082(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_387(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])))
			{
				func_1670(&iVar0, func_1669(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
		{
			if (func_1671(iVar0, ((*Global_1347702)[iParam0 /*49*/])->f_15, 1, ((*Global_1347702)[iParam0 /*49*/])->f_27, func_724()))
			{
				func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
			}
		}
		else
		{
			func_45(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
	}
}

var func_1083(int iParam0)
{
	var uVar0;
	
	uVar0 = func_823(((*Global_1347702)[iParam0 /*49*/])->f_48);
	func_686(&uVar0, 0, 0, ((*Global_1347702)[iParam0 /*49*/])->f_47, 0, 0, 0, 0);
	return uVar0;
}

bool func_1084(int iParam0, bool bParam1)
{
	return func_824(func_325(), iParam0, bParam1);
}

int func_1085(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_1095(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1086(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 1)
	{
		func_1672(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_1087(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1087(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1672(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1673(1);
	}
}

bool func_1088(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_1089()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_823(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_823(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_824(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_1090(int iParam0)
{
	if (!func_809(iParam0))
	{
		return 0;
	}
	return func_452(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_1091(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1674(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1675(iVar6);
	}
	return iVar5;
}

int func_1092(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1676(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_1093(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_1322(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_1094(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 0;
		
		case 7:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 8:
			return 1;
		
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		
		default:
			break;
	}
	return 0;
}

void func_1095(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_1093(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_1096(2, *uParam0);
		}
		else
		{
			func_1097(2, *uParam0);
		}
	}
	func_1677(uParam0);
}

void func_1096(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_1097(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

int func_1098(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 2139774588:
			return 1;
		
		case 1142025875:
			return 2;
		
		case 1587891565:
			return 4;
		
		case 1877013492:
			return 32;
		
		case -643014279:
			return 64;
		
		case -597116214:
			return 128;
		
		case 551416228:
			return 256;
		
		case 1022576842:
			return 512;
		
		case 953325896:
			return 1024;
		
		case 508358508:
			return 2048;
		
		case -735200598:
			return 4096;
		
		case -856432278:
			return 8192;
		
		case -2010847721:
			return 16384;
		
		case 446961221:
			return 32768;
		
		case -1972216640:
			return 65536;
		
		case 530833824:
			return 131072;
		
		case 1682361219:
			return 262144;
		
		case 158959085:
			return 524288;
		
		case 1919819559:
			return 1048576;
		
		case 1461411082:
			return 2097152;
		
		case -549508280:
			return 4194304;
		
		default:
			break;
	}
	return 0;
}

int func_1099(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 1:
			return -2;
		
		case 2:
			return -5;
		
		case 3:
			return -10;
		
		case 4:
			return -20;
		
		case 5:
			return -40;
		
		case 6:
			return -160;
		
		case 7:
			return -320;
		
		case 8:
			return -480;
		
		case 18:
			return -640;
		
		case 9:
			return 0;
		
		case 10:
			return 1;
		
		case 11:
			return 2;
		
		case 12:
			return 5;
		
		case 13:
			return 10;
		
		case 14:
			return 20;
		
		case 15:
			return 40;
		
		case 16:
			return 160;
		
		case 17:
			return 640;
		
		default:
			break;
	}
	return 0;
}

void func_1100(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	
	iVar0 = func_288();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1678(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_1126(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1481())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_665(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_288();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_289(iVar1);
		func_1680(func_1679(), 0, 4000);
		func_1681(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1682(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_1139(func_658(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1099(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1683(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1225(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1225(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_1139(func_658(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1099(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1683(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1225(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1225(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_658(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_712(10, 1);
	}
}

void func_1101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_1102()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_1103(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1104(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_1105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_203() == -1)
	{
		if (func_1684(iParam0) && func_1685(iParam0))
		{
			func_1686(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_1106(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	*uParam1 = iParam2;
	func_1687(iParam0, uParam1);
	Var0 = { func_1209(iParam0, 0, 1) };
	iVar5 = func_1688(iParam0, &Var0, 0, 0);
	iVar6 = func_1689(iParam0, 0);
	if ((iVar5 > 1 && !func_670()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1124(iParam0, -2051813666))
		{
			func_299(583, 1);
		}
		else
		{
			func_299(582, 0);
		}
	}
	if (func_1690(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1107(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1182(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_1108(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1123(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1691(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1692(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_1295(bParam2), iParam0, 0);
	return iVar2;
}

bool func_1109(int iParam0)
{
	if (func_203() != -1)
	{
		return false;
	}
	return func_1110(iParam0) != 0;
}

int func_1110(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < func_1693())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1694(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_1111(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_1112(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < func_1693())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1111(iVar0))
		{
			if (func_698(func_1694(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1113(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1695(48);
	func_715(0, -1);
}

int func_1114(int iParam0)
{
	if (func_203() != -1)
	{
		return 0;
	}
	return func_452(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_1115(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_1116(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_1117(int iParam0)
{
	if (func_203() != -1)
	{
		return 0;
	}
	return func_452(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_1118(int iParam0)
{
	if (func_203() != -1)
	{
		return 0;
	}
	if (!func_204(iParam0))
	{
		return 0;
	}
	return func_159(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_1119()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_698(func_1696(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1120(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_1102() && (func_1118(38) || func_1114(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		
		case 39:
			if (func_1102() && (func_1118(39) || func_1114(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1697(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		
		case 41:
			if (func_1102() && (func_1118(41) || func_1114(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		
		case 49:
			if (func_1102() && (func_1118(49) || func_1114(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1697(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1698(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1699(iParam0, iVar13, iVar14))
	{
	}
	if (func_1700(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1701(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1702(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1703(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1704(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1121(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_1102() && (func_1118(38) || func_1114(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_1102() && (func_1118(39) || func_1114(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_1102() && (func_1118(49) || func_1114(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_1102() && (func_1118(38) || func_1114(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_651(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1705(func_1116(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_1102() && (func_1118(39) || func_1114(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_1102() && (func_1118(49) || func_1114(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_652(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_1123(int iParam0)
{
	vector3 vVar0;
	
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_1124(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_1125(int iParam0, int iParam1)
{
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_1126(int iParam0)
{
	if (!func_1706(iParam0))
	{
		return 0;
	}
	return func_1707(iParam0);
}

void func_1127(int iParam0)
{
	if (!func_1706(iParam0))
	{
		return;
	}
	func_1708(iParam0);
	func_1709(iParam0);
}

int func_1128(int iParam0)
{
	struct<2> Var0;
	
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_1129(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		
		case 1222378998:
			iVar0 = -764310200;
			break;
		
		case 2074469742:
			iVar0 = -764310200;
			break;
		
		case 480079517:
			iVar0 = -1504859554;
			break;
		
		case 840671577:
			iVar0 = -1504859554;
			break;
		
		case joaat("ammo_molotov"):
			iVar0 = 1885857703;
			break;
		
		case -2006166057:
			iVar0 = 1885857703;
			break;
		
		case 1235846615:
			iVar0 = -1511427369;
			break;
		
		case -228768324:
			iVar0 = 2133046983;
			break;
		
		case -1411922943:
			iVar0 = -1511427369;
			break;
		
		case -834103244:
			iVar0 = -1511427369;
			break;
		
		case 424030678:
			iVar0 = 165751297;
			break;
		
		case 446901936:
			iVar0 = 710736342;
			break;
		
		case -1092841802:
			iVar0 = -462374995;
			break;
		
		case -1452241321:
			iVar0 = 567069252;
			break;
		
		case -1188697038:
			iVar0 = -281894307;
			break;
		
		case 1671758975:
			iVar0 = -1127860381;
			break;
		
		case -893514737:
			iVar0 = -1894785522;
			break;
		
		case -2063089161:
			iVar0 = 469927692;
			break;
		
		case -452897925:
			iVar0 = 1960591597;
			break;
		
		default:
			break;
	}
	if (func_1104(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1710(iVar0) || func_543(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_1130(int iParam0, bool bParam1)
{
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_1131(bool bParam0)
{
	if (func_203() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_1295(bParam0));
}

int func_1132(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1134(iParam0))
	{
		return 0;
	}
	if (!func_1131(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_1133(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	
	iVar0 = func_1130(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_203() == -1)
		{
			func_544(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1711(iVar0);
			}
		}
		if (!func_1690(iParam0, &uVar1, 1, 0, 0))
		{
			func_1686(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1712(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_892(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_892(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_892(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == 494733111 && !func_1481())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_894(iVar0))
				{
					func_892(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_892(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_1433(Global_35, 2, 0, 1);
				if ((((func_891(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_698(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_891(iVar7) && func_698(-1185145312, 1, 0))
				{
					if (!func_892(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_892(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_892(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_299(480, 1);
	}
	return 1;
}

bool func_1134(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_1135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_1134(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_891(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == -2002235300)
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_698(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_1169(func_1713(iParam0), func_1168(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_203() == -1)
		{
			if (func_452(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_299(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_1131(0))
	{
		if (func_1132(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_1174(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_1136(int iParam0)
{
	var uVar0;
	
	if ((iParam0 == -615217896 && !func_690()) || iParam0 != -615217896)
	{
		if (func_1714(Global_35, iParam0, &uVar0))
		{
			func_1022(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_888();
			break;
		
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_888();
			break;
		
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_888();
			break;
		
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1158();
			break;
		
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_1156();
			break;
	}
}

void func_1137(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_1156();
			break;
		
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_1157();
			break;
		
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1158();
			break;
		
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_1159();
			break;
		
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_888();
			break;
		
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1715();
			break;
		
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1716();
			break;
		
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_1138(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

void func_1139(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_1140(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_1141(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_1124(iParam0, -2017733358);
	if (func_1717() < 3)
	{
		if (bVar0)
		{
			if (func_1719(func_1718(iParam0), iParam0))
			{
				func_1169(79, func_1168(func_1718(iParam0)), 1);
			}
			else
			{
				func_1169(78, func_1168(func_1718(iParam0)), 1);
			}
		}
		else
		{
			func_1169(80, func_1168(func_1720(iParam0)), 1);
		}
	}
}

int func_1142()
{
	if (((((func_1721(839908568, 400) || func_1721(-1134030454, 400)) || func_1721(623353496, 400)) || func_1721(-344413337, 400)) || func_1721(-1664948962, 400)) || func_1721(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_1143(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1237(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1722(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1723(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_1144(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_1120(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_1122(51, 0, 0, 0, 0, -1, 0);
			func_1724(8192);
			break;
		
		case 581047644:
			func_1120(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_1122(51, 0, 0, 0, 0, -1, 0);
			func_1724(524288);
			break;
		
		case -644199619:
			func_1120(39, 0, 0, 0, 0, 0, 1, 0);
			func_1122(39, 0, 0, 0, 0, -1, 0);
			func_1725(16);
			break;
		
		case 684296857:
			func_1120(41, 0, 0, 0, 0, 0, 1, 0);
			func_1122(41, 0, 0, 0, 0, -1, 0);
			func_1726(8);
			break;
		
		case 466137807:
			func_1120(49, 0, 0, 0, 0, 0, 1, 0);
			func_1122(49, 0, 0, 0, 0, -1, 0);
			func_1727(16);
			break;
		
		case -1087522507:
			func_1120(43, 0, 0, -1791518714, func_1728(1), 0, -1, 0);
			func_1729(1);
			break;
		
		case -405829000:
			func_1120(43, 0, 0, -2087881550, func_1728(2), 0, -1, 0);
			func_1729(2);
			break;
		
		case 378660860:
			func_1120(43, 0, 0, 1908068621, func_1728(4), 0, -1, 0);
			func_1729(4);
			break;
		
		case 1566111097:
			func_1120(43, 0, 0, 1611247019, func_1728(8), 0, -1, 0);
			func_1729(8);
			break;
		
		case 1276007140:
			func_1120(43, 0, 0, 1319635688, func_1728(16), 0, -1, 0);
			func_1729(16);
			break;
	}
}

void func_1145(int iParam0)
{
	if (func_1730() == 1)
	{
		if (func_1114(39))
		{
			func_299(342, 0);
		}
		else
		{
			func_299(343, 0);
			func_1725(1);
		}
	}
	if (func_1730() >= 30)
	{
		func_299(344, 0);
	}
	func_1120(39, 0, 0, 0, 0, 0, -1, 0);
	func_1122(39, 0, 0, func_1730(), 30, 1, 0);
}

void func_1146(int iParam0)
{
	if (func_1731() == 1)
	{
		if (func_1114(49))
		{
			func_299(409, 0);
		}
		else
		{
			func_299(410, 0);
			func_1727(1);
		}
	}
	if (func_1731() >= 10)
	{
		func_299(411, 0);
	}
	func_1120(49, 0, 0, 0, 0, 0, -1, 0);
	func_1122(49, 0, 0, func_1731(), 10, 1, 0);
}

void func_1147(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_299(437, 0);
			func_299(440, 0);
			func_1732(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_1120(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_1122(51, 0, 0, iVar0, func_1697(-949689219, 20), 1, 0);
			func_1724(1);
			func_1733(-748969569, 0, 0);
			break;
		
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_1732(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_1120(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_1122(51, 0, 0, iVar0, func_1697(-1248968496, 20), 1, 0);
			func_1724(8);
			break;
		
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_1732(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_1120(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_1122(51, 0, 0, iVar0, func_1697(1706369307, 20), 1, 0);
			func_1724(64);
			break;
		
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_1732(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_1120(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_1122(51, 0, 0, iVar0, func_1697(1520110311, 20), 1, 0);
			func_1724(512);
			break;
		
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_299(438, 0);
			func_1732(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_1120(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_1122(51, 0, 0, iVar0, func_1697(-1992824800, 20), 1, 0);
			func_1724(32768);
			break;
		
		default:
			func_299(439, 0);
			break;
	}
}

void func_1148()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_1149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (func_203() == -1)
	{
		if (!func_1114(43))
		{
			if (iParam0 == 281887510)
			{
				func_299(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_299(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_299(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_299(400, 0);
			}
		}
		else if (func_1124(iParam0, 412399755))
		{
			func_1734(-1791518714);
			if (func_1735() == 0)
			{
				func_715(0, 10);
				iVar1 = func_1736(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1737(iParam0) < func_1738(iParam0))
					{
						func_1120(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_1122(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_1114(44))
		{
			if (iParam0 == -222563712)
			{
				func_299(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_299(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_299(401, 0);
			}
		}
		else if (func_1124(iParam0, 709057512))
		{
			func_1734(-2087881550);
			if (func_1735() == 1)
			{
				func_715(0, 10);
				iVar1 = func_1736(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1737(iParam0) < func_1738(iParam0))
					{
						func_1120(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_1122(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_1114(45))
		{
			if (iParam0 == 2116770557)
			{
				func_299(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_299(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_299(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_299(398, 0);
			}
		}
		else if (func_1124(iParam0, -1478961327))
		{
			func_1734(1908068621);
			if (func_1735() == 2)
			{
				func_715(0, 10);
				iVar1 = func_1736(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1739(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_1740(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_1695(48);
					}
					if (func_1737(iParam0) < func_1738(iParam0))
					{
						func_1120(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1122(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1737(iParam0) < func_1738(iParam0))
					{
						func_1120(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1122(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_1114(46))
		{
			if (iParam0 == 2085530337)
			{
				func_299(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_299(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_299(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_299(406, 0);
			}
		}
		else if (func_1124(iParam0, -1238404098))
		{
			func_1734(1611247019);
			if (func_1735() == 3)
			{
				func_715(0, 10);
				iVar1 = func_1736(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1737(iParam0) < func_1738(iParam0))
					{
						func_1120(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_1122(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_1114(47))
		{
			if (iParam0 == -1521783510)
			{
				func_299(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_299(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_299(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_299(403, 0);
			}
		}
		else if (func_1124(iParam0, 1160548794))
		{
			func_1734(1319635688);
			if (func_1735() == 4)
			{
				func_715(0, 10);
				iVar1 = func_1736(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1737(iParam0) < func_1738(iParam0))
					{
						func_1120(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_1122(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1150(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 2116770557)
	{
		if (!func_1739(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_1740(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_1695(48);
		}
	}
}

void func_1151(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_698(func_1741(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1742(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1743(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_203() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_1143(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_1143(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1394529493:
			func_1143(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1262623627:
			func_1143(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1124867377:
			func_1143(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1790920086:
			func_1143(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -2001202686:
			func_1143(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1111063991:
			func_1143(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1576210101:
			func_1143(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 675090918:
			func_1143(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 355838765:
			func_1143(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -343824903:
			func_1143(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1142684684:
			func_1143(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1243851340:
			if (!func_1744())
			{
				func_1143(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		
		case -525490740:
			func_1143(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1736635264:
			func_1143(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1302860970:
			func_1143(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1027115192:
			func_1143(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1064332555:
			func_1143(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1954478446:
			func_1143(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -518592739:
			func_1143(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -2010073778:
			func_1143(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -700133011:
			func_1143(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1415414735:
			func_1143(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 2045548742:
			func_1143(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 830381058:
			func_1143(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1153(int iParam0)
{
	if (func_1114(41))
	{
		func_299(363, 0);
	}
	else
	{
		func_299(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1745(-1865241121);
			func_1746(-642026005);
			func_1747(-642026005);
			func_715(0, 10);
			break;
		
		case -2108314374:
			func_1745(2117142684);
			func_1746(-940584364);
			func_1747(-940584364);
			func_715(0, 10);
			break;
		
		case -1193798153:
			func_1745(-1409326024);
			func_1746(1972645282);
			func_1747(1972645282);
			func_715(0, 10);
			break;
		
		case -787702678:
			func_1745(-641744968);
			func_1746(1667205433);
			func_1747(1667205433);
			func_715(0, 10);
			break;
		
		case -804542901:
			func_1745(-946988203);
			func_1746(1362715885);
			func_1747(1362715885);
			func_715(0, 10);
			break;
		
		case -1696275132:
			func_1745(-646136018);
			func_1746(1053540370);
			func_1747(1053540370);
			func_715(0, 10);
			break;
		
		case -161595323:
			func_1745(-955835837);
			func_1746(-1100103852);
			func_1747(-1100103852);
			func_715(0, 10);
			break;
		
		case -1114363619:
			func_1745(-179276075);
			func_1746(-1409869209);
			func_1747(-1409869209);
			func_715(0, 10);
			break;
		
		case -368407134:
			func_1745(-492711560);
			func_1746(-1760235357);
			func_1747(-1760235357);
			func_715(0, 10);
			break;
		
		case 1997759228:
			func_1745(1764383959);
			func_1746(-138366827);
			func_1747(-138366827);
			func_715(0, 10);
			break;
		
		case 1265573293:
			func_1745(317501533);
			func_1746(-1261163843);
			func_1747(-1261163843);
			func_715(0, 10);
			break;
		
		case -1030441283:
			func_1745(817753087);
			func_1746(-963523016);
			func_1747(-963523016);
			func_715(0, 10);
			break;
		
		case -1490884871:
			func_1745(576606016);
			func_1746(560825326);
			func_1747(560825326);
			func_715(0, 10);
			break;
		
		case -395458616:
			func_1745(814934957);
			func_1746(858269539);
			func_1747(858269539);
			break;
	}
}

void func_1154(int iParam0, int iParam1)
{
	var uVar0;
	
	func_1748(iParam0, iParam1, &uVar0);
}

int func_1155(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_1433(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_1433(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1749("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1750(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1751(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_1156()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_1157()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_1158()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_1159()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_1160(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_1161(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_652(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_1162(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_1163(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_1164(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_1165(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_1166(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_1167(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_1168(int iParam0)
{
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_1169(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_574(iParam0, &iVar0, &iVar1);
	if (!func_575(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_858(iParam0, 1024))
	{
		return;
	}
	func_576(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_1170(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_574(iParam0, &iVar0, &iVar1);
	if (!func_575(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_858(iParam0, 1024))
	{
		return;
	}
	func_576(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_1171()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1693())
	{
		return func_1172();
	}
	iVar4 = (func_1693() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1693())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1752(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1694(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_1172()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1693());
	return func_1694(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_1173(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		
		case 998010398:
			*iParam0 = -324053813;
			break;
		
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_1174(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_1209(iParam0, 0, 1) };
	Var5 = { func_1389(iParam0, Var0, Var0.f_4, 0) };
	return func_1753(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_203() != -1)
	{
		return;
	}
	switch (func_1128(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1754(81053684, 0) <= 0)
			{
				func_1208(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1208(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -999503751:
			iVar0 = func_1755(iParam0);
			if (func_1756(iVar0))
			{
				func_1757(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1208(30, iParam0, 0, 0, 0);
			}
			if (func_1202() == -2125499975 || func_1202() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1208(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1202() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1208(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		
		case -525676072:
			if (!func_1758(-525676072, 0))
			{
				if (func_1759(-525676072, &iVar1))
				{
					func_1208(33, iVar1, 0, 0, 0);
				}
			}
			func_1208(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1760(99217379))
		{
			func_1022(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_1127(24);
		if (func_1155(&iVar2, 0))
		{
			func_892(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1176(int iParam0)
{
	if (func_1124(iParam0, 943695443))
	{
		func_1761(0, iParam0);
	}
	else if (func_1124(iParam0, -2096528786))
	{
		func_1761(1, iParam0);
	}
	else if (func_1124(iParam0, -1094167013))
	{
		func_1761(2, iParam0);
	}
	else if (func_1124(iParam0, 1936654645))
	{
		func_1761(3, iParam0);
	}
	else if (func_1124(iParam0, 1306489306))
	{
		func_1761(4, iParam0);
	}
	else if (func_1124(iParam0, 435762317))
	{
		func_1761(5, iParam0);
	}
	else if (func_1124(iParam0, 1259363210))
	{
		func_1761(6, iParam0);
	}
	else if (func_1124(iParam0, 881398259))
	{
		func_1761(7, iParam0);
	}
	else if (func_1124(iParam0, -541549214))
	{
		func_1761(8, iParam0);
	}
	else if (func_1124(iParam0, 130796156))
	{
		func_1761(-1, iParam0);
	}
}

int func_1177(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	
	Var4.f_1 = 10;
	func_1762(&Var4, 1356624740);
	return func_1763(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_1178(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!func_1104(iParam0, 0))
	{
		return Var0;
	}
	if (func_1124(iParam0, -305066475))
	{
		if (func_203() == -1)
		{
			if (func_1124(iParam0, -537818634))
			{
				return func_658(189951448);
			}
			else
			{
				return func_658(1176172851);
			}
		}
	}
	else if (func_1124(iParam0, -537818634))
	{
		return func_658(-963660207);
	}
	if (func_1124(iParam0, 2084895747))
	{
		return func_658(1694039471);
	}
	return Var2;
}

void func_1179(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_203() == -1)
			{
				if (func_452(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_299(109, 1);
				}
			}
			break;
	}
}

void func_1180(int iParam0, char* sParam1)
{
	char* sVar0;
	
	sVar0 = func_1765(func_1764(0));
	func_1225(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1766(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1181(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_1104(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1767())
	{
		func_1768(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1392(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1392(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_1125(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_1123(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1769(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1770(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_1168(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_1124(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_1168(iParam0));
	}
	func_1225(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_1182(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_1183(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_1184(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1185(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_1186(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;
	
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_1771(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_1771(iParam0, Var2, 1))
				{
					if (func_1772(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1772(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_299(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_139(0, 0, 1))
		{
			func_715(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_1187(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_1188(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		
		case -1704241585:
			iVar0 = 308;
			break;
		
		case -1267972061:
			iVar0 = 309;
			break;
		
		case -142033055:
			iVar0 = 310;
			break;
		
		case 890514341:
			iVar0 = 311;
			break;
		
		case -58963793:
			iVar0 = 312;
			break;
		
		case 1882019322:
			iVar0 = 313;
			break;
		
		case 807302083:
			iVar0 = 314;
			break;
		
		case 617759310:
			iVar0 = 315;
			break;
		
		case -378547623:
			iVar0 = 316;
			break;
		
		case 829545206:
			iVar0 = 317;
			break;
		
		case 891318243:
			iVar0 = 319;
			break;
		
		case 431374225:
			iVar0 = 320;
			break;
		
		case 1619534881:
			iVar0 = 321;
			break;
		
		case -755457379:
			iVar0 = 322;
			break;
		
		case 2141714005:
			iVar0 = 323;
			break;
		
		case 1015404643:
			iVar0 = 324;
			break;
		
		case 983875052:
			iVar0 = 325;
			break;
		
		case -1753730528:
			iVar0 = 326;
			break;
		
		case 2131765035:
			iVar0 = 327;
			break;
		
		case -1740272183:
			iVar0 = 328;
			break;
		
		case 1310680212:
			iVar0 = 329;
			break;
		
		case -1724192342:
			iVar0 = 330;
			break;
		
		case 912296423:
			iVar0 = 331;
			break;
		
		case -566881549:
			iVar0 = 332;
			break;
		
		case 147796381:
			iVar0 = 333;
			break;
		
		case -120865369:
			iVar0 = 334;
			break;
		
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_299(iVar0, 0);
	}
}

void func_1189()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 0);
			func_1773(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_1774();
		}
		return;
	}
	if (!func_452(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_1775();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_1773(1);
}

void func_1190()
{
	if (!func_452(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_672(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_1191()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_1776(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_452(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_1776(1);
}

void func_1192()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_1777(15000, 0, 0, 0, 1);
			func_1776(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_452(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_1233(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1776(1);
}

void func_1193()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_698(1191437462, 1, 0) && !func_159(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_672(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1778(1))
			{
				func_1165(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_698(1119149048, 1, 0) && !func_159(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_672(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1778(2))
			{
				func_1165(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_1778(4))
		{
			func_1165(4);
		}
		if (func_1778(0))
		{
			func_1779(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_698(1191437462, 1, 0))
			{
				func_1196(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_698(1119149048, 1, 0))
			{
				func_1196(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1778(1))
		{
			func_1779(1);
		}
		if (func_1778(2))
		{
			func_1779(2);
		}
		if (func_1778(4))
		{
			func_1779(4);
		}
		if (!func_1778(0))
		{
			func_1165(0);
		}
	}
}

void func_1194()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_452(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_1780() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_544(127400949);
		if (func_892(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1780() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1781(-2055673461, Var1, 1423542233);
		func_1781(-202131179, Var1, -1264898804);
		func_1781(2013836545, Var1, 1592019450);
		func_1781(1497476650, Var1, 1117400455);
		func_1781(1063571467, Var1, 1150213537);
		func_1781(2107224237, Var1, 1598825281);
		func_1781(1747981656, Var1, -712527121);
		func_1781(-1371140647, Var1, 454332195);
		func_1781(-19142973, Var1, 256105670);
		func_1781(-2074737817, Var1, -1328061889);
		func_1781(-1114256243, Var1, -782241404);
		func_1781(-1653277288, Var1, 1669853467);
		func_1781(1869398132, Var1, -1559225678);
		func_1781(459868358, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_1611())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_891(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (WEAPON::_0xD955FEE4B87AFA07(iVar16))
					{
						if (func_1126(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(iVar16))
					{
						if ((func_1126(24) && func_891(iVar15)) && iVar15 != 127400949)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_891(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_1126(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_1195()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_1196(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1691(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_1181(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_698(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_1178(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_1108(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_1108(iParam0, 0, 0) - iParam1) < 0)
		{
			func_1196(iParam0, func_1108(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_1123(iParam0) == -427144552)
	{
		if (!func_1782(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1783(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_1131(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_1181(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1784(iParam0, iParam1);
	return 1;
}

int func_1197(int iParam0)
{
	switch (func_1128(iParam0))
	{
		case -2061583405:
			return 1;
		
		case -1719060085:
			return 1;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 1;
		
		case 81053684:
			return 1;
		
		case -413129408:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_1198(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	switch (func_1128(iParam0))
	{
		case -2061583405:
			bVar0 = func_1785(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		
		case 81053684:
			bVar0 = func_1785(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		
		case -999503751:
			bVar0 = func_1785(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		
		case -525676072:
			bVar0 = func_1785(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		
		case -1719060085:
			bVar0 = func_1785(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		
		case -413129408:
			bVar0 = func_1785(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1786();
	}
	if (bParam1)
	{
		func_1787(0, 0);
	}
}

int func_1199(int iParam0)
{
	struct<5> Var0;
	
	Var0 = { func_1209(iParam0, 1, 0) };
	return func_1210(Var0.f_4);
}

int func_1200(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		
		case -1889597427:
			return 0;
		
		case -1884748965:
			return 32;
		
		case -1586649372:
			return 33;
		
		case -1506259487:
			return 5;
		
		case -1505978566:
			return 22;
		
		case -1489346253:
			return 38;
		
		case -1364808185:
			return 19;
		
		case -1292426046:
			return 8;
		
		case -1197751823:
			return 20;
		
		case -1176744536:
			return 24;
		
		case -1130865351:
			return 31;
		
		case -1130352927:
			return 1;
		
		case -893163968:
			return 17;
		
		case -735900586:
			return 28;
		
		case -676503695:
			return 6;
		
		case -450913544:
			return 18;
		
		case -426430150:
			return 29;
		
		case -358215195:
			return 39;
		
		case -338487716:
			return 11;
		
		case -207860920:
			return 26;
		
		case 99217379:
			return 27;
		
		case 304805134:
			return 21;
		
		case 383349088:
			return 7;
		
		case 389988485:
			return 2;
		
		case 673166414:
			return 25;
		
		case 788010710:
			return 34;
		
		case 1108822547:
			return 10;
		
		case 1145151482:
			return 23;
		
		case 1250092473:
			return 16;
		
		case 1367443060:
			return 4;
		
		case 1422688607:
			return 9;
		
		case 1600962399:
			return 13;
		
		case 1672288269:
			return 15;
		
		case 1742327865:
			return 12;
		
		case 1780904876:
			return 3;
		
		case 1788623170:
			return 30;
		
		case 1849504272:
			return 14;
		
		case 1900541263:
			return 37;
		
		case 1958421083:
			return 35;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1201(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	if (func_203() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_1200(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1788(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_1202()
{
	return Global_1946804->f_1;
}

int func_1203(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	
	Var4 = func_1789(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1791(uParam0, func_1790(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1200(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1792(iVar3) && func_1793(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1794(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_1204(int iParam0, int iParam1)
{
	if (func_203() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_1205(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_1204(iParam0, iParam1) };
	return vVar0.x;
}

void func_1206(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1207(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_1208(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (bParam4)
	{
		func_1368(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1795(Var0);
}

struct<5> func_1209(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_1796(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_1123(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_1389(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_1797(bParam1) };
			if (iParam2 && func_1798(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1387(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1387(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1388(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1799(bParam1) };
			switch (func_1128(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		
		case -2130996531:
			if (func_1800(iParam0, -1823706425))
			{
				Var0 = { func_1389(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1800(iParam0, -1483207246))
			{
				Var0 = { func_1389(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1801(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_1210(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1598(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_1211(int iParam0)
{
	func_1788(Global_1946804->f_1497.f_1[func_1200(iParam0, 1) /*3*/], 2, 6);
	func_1788(Global_1946804->f_1378.f_1[func_1200(iParam0, 1) /*3*/], 2, 6);
}

bool func_1212(int iParam0)
{
	return iParam0 != 0;
}

int func_1213(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (!func_1212(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1214(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

var func_1215(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1802(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1216(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1217(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1218(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1219(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1220(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		
		default:
			break;
	}
	return 30;
}

void func_1221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1803(uParam0, iParam6);
	func_1804(uParam0, iParam5);
	func_1805(uParam0, iParam4);
	func_1806(uParam0, iParam3);
	func_1807(uParam0, iParam2);
	func_1808(uParam0, iParam1);
}

int func_1222(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_1219(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_1218(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_807(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_1215(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_1216(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_1217(iParam0);
	if (iVar5 < 1 || iVar5 > func_1220(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_1223(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1224(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_1691(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1749("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1750(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_891(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1751(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1751(iVar1);
	}
	return 0;
}

var func_1225(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;
	
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1809(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1226()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1810(iVar1);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1811(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1227()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1810(iVar0);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1811(iVar1)))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(func_1811(iVar1), true);
		}
		iVar0++;
	}
}

void func_1228(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_387(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_1229()
{
	return (func_84(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

int func_1230(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	
	if (func_203() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_1104(iVar0, 0))
	{
		return 0;
	}
	if (!func_1812(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1813(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_1124(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_1209(iVar0, 0, 1) };
	iVar10 = func_1814(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1815(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1816(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_672(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	func_1777(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

void func_1231(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1225(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_1232(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;
	
	if (func_203() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_1233(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1722(iParam0, sParam4, iParam5);
	}
	func_1723(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_1234(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	sVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1817())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(sVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = sVar1;
	if (func_1817())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_0xE6DC9B21AC7A8729(func_103(iParam0), iVar3, sVar1, iParam3);
	iVar4 = func_105(iParam0);
	if (func_104(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_104(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1818(1, sVar1);
					func_1818(8, sVar1);
					func_1818(7, sVar1);
					break;
				
				case 12:
					func_1818(6, sVar1);
					break;
				
				case 53:
					func_1818(3, sVar1);
					func_1818(7, sVar1);
					func_1818(4, sVar1);
					break;
				
				case 20:
					func_1818(8, sVar1);
					break;
				
				case 19:
					func_1818(1, sVar1);
					func_1818(2, sVar1);
					break;
				
				case 24:
					func_1818(3, sVar1);
					func_1818(9, sVar1);
					func_1818(20, sVar1);
					break;
				
				case 28:
					func_1818(1, sVar1);
					break;
				
				case 34:
					func_1818(23, sVar1);
					func_1818(2, sVar1);
					func_1818(18, sVar1);
					break;
				
				case 29:
					func_1818(0, sVar1);
					func_1818(9, sVar1);
					break;
				
				case 37:
					break;
				
				case 58:
					break;
				
				case 57:
					func_1818(0, sVar1);
					func_1818(3, sVar1);
					func_1818(2, sVar1);
					func_1818(11, sVar1);
					func_1818(6, sVar1);
					func_1818(25, sVar1);
					func_1818(24, sVar1);
					break;
			}
			break;
		
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1818(5, sVar1);
					break;
				
				case 63:
					func_1818(1, sVar1);
					func_1818(3, sVar1);
					break;
				
				case 37:
					func_1818(23, sVar1);
					break;
				
				case 116:
					break;
			}
			break;
		
		case 11:
			if (iParam0 == func_456(0, 10, 11, 2116153146))
			{
				func_1818(7, sVar1);
				func_1818(4, sVar1);
			}
			else if (iParam0 == func_456(0, 7, 11, -379687487))
			{
				func_1818(8, sVar1);
				func_1818(15, sVar1);
			}
			else if (iParam0 == func_456(0, 8, 11, -1386089015))
			{
				func_1818(3, sVar1);
			}
			else if (iParam0 == func_456(0, 11, 11, -1952009645))
			{
				func_1818(6, sVar1);
				func_1818(3, sVar1);
			}
			else if (iParam0 == func_456(0, 12, 11, 2065895756))
			{
				func_1818(9, sVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1819()));
	if (!func_491(629))
	{
		func_299(629, 0);
	}
}

int func_1235(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_1236(int iParam0, var uParam1, var uParam2)
{
	if (!func_1235(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_1237(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;
	
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (iParam1 && func_698(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_1104(iVar25, 0) && func_1124(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_1238(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_55(iParam0))
	{
		return 0;
	}
	uVar0 = func_346(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1239(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

int func_1240(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_1102();
	bVar1 = false;
	if (bVar0 && !func_1820(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1820(37)) && !func_1820(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1820(43)) && !func_1820(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*uParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_1821(0) == 1)
		{
			*uParam0 = 1;
		}
		if (func_1821(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*uParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_1241()
{
	return Global_40.f_1095.f_3054;
}

int func_1242(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_420;
}

int func_1243(int iParam0, var uParam1)
{
	if (!func_1822(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1244()
{
	if (func_1102())
	{
		if (!func_1820(3))
		{
			return func_1823(43);
		}
		if (func_1820(38) && !func_1820(43))
		{
			return func_1824(8);
		}
	}
	return 0;
}

bool func_1245(int iParam0)
{
	if (!func_322(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_1825(iParam0));
}

Vector3 func_1246(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;
	
	func_1243(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
	}
	return vVar5;
}

int func_1247(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	
	if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_1826(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1243(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_1827(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1248(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_1828(iParam0);
	if (func_735(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (uParam1 || iVar0 == -1);
}

int func_1249(int iParam0)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_1243(15, &Var0))
	{
		return 0;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var0))
	{
	}
	return uVar5;
}

int func_1250(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	
	if (bParam5)
	{
		if (func_1829(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!bParam7 || func_1830(5))
	{
		if (func_1831(iParam3, iParam4))
		{
			return 0;
		}
	}
	iVar0 = func_1832(vParam0);
	if (bParam6)
	{
		iVar1 = func_172(vParam0, 1);
		if (func_210(iVar1) || func_1833(iVar0, 1))
		{
			return 0;
		}
	}
	if (!func_1834(iParam3, iParam4))
	{
		return 0;
	}
	if (!func_1835())
	{
		if (func_1836(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam8))
	{
		if (!func_1837(iVar0))
		{
			return 0;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_172(vParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (!func_1838(iParam3, iParam4))
	{
		return 0;
	}
	if (func_1839(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return 0;
		}
	}
	if (!func_1840(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return 0;
		}
	}
	if (func_1102())
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iParam8))
		{
			if (!VOLUME::_0xF256A75210C5C0EB(iParam8, vParam0))
			{
				return 0;
			}
		}
		if (func_1841(vParam0, fParam10) || func_1842(vParam0, fParam10))
		{
			return 0;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return 0;
		}
	}
	return 1;
}

void func_1251(int* iParam0)
{
	MISC::_COPY_MEMORY(iParam0, &(Global_1879534->f_7301), 243);
}

int func_1252()
{
	if (func_1820(43) && !func_1820(44))
	{
		return 0;
	}
	if (func_1820(67) && func_1843() != 8)
	{
		return 0;
	}
	return 1;
}

float func_1253(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_1254(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

var func_1255(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_1140(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

float func_1256(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_1257(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_658(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1258()
{
	int iVar0;
	
	if (func_433(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_433(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_433(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_433(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_433(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_433(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_433(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_433(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_433(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_1259(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_1260()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1844(iVar0);
		if (func_433(func_1845(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1261(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1262(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	ENTITY::IS_ENTITY_DEAD(Global_35);
	*uParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 += 6;
	iVar0 = func_1108(-1845241476, 0, 0);
	iVar1 = func_1108(1654063339, 0, 0);
	iVar2 = func_1108(1623931083, 0, 0);
	*uParam0 = (*uParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_1263(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_1138(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1264()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1846(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

var func_1265(var uParam0, var uParam1)
{
	var uVar0;
	
	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

void func_1266(int iParam0, int iParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || iParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_313(Global_1898330[iParam0]);
		func_1374(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

void func_1267(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

int func_1268(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		
		case -2106214197:
			return 104;
		
		case -2101264851:
			return 195;
		
		case -2073072369:
			return 59;
		
		case -2069570138:
			return 25;
		
		case -2066272360:
			return 357;
		
		case -2058120606:
			return 197;
		
		case -2038424081:
			return 49;
		
		case -2034257789:
			return 92;
		
		case -2022369555:
			return 265;
		
		case -2021582629:
			return 112;
		
		case -2020023971:
			return 278;
		
		case -1957523409:
			return 208;
		
		case -1952856164:
			return 165;
		
		case -1949204933:
			return 276;
		
		case -1925798111:
			return 41;
		
		case -1861414976:
			return 353;
		
		case -1852605133:
			return 10;
		
		case -1847672446:
			return 376;
		
		case -1840704908:
			return 289;
		
		case -1838712533:
			return 26;
		
		case -1838352012:
			return 57;
		
		case -1835851517:
			return 56;
		
		case -1831552326:
			return 123;
		
		case -1825294305:
			return 266;
		
		case -1824738758:
			return 277;
		
		case -1818850842:
			return 253;
		
		case -1799960545:
			return 257;
		
		case -1764522338:
			return 372;
		
		case -1763509974:
			return 141;
		
		case -1741667789:
			return 64;
		
		case -1738165526:
			return 3;
		
		case -1718674470:
			return 23;
		
		case -1717960576:
			return 61;
		
		case -1711895055:
			return 13;
		
		case -1706438978:
			return 233;
		
		case -1700452710:
			return 53;
		
		case -1674179981:
			return 55;
		
		case -1666278201:
			return 33;
		
		case -1612662716:
			return 201;
		
		case -1610966108:
			return 322;
		
		case -1582926490:
			return 146;
		
		case -1579419919:
			return 147;
		
		case -1558439474:
			return 301;
		
		case -1556423728:
			return 218;
		
		case -1532284567:
			return 116;
		
		case -1530132748:
			return 311;
		
		case -1524512402:
			return 209;
		
		case -1523910291:
			return 155;
		
		case -1455998786:
			return 338;
		
		case -1447311849:
			return 215;
		
		case -1436021162:
			return 172;
		
		case -1433686245:
			return 12;
		
		case -1425209566:
			return 32;
		
		case -1419919497:
			return 22;
		
		case -1414537028:
			return 73;
		
		case -1405998267:
			return 105;
		
		case -1344601768:
			return 314;
		
		case -1340339190:
			return 331;
		
		case -1329135070:
			return 140;
		
		case -1318987693:
			return 222;
		
		case -1311865656:
			return 37;
		
		case -1296807958:
			return 320;
		
		case -1283202000:
			return 321;
		
		case -1282804314:
			return 270;
		
		case -1278074582:
			return 171;
		
		case -1271608261:
			return 98;
		
		case -1257057567:
			return 21;
		
		case -1241340344:
			return 300;
		
		case -1236261996:
			return 235;
		
		case -1232809834:
			return 113;
		
		case -1230112817:
			return 170;
		
		case -1223121209:
			return 126;
		
		case -1215445344:
			return 131;
		
		case -1209597203:
			return 333;
		
		case -1206122982:
			return 156;
		
		case -1187950766:
			return 45;
		
		case -1179948750:
			return 136;
		
		case -1170496998:
			return 46;
		
		case -1164215952:
			return 234;
		
		case -1151084372:
			return 124;
		
		case -1145519186:
			return 100;
		
		case -1124061431:
			return 242;
		
		case -1123615607:
			return 29;
		
		case -1080627546:
			return 378;
		
		case -1077783786:
			return 194;
		
		case -1063147448:
			return 151;
		
		case -1062490780:
			return 79;
		
		case -1060078174:
			return 239;
		
		case -1056767524:
			return 176;
		
		case -1053549743:
			return 58;
		
		case -1029225159:
			return 106;
		
		case -1014145132:
			return 288;
		
		case -978957786:
			return 251;
		
		case -959357075:
			return 36;
		
		case -950054349:
			return 152;
		
		case -939420910:
			return 44;
		
		case -939114198:
			return 221;
		
		case -919512195:
			return 40;
		
		case -911126844:
			return 336;
		
		case -897750037:
			return 334;
		
		case -895073533:
			return 356;
		
		case -879507474:
			return 236;
		
		case -868076593:
			return 84;
		
		case -857964358:
			return 83;
		
		case -853383233:
			return 65;
		
		case -851626677:
			return 339;
		
		case -828139293:
			return 260;
		
		case -811637947:
			return 245;
		
		case -796902762:
			return 88;
		
		case -792853067:
			return 254;
		
		case -789397228:
			return 262;
		
		case -785605431:
			return 250;
		
		case -781631220:
			return 345;
		
		case -764163380:
			return 228;
		
		case -748969569:
			return 78;
		
		case -741351766:
			return 60;
		
		case -736853952:
			return 366;
		
		case -734416508:
			return 340;
		
		case -699277634:
			return 4;
		
		case -693828600:
			return 323;
		
		case -683458244:
			return 80;
		
		case -666014935:
			return 157;
		
		case -664512648:
			return 67;
		
		case -664252410:
			return 191;
		
		case -644722288:
			return 261;
		
		case -640663440:
			return 214;
		
		case -639037538:
			return 185;
		
		case -628542779:
			return 71;
		
		case -622554983:
			return 370;
		
		case -618620429:
			return 187;
		
		case -545450213:
			return 377;
		
		case -538889627:
			return 175;
		
		case -538880323:
			return 174;
		
		case -534215902:
			return 130;
		
		case -524787708:
			return 352;
		
		case -524145696:
			return 117;
		
		case -523522517:
			return 364;
		
		case -515561750:
			return 238;
		
		case -503955743:
			return 249;
		
		case -502473159:
			return 343;
		
		case -502324015:
			return 8;
		
		case -491981251:
			return 186;
		
		case -468693731:
			return 111;
		
		case -464836488:
			return 268;
		
		case -460024530:
			return 316;
		
		case -434590080:
			return 225;
		
		case -404698347:
			return 205;
		
		case -397760715:
			return 143;
		
		case -389056691:
			return 272;
		
		case -360036154:
			return 368;
		
		case -356975260:
			return 103;
		
		case -355531636:
			return 337;
		
		case -351362068:
			return 220;
		
		case -350863510:
			return 162;
		
		case -349064220:
			return 362;
		
		case -334729750:
			return 69;
		
		case -333135263:
			return 361;
		
		case -330120947:
			return 360;
		
		case -306246697:
			return 375;
		
		case -299522880:
			return 213;
		
		case -270094635:
			return 267;
		
		case -261141318:
			return 30;
		
		case -259123672:
			return 244;
		
		case -254562075:
			return 132;
		
		case -238080464:
			return 121;
		
		case -233743613:
			return 273;
		
		case -223469678:
			return 204;
		
		case -220282381:
			return 139;
		
		case -191424539:
			return 149;
		
		case -182889087:
			return 177;
		
		case -154581735:
			return 309;
		
		case -150493654:
			return 97;
		
		case -144653976:
			return 219;
		
		case -129643890:
			return 11;
		
		case -108780030:
			return 317;
		
		case -108307814:
			return 28;
		
		case -99303535:
			return 167;
		
		case -86199844:
			return 145;
		
		case -80522843:
			return 154;
		
		case -76237062:
			return 373;
		
		case -75024673:
			return 258;
		
		case -63926460:
			return 89;
		
		case -61411516:
			return 325;
		
		case -35658630:
			return 24;
		
		case -25901845:
			return 290;
		
		case -9438024:
			return 129;
		
		case -1:
			return 0;
		
		case 0:
			return 1;
		
		case 2639906:
			return 153;
		
		case 8924991:
			return 297;
		
		case 26054262:
			return 248;
		
		case 26245360:
			return 237;
		
		case 38162571:
			return 74;
		
		case 52706132:
			return 243;
		
		case 54073871:
			return 76;
		
		case 74872959:
			return 348;
		
		case 93964309:
			return 358;
		
		case 94263042:
			return 291;
		
		case 106479759:
			return 101;
		
		case 141950038:
			return 114;
		
		case 153152452:
			return 86;
		
		case 168171957:
			return 183;
		
		case 171107021:
			return 381;
		
		case 171499483:
			return 283;
		
		case 187862543:
			return 16;
		
		case 192515737:
			return 14;
		
		case 198200492:
			return 241;
		
		case 210001842:
			return 62;
		
		case 224551212:
			return 142;
		
		case 227918160:
			return 182;
		
		case 229371495:
			return 344;
		
		case 235928616:
			return 286;
		
		case 249726958:
			return 164;
		
		case 269047710:
			return 54;
		
		case 273461605:
			return 81;
		
		case 280705402:
			return 95;
		
		case 282809459:
			return 119;
		
		case 299694527:
			return 275;
		
		case 300221584:
			return 138;
		
		case 302205488:
			return 216;
		
		case 311708813:
			return 198;
		
		case 320943355:
			return 133;
		
		case 330026330:
			return 66;
		
		case 345808947:
			return 287;
		
		case 356365161:
			return 47;
		
		case 371850993:
			return 281;
		
		case 373691918:
			return 188;
		
		case 374115931:
			return 90;
		
		case 405586984:
			return 34;
		
		case 407136781:
			return 173;
		
		case 409602249:
			return 293;
		
		case 417081698:
			return 17;
		
		case 417525590:
			return 303;
		
		case 420709909:
			return 42;
		
		case 426191476:
			return 15;
		
		case 434558613:
			return 199;
		
		case 439465264:
			return 108;
		
		case 440043364:
			return 31;
		
		case 442317566:
			return 302;
		
		case 449774763:
			return 227;
		
		case 459290420:
			return 52;
		
		case 469053995:
			return 231;
		
		case 473295046:
			return 2;
		
		case 476714362:
			return 232;
		
		case 478884033:
			return 148;
		
		case 479419429:
			return 305;
		
		case 509781469:
			return 350;
		
		case 514932331:
			return 246;
		
		case 522677506:
			return 279;
		
		case 526003171:
			return 355;
		
		case 527226204:
			return 159;
		
		case 544152906:
			return 115;
		
		case 559573222:
			return 252;
		
		case 582380806:
			return 326;
		
		case 588987611:
			return 179;
		
		case 618699440:
			return 77;
		
		case 630808005:
			return 128;
		
		case 651395116:
			return 294;
		
		case 657241756:
			return 189;
		
		case 664571177:
			return 312;
		
		case 665676602:
			return 296;
		
		case 682839815:
			return 327;
		
		case 689024866:
			return 134;
		
		case 689930684:
			return 207;
		
		case 704802028:
			return 178;
		
		case 723021499:
			return 264;
		
		case 747514327:
			return 354;
		
		case 753127042:
			return 48;
		
		case 757752139:
			return 109;
		
		case 784360470:
			return 330;
		
		case 791041526:
			return 18;
		
		case 817925178:
			return 240;
		
		case 868326136:
			return 285;
		
		case 885203519:
			return 379;
		
		case 885378256:
			return 351;
		
		case 929582877:
			return 335;
		
		case 931649776:
			return 224;
		
		case 932909855:
			return 298;
		
		case 945612176:
			return 247;
		
		case 965986934:
			return 19;
		
		case 976539083:
			return 310;
		
		case 1010885152:
			return 7;
		
		case 1015669983:
			return 122;
		
		case 1050128548:
			return 284;
		
		case 1064154891:
			return 110;
		
		case 1067254646:
			return 319;
		
		case 1074873669:
			return 144;
		
		case 1140218954:
			return 27;
		
		case 1151197909:
			return 256;
		
		case 1159471771:
			return 329;
		
		case 1160698568:
			return 135;
		
		case 1164928979:
			return 158;
		
		case 1166612791:
			return 347;
		
		case 1167397384:
			return 307;
		
		case 1177464213:
			return 38;
		
		case 1186594126:
			return 230;
		
		case 1193080109:
			return 184;
		
		case 1203043430:
			return 274;
		
		case 1205826474:
			return 85;
		
		case 1207048789:
			return 169;
		
		case 1213993593:
			return 160;
		
		case 1216784232:
			return 269;
		
		case 1221801385:
			return 374;
		
		case 1238086793:
			return 313;
		
		case 1250636944:
			return 259;
		
		case 1302228510:
			return 315;
		
		case 1306158345:
			return 202;
		
		case 1321892118:
			return 324;
		
		case 1350371763:
			return 20;
		
		case 1350391819:
			return 75;
		
		case 1352699670:
			return 271;
		
		case 1358491857:
			return 263;
		
		case 1360745816:
			return 82;
		
		case 1376646519:
			return 223;
		
		case 1399676951:
			return 210;
		
		case 1410198831:
			return 217;
		
		case 1433244935:
			return 166;
		
		case 1441416901:
			return 211;
		
		case 1446719356:
			return 380;
		
		case 1453909576:
			return 125;
		
		case 1466547629:
			return 120;
		
		case 1478132521:
			return 367;
		
		case 1485195808:
			return 50;
		
		case 1485494263:
			return 102;
		
		case 1488286867:
			return 295;
		
		case 1488453464:
			return 212;
		
		case 1497516462:
			return 5;
		
		case 1500064347:
			return 72;
		
		case 1509509592:
			return 35;
		
		case 1512816328:
			return 168;
		
		case 1517904467:
			return 206;
		
		case 1522511407:
			return 280;
		
		case 1549124796:
			return 342;
		
		case 1557082963:
			return 163;
		
		case 1582370975:
			return 359;
		
		case 1583012985:
			return 304;
		
		case 1591451572:
			return 365;
		
		case 1607768502:
			return 9;
		
		case 1609506757:
			return 107;
		
		case 1626481264:
			return 118;
		
		case 1643531967:
			return 127;
		
		case 1649996811:
			return 181;
		
		case 1660024373:
			return 150;
		
		case 1665756137:
			return 93;
		
		case 1672143046:
			return 383;
		
		case 1691618738:
			return 68;
		
		case 1698972798:
			return 318;
		
		case 1703398561:
			return 332;
		
		case 1703426636:
			return 43;
		
		case 1708045337:
			return 346;
		
		case 1713221411:
			return 137;
		
		case 1743048395:
			return 226;
		
		case 1744443559:
			return 349;
		
		case 1766284049:
			return 94;
		
		case 1776302352:
			return 363;
		
		case 1804403874:
			return 382;
		
		case 1822001510:
			return 200;
		
		case 1846061697:
			return 99;
		
		case 1850082804:
			return 196;
		
		case 1867912207:
			return 70;
		
		case 1884271742:
			return 51;
		
		case 1926308480:
			return 96;
		
		case 1932172605:
			return 328;
		
		case 1944170089:
			return 161;
		
		case 1947931439:
			return 229;
		
		case 1952610440:
			return 203;
		
		case 1954026328:
			return 371;
		
		case 1982676972:
			return 91;
		
		case 2008888900:
			return 180;
		
		case 2016141805:
			return 6;
		
		case 2019386373:
			return 190;
		
		case 2024121624:
			return 193;
		
		case 2024383613:
			return 369;
		
		case 2024769126:
			return 308;
		
		case 2037589949:
			return 63;
		
		case 2051822093:
			return 299;
		
		case 2077022393:
			return 306;
		
		case 2080210939:
			return 282;
		
		case 2091701359:
			return 39;
		
		case 2109952320:
			return 192;
		
		case 2113625508:
			return 341;
		
		case 2127577956:
			return 255;
		
		case 2136753624:
			return 87;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1269(int iParam0)
{
	int iVar0;
	
	iVar0 = func_732(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1847(iVar0);
}

int func_1270(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1848(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1271()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_1272(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_1273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 1969096843;
		
		case 1:
			return 1547859810;
		
		case 3:
			return -503626004;
		
		case 4:
			return 197307092;
		
		case 0:
			return -1947027049;
		
		case 9:
			return -157798026;
		
		case 10:
			return -157798026;
		
		case 11:
			return -167778705;
		
		case 5:
			return -1843616050;
		
		case 12:
			return -941414360;
		
		case 14:
			return -1907186363;
		
		case 15:
			return 1321843639;
		
		case 16:
			return 1872659725;
		
		case 17:
			return 1174781578;
		
		case 18:
			return -189418434;
		
		case 6:
			return 0;
		
		case 8:
			return 0;
		
		case 7:
			return 0;
		
		case 19:
			switch (iParam1)
			{
				case 43:
					return -1843616050;
				
				case 19:
					return 1451433354;
				
				case 18:
					return -1191803341;
				
				case 40:
					return -99531449;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_1274(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 43:
			return func_1392(bParam1, "SCRIPT_RE@HERBALISTCAMP@YARROW_RETURN", "SCRIPT_RE@HERBALISTCAMP@YARROW_INTRO");
		
		case 19:
			return func_1392(bParam1, "SCRIPT_RE@HERBALISTCAMP@HBSASGE_RETURN", "SCRIPT_RE@HERBALISTCAMP@HBSAGE_INTRO");
		
		case 18:
			return func_1392(bParam1, "SCRIPT_RE@HERBALISTCAMP@GCURRANT_RETURN", "SCRIPT_RE@HERBALISTCAMP@GCURRANT_INTRO");
		
		case 40:
			return func_1392(bParam1, "SCRIPT_RE@HERBALISTCAMP@VSNOWDROP_RETURN", "SCRIPT_RE@HERBALISTCAMP@VSNOWDROP_INTRO");
		
		default:
			break;
	}
	return "INVALID";
}

void func_1275(int iParam0, int iParam1)
{
	if (func_1849(iParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
	}
}

int func_1276(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

int func_1277(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_1278(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_1278(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1279(int iParam0)
{
	int iVar0;
	
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1280(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_1282(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_1282(iParam0);
	}
}

int func_1280(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

int func_1281(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_1282(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

void func_1283(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

void func_1284(int iParam0)
{
	int iVar0;
	
	if (!func_765(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_1850(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

void func_1285(int iParam0)
{
	if (func_387(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_1072(iParam0)))
		{
			func_1228(iParam0, 67108864, 1);
			func_755(iParam0, 19, 1);
		}
	}
}

float func_1286(int iParam0)
{
	if (!func_765(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_1287(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = func_1072(iParam0);
	iVar1 = func_757(iParam0, 0);
	func_1851(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_1288(int iParam0)
{
	if (!func_765(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_1289(int iParam0)
{
	if (!func_765(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_1290(int iParam0, int iParam1, bool bParam2)
{
	if (!func_765(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_1291(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_765(iParam0))
	{
		return 0;
	}
	iVar0 = func_763(iParam0);
	if (func_756(iVar0, 0))
	{
		if (func_756(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_1288(iParam0)) || func_1289(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_1852(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1853(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_1854(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_1855(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_1855(iParam0, 0));
					func_1856(iParam0);
				}
			}
			else
			{
				if (func_468(iParam0, 32768, 1))
				{
					iVar2 = func_1855(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_756(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_468(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_1854(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_1855(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_1855(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_1854(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_1857(iParam0, 0);
	return 1;
}

int func_1292(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1858(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_1293(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_768(iParam0))
	{
		return;
	}
	func_1292(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		MISC::SET_BIT((*Global_1935183->f_73[iParam0 /*7*/])[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT((*Global_1935183->f_73[iParam0 /*7*/])[iVar0], iVar1);
	}
}

void func_1294(var uParam0)
{
	struct<5> Var0;
	
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

int func_1295(bool bParam0)
{
	if (func_203() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_1296(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		
		case -1719060085:
			return 16;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 4;
		
		case 81053684:
			return 8;
		
		case -413129408:
			return 32;
		
		default:
			break;
	}
	return 0;
}

void func_1297(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_1298(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

bool func_1299(int iParam0, int iParam1)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

void func_1300(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1860(func_1859(255), 109029619));
	}
	else if (func_339())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1481();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1301(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_1302(var uParam0, bool bParam1)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1860(func_1859(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_339())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1481())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1303(int iParam0)
{
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_1304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;
	
	iParam0 = func_350(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1861(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1301(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1301(iParam0) + 1;
	fVar6 = func_1862(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1313(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_1305(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, -401963276);
	MAP::_0xB059D7BD3D78C16F(iParam0, 231194138);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1012863186);
	MAP::_0xB059D7BD3D78C16F(iParam0, -272772079);
	MAP::_0xB059D7BD3D78C16F(iParam0, 1313031610);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1814032670);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1380599892);
	MAP::_0xB059D7BD3D78C16F(iParam0, 430539302);
	MAP::_0xB059D7BD3D78C16F(iParam0, -995247980);
	MAP::_0xB059D7BD3D78C16F(iParam0, -25056193);
	MAP::_0xB059D7BD3D78C16F(iParam0, -264630352);
}

void func_1306(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_1307(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

int func_1308(struct<2> Param0, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_1309(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_1863(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1310(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_1863(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1 || &Global_17503.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17503.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_1311(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam0, true);
}

float func_1312(float fParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = (2f * BUILTIN::SIN((180f * (fParam0 / func_801(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_1313(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_1314(float fParam0)
{
	float fVar0;
	
	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

Vector3 func_1315(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_978((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_1316(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1317(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_1318(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_1319(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_1320(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

int func_1321(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_1322(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1864(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_1323(var uParam0, bool bParam1, int iParam2)
{
	func_1865(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_1866(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_796(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_1867(1))
						{
							func_796(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_1867(1) || *uParam0 & 8192 != 0))
				{
					func_795(uParam0, 33554432);
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_1868(uParam0))
			{
				uParam0->f_15 = func_259();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_259() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_1869(uParam0);
}

int func_1324(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_1870(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_1871(iParam0, iVar2) <= func_1872(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1325(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_1873(iParam2, 1, 1, 1, 0))
	{
		func_796(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_1874(uParam1, 1);
	func_1875();
}

int func_1326(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1876(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1877(uParam1);
			if (func_1878(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_1879(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_1874(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_1874(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1327(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_1880(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1877(uParam2);
		if (func_1878(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_1879(uParam2)
				{
					func_1874(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1328(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_1870(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_1879(uParam1)
		{
			fVar3 = func_1877(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1329(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_259();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_1330(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_1881(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_1338(uParam2, iParam1))
			{
				func_1874(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_1331(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	if (uParam2->f_12 < IntToFloat(func_1882(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_1338(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_1874(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1332(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_1883(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_1874(uParam2, 1);
					return 1;
				}
				break;
			
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_1874(uParam2, 1);
					return 1;
				}
				break;
			
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_1884(iParam1, vVar0, vVar4))
					{
						func_1874(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_1874(uParam2, 1);
					return 1;
				}
				break;
			
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_1884(iParam1, vVar0, vVar7))
					{
						func_1874(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_1333(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_1870(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_1885(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_1886(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_1887(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1888(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1889(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1334(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_1335(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_259();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_1336(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_1890(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_1891(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1337(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_1338(var uParam0, int iParam1)
{
	if (func_1892(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1339(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_553(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1340()
{
}

int func_1341(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_1893(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_259();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_505(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_259();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_1342()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_259() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_1343(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_1872(uParam0);
	if (uParam0->f_12 > func_789(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_1894(iParam1);
	iVar1 = func_1895(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1344(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1896(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_1345(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_1897(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_1898(uParam1, iParam0))
					{
						if (func_505(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_1346(int iParam0, var uParam1)
{
	if (!func_1899(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_1347(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_259();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1348(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_1349(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_259();
	}
	else if (func_259() - uParam1->f_4) > func_1900(uParam1)
	{
		return func_1901(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_1350(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

int func_1351(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1902(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_834(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_1352(var uParam0, var uParam1)
{
	return func_1903(uParam0, uParam1);
}

void func_1353(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (&uParam0->f_15[iParam1] > -1)
		{
			Stack.Push(uParam0->f_1);
			Stack.Push(&(uParam0->f_15[iParam1]));
			Call_Loc(uParam0->f_6);
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(StackVal, StackVal);
		}
	}
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_8), iParam1);
	uParam0->f_15[iParam1] = -1;
	switch (iParam1)
	{
		case 1:
			uParam0->f_9 = 100;
			break;
		
		case 0:
			uParam0->f_13 = 0;
			uParam0->f_7 = 0;
			break;
		
		case 2:
			uParam0->f_10 = -1f;
			break;
		
		case 3:
			uParam0->f_14 = 0;
			uParam0->f_12 = 0;
			uParam0->f_11 = 0;
			break;
	}
}

bool func_1354(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_1355(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_1356(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_1357(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_1358(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_1357(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1904(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1905(iVar0);
	*uParam0 = 0;
}

bool func_1359(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_1360(int iParam0, var uParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return 0;
	}
	if (iParam0 == 71)
	{
		return 0;
	}
	if ((uParam1 && MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27)) && ((*Global_1835011)[iParam0 /*74*/])->f_21 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_1361(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1906((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

bool func_1362()
{
	return Global_1905944->f_5693 != -1;
}

bool func_1363()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_1364()
{
	var uVar0;
	
	uVar0 = Global_1905944->f_5695;
	Global_1905944->f_5695 = 0;
	return uVar0;
}

char* func_1365(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return "Arthur";
		
		case -1464743433:
			return "Abe";
		
		case 1483156731:
			return "EdmundLowry";
		
		case -1418951751:
			return "ABERDEENPIGFARMER";
		
		case 2029634351:
			return "ABERDEENSISTER";
		
		case -288068792:
			return "AbigailRoberts";
		
		case 513427234:
			return "AlbertMason";
		
		case -121985991:
			return "ArchieDown";
		
		case -205121720:
			return "Baptiste";
		
		case -77509825:
			return "BartholomewBraithwaite";
		
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		
		case 1266159496:
			return "BeauGray";
		
		case -2045269112:
			return "PenelopeBraithwaite";
		
		case 2070393450:
			return "BillWilliamson";
		
		case 477547053:
			return "BraithwaiteServant";
		
		case 1382164045:
			return "CatherineBraithwaite";
		
		case 1407031519:
			return "CharlesSmith";
		
		case -754733870:
			return "CS_CIGCARDGUY";
		
		case 1253299569:
			return "CS_DINOBONESLADY";
		
		case -464684897:
			return "Cleet";
		
		case -820975767:
			return "ColmODriscoll";
		
		case -1765531164:
			return "CreoleGuy";
		
		case -820854800:
			return "SDDoctor_01";
		
		case 382040614:
			return "DaleMaroney";
		
		case 1944593012:
			return "Dutch";
		
		case -450226655:
			return "EdithDown";
		
		case -1920451728:
			return "Fussar";
		
		case 1514128030:
			return "cs_fishcollector";
		
		case -1865855539:
			return "Bronte";
		
		case -1629501717:
			return "GuidoMartelli";
		
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		
		case -1769295812:
			return "GarethBraithwaite";
		
		case 1020041649:
			return "GenStoryFemale";
		
		case -639059862:
			return "GenStoryMale";
		
		case -920985758:
			return "Leon";
		
		case -1154137714:
			return "GeraldBraithwaite";
		
		case 1225208808:
			return "HoseaMatthews";
		
		case 1912073755:
			return "JackMarston";
		
		case -631664452:
			return "JackMarston_Teen";
		
		case 4991732:
			return "Jamie";
		
		case 1843625996:
			return "JavierEscuella";
		
		case 1815090590:
			return "JimCalloway";
		
		case -446093729:
			return "Joe";
		
		case 95866989:
			return "JohnMarston";
		
		case 2100656433:
			return "CS_JOHNWEATHERS";
		
		case 1006468445:
			return "JosiahTrelawny";
		
		case -1707202053:
			return "Karen";
		
		case 358502875:
			return "MrsAdler";
		
		case 1939579094:
			return "Kieran";
		
		case -100461901:
			return "LeoStrauss";
		
		case 1304311224:
			return "LondonderrySon";
		
		case -1690877284:
			return "MaryBeth";
		
		case 1051047356:
			return "MaryLinton";
		
		case -566878875:
			return "MicahBell";
		
		case -346700962:
			return "MollyOshea";
		
		case -272634447:
			return "CS_MrLinton";
		
		case 984264800:
			return "MrPearson";
		
		case 1367851675:
			return "MrsLondonderry";
		
		case -2075588078:
			return "Mud2BigGuy";
		
		case 2115504616:
			return "ProfessorBell";
		
		case 1618031732:
			return "RevSwanson";
		
		case -265719023:
			return "CS_Samaritan";
		
		case -1483559144:
			return "StrDeputy_01";
		
		case -572941403:
			return "StrDeputy_02";
		
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		
		case 1695129705:
			return "SusanGrimshaw";
		
		case 1407740785:
			return "TavishGray";
		
		case 1231309423:
			return "TheodoreLevin";
		
		case 65010948:
			return "ThomasDown";
		
		case 1038525765:
			return "Tilly";
		
		case -969464097:
			return "Uncle";
		
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		
		case -1884146832:
			return "CS_VALSHERIFF";
		
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		
		case -522739022:
			return "Sean";
		
		case -122790003:
			return "Lenny";
		
		case 1276534479:
			return "Hercule";
		
		case -781994133:
			return "CreoleCaptain";
		
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		
		case 1999476738:
			return "RingMaster";
		
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		
		case 1439158431:
			return "LillyMillet";
		
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		
		case 525529657:
			return "A_M_M_VALFARMER_01";
		
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		
		case 2041494024:
			return "NBXExecuted";
		
		case -944019243:
			return "RHODEPUTY_01";
		
		case -949242502:
			return "RHDSHERIFF_01";
		
		case -1745321414:
			return "LeighGray";
		
		case -1038436471:
			return "Horse_01";
		
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		
		case -1161832176:
			return "TomDickens";
		
		case -1632694866:
			return "DavidGeddes";
		
		case 1446935015:
			return "ANSEL_ATHERTON";
		
		case -1101883765:
			return "CS_Wrobel";
		
		case joaat("a_c_cow"):
			return "COW";
		
		case 195700131:
			return "BULL";
		
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		
		case -896926592:
			return "A_C_DOGLION_01";
		
		case -695175124:
			return "Handler";
		
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		
		case -1049237750:
			return "NbxReceptionist_01";
		
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		
		case -2075028835:
			return "CHAINPRISONER_01";
		
		case -211291960:
			return "CHAINPRISONER_02";
		
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		
		case -1614719852:
			return "DUNCANGEDDES";
		
		case -167880668:
			return "ANGUSGEDDES";
		
		case 743219360:
			return "EvelynMiller";
		
		case -2086875988:
			return "SISTERCALDERON";
		
		case -46607261:
			return "EDGARROSS";
		
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		
		case 1057932105:
			return "StationWorker";
		
		case 1294255258:
			return "LEVISIMON";
		
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		
		case 1772321403:
			return "A_C_DONKEY_01";
		
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		
		case -1874017143:
			return "U_M_O_ValBartender_01";
		
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		
		case 482703333:
			return "BrotherDorkins";
		
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		
		case -1772051411:
			return "EagleFlies";
		
		case -2046943672:
			return "CS_RAINSFALL";
		
		case 830712509:
			return "A_M_M_WapWarriors_01";
		
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		
		case 988668512:
			return "LemiuxAssistant";
		
		case -1608851079:
			return "p_keys01x";
		
		case 624882545:
			return "CS_BALLOONOPERATOR";
		
		case -1820002752:
			return "Worker1";
		
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		
		case -1124266369:
			return "A_C_BEAR_01";
		
		case 960530301:
			return "MARSHALL_THURWELL";
		
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		
		case -290265603:
			return "cs_sd_streetkid_01";
		
		case 1861707396:
			return "cs_sd_streetkid_02";
		
		case 68512371:
			return "ObediahHinton";
		
		case 774211111:
			return "PoisonWellShaman";
		
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		
		case -1258801034:
			return "Jules";
		
		case -1466017978:
			return "MRDEVON";
		
		case 1101050871:
			return "MRWAYNE";
		
		case -1135378761:
			return "PAYTAH";
		
		case 1812458547:
			return "CS_VALDEPUTY_01";
		
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		
		case 1086659483:
			return "S_M_M_BANKCLERK_01";
		
		case 1112571710:
			return "U_M_M_NBXBRONTEASC_01";
		
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_1366(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1367(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_1368(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1369(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1370(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_348, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_348, sParam1, iParam2, iParam3);
}

void func_1371(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

char* func_1372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "musicData/triggers/trigger(%i)";
		
		case 1:
			return ":EVENT_INDEX";
		
		case 2:
			return ":EVENT_TYPE";
		
		case 3:
			return ":EVENT_LABEL";
		
		case 4:
			return ":EVENT_FLAGS";
		
		case 5:
			return ":EVENT_START";
		
		case 6:
			return ":EVENT_START_INT";
		
		case 7:
			return ":EVENT_START_INT2";
		
		case 8:
			return ":EVENT_END";
		
		case 9:
			return ":EVENT_END_INT";
		
		case 10:
			return ":EVENT_END_INT2";
		
		case 11:
			return ":EVENT_PED_USEAGE";
		
		case 12:
			return "musicData/entities/entity(%i)";
		
		case 13:
			return ":INDEX";
		
		case 14:
			return ":MODEL_NAME";
	}
	return "";
}

void func_1373(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_1907(iParam1))
		{
			func_1908(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_1909(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_1910(iParam0, 0);
			bVar0 = true;
		}
		func_1911(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_1374(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_314(iParam0);
	*uParam1 = func_315(iParam0);
	*uParam2 = func_316(iParam0);
}

void func_1375(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

void func_1376(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_1380(*uParam0, -1);
		func_1381(*uParam0, 0);
		func_1382(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_36307[*uParam0]);
		}
	}
	*uParam0 = -1;
}

void func_1377(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_0xB059D7BD3D78C16F(&(Global_36307[iParam0]), iParam1);
		}
	}
}

int func_1378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 5;
		
		case 2:
			return 26;
		
		case 3:
			return 38;
		
		case 4:
			return 69;
		
		case 5:
			return 76;
		
		case 6:
			return 78;
		
		case 7:
			return 92;
		
		case 8:
			return 105;
		
		case 9:
			return 115;
		
		case 10:
			return 120;
		
		default:
			break;
	}
	return -1;
}

int func_1379(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		
		case 5:
			return -1706412559;
		
		case 26:
			return 279909480;
		
		case 38:
			return -412614304;
		
		case 69:
			return -653335484;
		
		case 76:
			return 1777802794;
		
		case 78:
			return 1088576970;
		
		case 92:
			return 412321676;
		
		case 105:
			return 1787788681;
		
		case 115:
			return 1635466279;
		
		case 120:
			return -410502938;
		
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		
		default:
			break;
	}
	return 0;
}

void func_1380(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_1381(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_1382(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

float func_1383()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_1912())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1913(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1913(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1914();
	fVar2 = func_1915();
	fVar3 = func_1916();
	fVar4 = func_1917();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1918()));
	fVar7 = (func_1913(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1919(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1920(3, fVar9, fVar9 > 100f);
	return func_1921(fVar7, -100f, 100f);
}

float func_1384()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_1912())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1913(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1913(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1914();
	fVar2 = func_1915();
	fVar3 = func_1916();
	fVar4 = func_1917();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1918()));
	fVar7 = (func_1913(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1919(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1920(2, fVar9, fVar9 > 100f);
	return func_1921(fVar7, -100f, 100f);
}

float func_1385()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_1912())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1913(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1922())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1923())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1913(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1914();
	fVar2 = func_1915();
	fVar3 = func_1916();
	fVar4 = func_1917();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1918()));
	fVar7 = (func_1913(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1919(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1920(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1913(0);
	}
	return func_1921(fVar7, -100f, 100f);
}

int func_1386(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		
		case 1:
			return 1704602624;
		
		case 2:
			return 1214181762;
		
		case 3:
			return -430578371;
		
		case 4:
			return -730381952;
		
		case 5:
			return -253503777;
		
		case 6:
			return 1352275534;
		
		case 7:
			return 1666399168;
		
		case 8:
			return -1911121386;
		
		case 9:
			return 1756656691;
		
		case 10:
			return -1774867076;
		
		case 11:
			return -421952220;
		
		case 12:
			return -1087003323;
		
		case 13:
			return 1231618917;
		
		case 14:
			return -1183777174;
		
		case 15:
			return -841767082;
		
		case 16:
			return 1043717005;
		
		case 17:
			return 142663787;
		
		case 18:
			return 1718143051;
		
		case 19:
			return -6605744;
		
		case 20:
			return 953047564;
		
		case 21:
			return 769706682;
		
		case 22:
			return 1635590003;
		
		case 23:
			return -2047978619;
		
		case 24:
			return -586319254;
		
		case 25:
			return 249896112;
		
		case 26:
			return -1060513333;
		
		case 27:
			return 1317351007;
		
		case 28:
			return -500478573;
		
		case 29:
			return -806573802;
		
		case 30:
			return -1109949204;
		
		case 31:
			return -740156546;
		
		case 32:
			return -684532710;
		
		case 33:
			return 1158805436;
		
		case 34:
			return -559473670;
		
		case 35:
			return -797147251;
		
		case 36:
			return -382216265;
		
		case 37:
			return 1419177114;
		
		case 38:
			return 1704297235;
		
		case 39:
			return -1139016418;
		
		case 40:
			return 897705377;
		
		case 41:
			return 17961769;
		
		case 42:
			return 205582207;
		
		case 43:
			return 900740963;
		
		case 44:
			return -1369589344;
		
		case 45:
			return -1695823795;
		
		case 46:
			return -41453074;
		
		case 47:
			return 539767227;
		
		case 48:
			return 1210490314;
		
		case 49:
			return -399684751;
		
		case 50:
			return 2138893455;
		
		case 51:
			return -1617010487;
		
		case 52:
			return -832377028;
		
		case 53:
			return -428040245;
		
		case 54:
			return 1279288897;
		
		case 55:
			return -594897905;
		
		case 56:
			return -1360459240;
		
		case 57:
			return 1838428396;
		
		case 58:
			return -1467846997;
		
		case 59:
			return -490610263;
		
		case 60:
			return -1885413079;
		
		case 61:
			return 708884155;
		
		case 62:
			return -134459952;
		
		case 63:
			return -1912136700;
		
		case 64:
			return -1268031552;
		
		case 65:
			return 1177953227;
		
		case 66:
			return 2130805296;
		
		case 67:
			return 38093490;
		
		case 68:
			return -269153218;
		
		case 69:
			return -1995068011;
		
		case 70:
			return -164284834;
		
		case 71:
			return 1446463345;
		
		case 72:
			return 1501315823;
		
		case 73:
			return -750379482;
		
		case 74:
			return -929560937;
		
		case 75:
			return 608323241;
		
		case 76:
			return 1030796013;
		
		case 77:
			return 1915057434;
		
		case 78:
			return -1582276476;
		
		case 79:
			return 692059311;
		
		case 80:
			return 2062839241;
		
		case 81:
			return -1884531872;
		
		case 82:
			return -866434534;
		
		case 83:
			return -1252192421;
		
		case 84:
			return 1243288963;
		
		case 85:
			return -1953772189;
		
		case 86:
			return 754411745;
		
		case 87:
			return 545309006;
		
		case 88:
			return -1089810811;
		
		case 89:
			return 1957869400;
		
		case 90:
			return -241412332;
		
		case 91:
			return -1548010959;
		
		case 92:
			return 550150488;
		
		case 93:
			return 946565453;
		
		case 94:
			return 434443248;
		
		case 95:
			return -1709914938;
		
		case 96:
			return 366686112;
		
		case 97:
			return -1370063350;
		
		case 98:
			return 2126829550;
		
		case 99:
			return 226552910;
		
		case 100:
			return 721193431;
		
		case 101:
			return -315672460;
		
		case 102:
			return 623544501;
		
		case 103:
			return 259556714;
		
		case 104:
			return -2125361825;
		
		case 105:
			return 1078230356;
		
		case 106:
			return 1885364811;
		
		case 107:
			return 1630382737;
		
		case 108:
			return 1738245512;
		
		case 109:
			return 1540262216;
		
		case 110:
			return 1016871472;
		
		case 111:
			return 13829069;
		
		case 112:
			return 737051352;
		
		case 113:
			return 1734614610;
		
		case 114:
			return -208715295;
		
		case 115:
			return 1435062936;
		
		case 116:
			return 1483055553;
		
		case 117:
			return 380335002;
		
		case 118:
			return -1079385677;
		
		case 119:
			return 676610411;
		
		case 120:
			return 2145419552;
		
		case 121:
			return 657238733;
		
		case 122:
			return 1850579281;
		
		case 123:
			return -1923957384;
		
		case 124:
			return -1142828108;
		
		case 125:
			return -1400618531;
		
		case 126:
			return -1433857135;
		
		case 127:
			return 209987206;
		
		case 128:
			return 1686943047;
		
		case 129:
			return -59178517;
		
		case 130:
			return 2134884601;
		
		case 131:
			return 651707517;
		
		case 132:
			return -633788535;
		
		case 133:
			return 116394463;
		
		case 134:
			return -1196973875;
		
		case 135:
			return 801752086;
		
		case 136:
			return 184475332;
		
		case 137:
			return -1880922659;
		
		case 138:
			return -898138634;
		
		case 139:
			return -2107418444;
		
		case 140:
			return -679970099;
		
		case 141:
			return -1531392549;
		
		case 142:
			return 1612483376;
		
		case 143:
			return 463930900;
		
		case 144:
			return -632148238;
		
		case 145:
			return 55303249;
		
		case 146:
			return 2108322089;
		
		case 147:
			return -1358896714;
		
		case 148:
			return 74475632;
		
		case 149:
			return -28710953;
		
		case 150:
			return -1791599168;
		
		case 151:
			return 1605938169;
		
		case 152:
			return 1255242276;
		
		case 153:
			return 636467727;
		
		case 154:
			return -1567688525;
		
		case 155:
			return -77886679;
		
		case 156:
			return -1057900679;
		
		case 157:
			return -1960888134;
		
		case 158:
			return -1719717295;
		
		case 159:
			return -1779244911;
		
		case 160:
			return -670540863;
		
		case 161:
			return 223362311;
		
		case 162:
			return 1150824567;
		
		case 163:
			return 974471191;
		
		case 164:
			return 1989683968;
		
		case 165:
			return 254804477;
		
		case 166:
			return 192057609;
		
		case 167:
			return 1553957817;
		
		case 168:
			return 2099829015;
		
		case 169:
			return -840300007;
		
		case 170:
			return -1948423372;
		
		case 171:
			return 981083654;
		
		case 172:
			return 1283289876;
		
		case 173:
			return -606884489;
		
		case 174:
			return -100418572;
		
		case 175:
			return 663645231;
		
		case 176:
			return 1442217033;
		
		case 177:
			return 1410986244;
		
		case 178:
			return 847409839;
		
		case 179:
			return 923926911;
		
		case 180:
			return 109995826;
		
		case 181:
			return -747412737;
		
		case 182:
			return 1114341727;
		
		case 183:
			return -539456939;
		
		case 184:
			return 45887121;
		
		case 185:
			return 913271624;
		
		case 186:
			return -1652812715;
		
		case 187:
			return -1791365775;
		
		case 188:
			return -979299941;
		
		case 189:
			return 713062001;
		
		case 190:
			return -575045963;
		
		case 191:
			return 1852965262;
		
		case 192:
			return -1398836354;
		
		case 193:
			return -1829885298;
		
		case 194:
			return -1773850357;
		
		case 195:
			return -564258009;
		
		case 196:
			return 2016532685;
		
		case 197:
			return -1070563798;
		
		case 198:
			return -1619221343;
		
		case 199:
			return -345571691;
		
		case 200:
			return 544288390;
		
		case 201:
			return 159578294;
		
		case 202:
			return -76852849;
		
		case 203:
			return 1110295244;
		
		case 204:
			return 2104563477;
		
		case 205:
			return 1947827651;
		
		case 206:
			return -933072766;
		
		case 207:
			return 2104388648;
		
		case 208:
			return -1677140601;
		
		case 209:
			return -2133097881;
		
		case 210:
			return -826678792;
		
		case 211:
			return -513522325;
		
		case 212:
			return 1970588249;
		
		case 213:
			return -2080032591;
		
		case 214:
			return 1758847745;
		
		case 215:
			return 895010282;
		
		case 216:
			return 1786352060;
		
		case 217:
			return -833319691;
		
		case 218:
			return 1591329969;
		
		case 219:
			return 2123222014;
		
		case 220:
			return -1578397674;
		
		case 221:
			return 1473261684;
		
		case 222:
			return -241855024;
		
		case 223:
			return 12999093;
		
		case 224:
			return -6796437;
		
		case 225:
			return -268116367;
		
		case 226:
			return -636470867;
		
		case 227:
			return 1737668280;
		
		case 228:
			return 892807236;
		
		case 229:
			return -733247890;
		
		case 230:
			return 24047176;
		
		case 231:
			return -1561999014;
		
		case 232:
			return -2052774042;
		
		case 233:
			return -997150586;
		
		case 234:
			return -1189569496;
		
		case 235:
			return 46488141;
		
		case 236:
			return 1046566686;
		
		case 237:
			return 325139909;
		
		case 238:
			return -1585141069;
		
		case 239:
			return 802754820;
		
		case 240:
			return 1415981582;
		
		case 241:
			return -1886147520;
		
		case 242:
			return 654877947;
		
		case 243:
			return -415648720;
		
		case 244:
			return 1221327846;
		
		case 245:
			return 923162715;
		
		case 246:
			return 625423581;
		
		case 247:
			return 326668608;
		
		case 248:
			return 669530755;
		
		case 249:
			return 429759982;
		
		case 250:
			return -2111934838;
		
		case 251:
			return 1886178087;
		
		case 252:
			return 1587783573;
		
		case 253:
			return -279722001;
		
		case 254:
			return 1310070322;
		
		case 255:
			return 724026534;
		
		case 256:
			return 137387616;
		
		case 257:
			return -653439684;
		
		case 258:
			return 1376835592;
		
		case 259:
			return -1824203570;
		
		case 260:
			return -1654197998;
		
		case 261:
			return 798987653;
		
		case 262:
			return 976923323;
		
		case 263:
			return 1167442289;
		
		case 264:
			return 986998820;
		
		case 265:
			return -2119169513;
		
		case 266:
			return -2015960939;
		
		case 267:
			return -1287636759;
		
		case 268:
			return -706917073;
		
		case 269:
			return -2166805;
		
		case 270:
			return -1391602433;
		
		case 271:
			return 1782075221;
		
		case 272:
			return 1282544585;
		
		case 273:
			return 1732594027;
		
		case 274:
			return -1058817012;
		
		case 275:
			return 1090546265;
		
		case 276:
			return -1783120823;
		
		case 277:
			return -1535745896;
		
		case 278:
			return -2086922122;
		
		case 279:
			return -1675198649;
		
		case 280:
			return 1189497682;
		
		case 281:
			return -1565675519;
		
		case 282:
			return -268973591;
		
		case 283:
			return 1039159916;
		
		case 284:
			return 1111816631;
		
		case 285:
			return 405591388;
		
		case 286:
			return 897456793;
		
		case 287:
			return 104187473;
		
		case 288:
			return 773808542;
		
		case 289:
			return -1120669954;
		
		case 290:
			return -1389278274;
		
		case 291:
			return 552979403;
		
		case 292:
			return -1571578784;
		
		case 293:
			return -708312114;
		
		case 294:
			return 688823508;
		
		case 295:
			return -1622147240;
		
		case 296:
			return 830292162;
		
		case 297:
			return 226276782;
		
		case 298:
			return -678416628;
		
		case 299:
			return -1098528034;
		
		case 300:
			return 316207340;
		
		case 301:
			return -1909200748;
		
		case 302:
			return -939652363;
		
		case 303:
			return -1990194462;
		
		case 304:
			return -375447933;
		
		case 305:
			return 537014919;
		
		case 306:
			return 1784584921;
		
		case 307:
			return 1084182731;
		
		case 308:
			return -1045471300;
		
		case 309:
			return 1617414719;
		
		case 310:
			return -787761753;
		
		case 311:
			return -490616606;
		
		case 312:
			return 1491346514;
		
		case 313:
			return -1311702610;
		
		case 314:
			return -904250715;
		
		case 315:
			return 1034665895;
		
		case 316:
			return -101524555;
		
		case 317:
			return 1419152594;
		
		case 318:
			return -451359317;
		
		case 319:
			return -1915385310;
		
		case 320:
			return 1315162488;
		
		case 321:
			return -361152079;
		
		case 322:
			return -2041626192;
		
		case 323:
			return -2077812539;
		
		case 324:
			return -1371514637;
		
		case 325:
			return 1730017037;
		
		case 326:
			return 892816668;
		
		case 327:
			return -1994943603;
		
		case 328:
			return 603133554;
		
		case 329:
			return -30160144;
		
		case 330:
			return -1248299493;
		
		case 331:
			return 727393558;
		
		case 332:
			return 755611221;
		
		case 333:
			return -170255458;
		
		case 334:
			return 1011151573;
		
		case 335:
			return 1122339631;
		
		case 336:
			return 454815308;
		
		case 337:
			return 990701735;
		
		case 338:
			return -246340825;
		
		case 339:
			return -1410671073;
		
		case 340:
			return 1547608292;
		
		case 341:
			return -714132970;
		
		case 342:
			return 732290690;
		
		case 343:
			return 971340545;
		
		case 344:
			return -234132662;
		
		case 345:
			return -2143057988;
		
		case 346:
			return -993947465;
		
		case 347:
			return -486552269;
		
		case 348:
			return -1156317860;
		
		case 349:
			return 1229625803;
		
		case 350:
			return -388596167;
		
		case 351:
			return -1204639465;
		
		case 352:
			return -1384685096;
		
		case 353:
			return -2026728113;
		
		case 354:
			return -1228057307;
		
		case 355:
			return 1835126290;
		
		case 356:
			return 1890833594;
		
		case 357:
			return -751549960;
		
		case 358:
			return -1682270750;
		
		case 359:
			return -1839865333;
		
		case 360:
			return -1990383629;
		
		case 361:
			return 1712094016;
		
		case 362:
			return 1532953697;
		
		case 363:
			return 1620318083;
		
		case 364:
			return -307230331;
		
		case 365:
			return -1034549620;
		
		case 366:
			return -1293064293;
		
		case 367:
			return -1540142553;
		
		case 368:
			return -1769886012;
		
		case 369:
			return -1983081126;
		
		case 370:
			return -1106117124;
		
		case 371:
			return -1873108338;
		
		case 372:
			return -2097543219;
		
		case 373:
			return 155413195;
		
		case 374:
			return -1162387149;
		
		case 375:
			return 1728382685;
		
		case 376:
			return -649335959;
		
		case 377:
			return -1876502240;
		
		case 378:
			return -2107032155;
		
		case 379:
			return 619103418;
		
		case 380:
			return 1355448197;
		
		case 381:
			return 1681762005;
		
		case 382:
			return 1026887814;
		
		case 383:
			return 354352628;
		
		case 384:
			return 1519366642;
		
		case 385:
			return -82757515;
		
		case 386:
			return 386306655;
		
		case 387:
			return 1243962119;
		
		case 388:
			return 756214903;
		
		case 389:
			return -718417579;
		
		case 390:
			return -1445516411;
		
		case 391:
			return -672392892;
		
		case 392:
			return 1465341584;
		
		case 393:
			return -427758369;
		
		case 394:
			return -735647142;
		
		case 395:
			return 1535838048;
		
		case 396:
			return -602272282;
		
		case 397:
			return 2051264661;
		
		case 398:
			return 487172188;
		
		case 399:
			return 282270687;
		
		case 400:
			return 1607708943;
		
		case 401:
			return 1686264939;
		
		case 402:
			return 314786149;
		
		case 403:
			return 1402841185;
		
		case 404:
			return 1099170772;
		
		case 405:
			return 2125676786;
		
		case 406:
			return -363896735;
		
		case 407:
			return -468790222;
		
		case 408:
			return -1779133048;
		
		case 409:
			return 1732537631;
		
		case 410:
			return 1755095401;
		
		case 411:
			return 835771095;
		
		case 412:
			return 1963317232;
		
		case 413:
			return 259627919;
		
		case 414:
			return 1299075397;
		
		case 415:
			return -1509094230;
		
		case 416:
			return 61132362;
		
		case 417:
			return 1549741908;
		
		case 418:
			return 288484254;
		
		case 419:
			return -1877032947;
		
		case 420:
			return -1395676456;
		
		case 421:
			return 1136146715;
		
		case 422:
			return 468034421;
		
		case 423:
			return 1079459546;
		
		case 424:
			return -140369351;
		
		case 425:
			return 1822341990;
		
		case 426:
			return 1219701681;
		
		case 427:
			return 1601295268;
		
		case 428:
			return -1692460667;
		
		case 429:
			return 1471419228;
		
		case 430:
			return 907446160;
		
		case 431:
			return -1126482585;
		
		case 432:
			return 1911050315;
		
		case 433:
			return -1343525599;
		
		case 434:
			return 1261891225;
		
		case 435:
			return 763162704;
		
		case 436:
			return 1335861197;
		
		case 437:
			return 526744654;
		
		case 438:
			return -1177461517;
		
		case 439:
			return -241638635;
		
		case 440:
			return 1024262875;
		
		case 441:
			return 853355463;
		
		case 442:
			return -337288221;
		
		case 443:
			return 361381308;
		
		case 444:
			return -1264898804;
		
		case 445:
			return -585289073;
		
		case 446:
			return 1423542233;
		
		case 447:
			return -948489286;
		
		case 448:
			return 2063859257;
		
		case 449:
			return -1652627327;
		
		case 450:
			return -1959697839;
		
		case 451:
			return -1532267859;
		
		case 452:
			return -1410062763;
		
		case 453:
			return -901428716;
		
		case 454:
			return -1628873469;
		
		case 455:
			return 144855571;
		
		case 456:
			return -617589883;
		
		case 457:
			return -1306457086;
		
		case 458:
			return 1713542477;
		
		case 459:
			return -305542365;
		
		case 460:
			return 1985390213;
		
		case 461:
			return -2145069367;
		
		case 462:
			return -1674390752;
		
		case 463:
			return -2117214398;
		
		case 464:
			return 1880805647;
		
		case 465:
			return -62390436;
		
		case 466:
			return 1815288415;
		
		case 467:
			return 196214097;
		
		case 468:
			return -201958220;
		
		case 469:
			return 1400281261;
		
		case 470:
			return 1601515402;
		
		case 471:
			return -940704970;
		
		case 472:
			return -548371721;
		
		case 473:
			return -1022384613;
		
		case 474:
			return -357406394;
		
		case 475:
			return 1077068189;
		
		case 476:
			return -782241404;
		
		case 477:
			return 1669853467;
		
		case 478:
			return 1592019450;
		
		case 479:
			return 635273153;
		
		case 480:
			return -1559225678;
		
		case 481:
			return -266425508;
		
		case 482:
			return 1117400455;
		
		case 483:
			return 454332195;
		
		case 484:
			return -1328061889;
		
		case 485:
			return 561650932;
		
		case 486:
			return 256105670;
		
		case 487:
			return 1976779618;
		
		case 488:
			return -269095126;
		
		case 489:
			return 2145617267;
		
		case 490:
			return 1150213537;
		
		case 491:
			return 1598825281;
		
		case 492:
			return -712527121;
		
		case 493:
			return 1308553072;
		
		case 494:
			return 852866398;
		
		case 495:
			return -1794417972;
		
		case 496:
			return 293062146;
		
		case 497:
			return 95360094;
		
		case 498:
			return 807631773;
		
		case 499:
			return 1603958275;
		
		case 500:
			return 860052020;
		
		case 501:
			return -1885979781;
		
		case 502:
			return 746147970;
		
		case 503:
			return 666663006;
		
		case 504:
			return -2096186453;
		
		case 505:
			return 859409444;
		
		case 506:
			return -671427187;
		
		case 507:
			return 100192478;
		
		case 508:
			return 307812616;
		
		case 509:
			return 1670843243;
		
		case 510:
			return 899615863;
		
		case 511:
			return -298901850;
		
		case 512:
			return 1379186917;
		
		case 513:
			return -817206030;
		
		case 514:
			return -1150323212;
		
		case 515:
			return -247466821;
		
		case 516:
			return 427124242;
		
		case 517:
			return 855418120;
		
		case 518:
			return -777015093;
		
		case 519:
			return -722462870;
		
		case 520:
			return -937454324;
		
		case 521:
			return -339438116;
		
		case 522:
			return 2135639035;
		
		case 523:
			return 1254273765;
		
		case 524:
			return -792172668;
		
		case 525:
			return 1905987493;
		
		case 526:
			return 495693044;
		
		case 527:
			return -1693422950;
		
		case 528:
			return -205873076;
		
		case 529:
			return -2143114654;
		
		case 530:
			return -1420574021;
		
		case 531:
			return -1959250381;
		
		case 532:
			return -1088328663;
		
		case 533:
			return 513602003;
		
		case 534:
			return 359221401;
		
		case 535:
			return 1005272;
		
		case 536:
			return 1583044470;
		
		case 537:
			return 348853959;
		
		case 538:
			return 1045621973;
		
		case 539:
			return 1084576580;
		
		case 540:
			return 1651573695;
		
		case 541:
			return 1463321587;
		
		case 542:
			return -997505963;
		
		case 543:
			return -1649851713;
		
		case 544:
			return -386012962;
		
		case 545:
			return 1386101789;
		
		case 546:
			return 1227915917;
		
		case 547:
			return -218846335;
		
		case 548:
			return -352578118;
		
		case 549:
			return 1426626782;
		
		case 550:
			return -714081520;
		
		case 551:
			return 74547781;
		
		case 552:
			return 1271463052;
		
		case 553:
			return 1983140194;
		
		case 554:
			return 677262775;
		
		case 555:
			return -832337898;
		
		case 556:
			return -319249747;
		
		case 557:
			return -16955722;
		
		case 558:
			return -1360128126;
		
		case 559:
			return -1535425646;
		
		case 560:
			return -1063641743;
		
		case 561:
			return -1041133401;
		
		case 562:
			return 1380479304;
		
		case 563:
			return 600890828;
		
		case 564:
			return 733333190;
		
		case 565:
			return 1843035435;
		
		case 566:
			return -304127320;
		
		case 567:
			return 122470371;
		
		case 568:
			return 0;
		
		case 569:
			return -1591664384;
		
		case 570:
			return -673000374;
		
		case 571:
			return -1150938404;
		
		case 572:
			return -1756997214;
		
		case 573:
			return -813824107;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_1387(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1610(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_1388(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_1924(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_1389(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_1104(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_1295(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_1390(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1925(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1801(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_1131(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_1295(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_1391(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_1261(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

char* func_1392(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_1393(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_1394(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	
	sVar0 = func_1926(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 0);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
}

int func_1395(int iParam0)
{
	float fVar0;
	
	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_1396(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(iParam0))
		{
			PROPSET::_REQUEST_PROPSET(iParam0);
			return 0;
		}
	}
	if (iParam1 == 0 || iParam1 == 2)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(1592899946))
		{
			PROPSET::_REQUEST_PROPSET(1592899946);
			return 0;
		}
	}
	return 1;
}

int func_1397(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!PROPSET::_DOES_PROPSET_EXIST(*uParam0))
	{
		*uParam0 = PROPSET::_CREATE_PROPSET(iParam5, vParam1, 0, fParam4, 1200f, false, true);
		return 0;
	}
	else
	{
		return PROPSET::_0xF42DB680A8B2A4D9(*uParam0);
	}
	return 0;
}

int func_1398(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<4> Var0;
	vector3 vVar4;
	float fVar7;
	
	if (!TASK::_0x841475AC96E794D1(uParam0->f_87))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_90[2])))
		{
			Var0 = { func_1927(uParam0) };
			uParam0->f_87 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(&(uParam0->f_90[2]), 2054734837, Var0, Var0.f_3, 0, -1f, 1);
			func_1515(uParam0, 0);
		}
		else
		{
			uParam0->f_90[2] = OBJECT::CREATE_OBJECT(1969096843, 556.813f, 172.2274f, 133.3552f, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(&(uParam0->f_90[2]), 0f, 0f, -142.76f, 2, true);
		}
	}
	if (!TASK::_0x841475AC96E794D1(uParam0->f_89) && TASK::_0x841475AC96E794D1(uParam0->f_87))
	{
		vVar4 = { TASK::_0xA8452DD321607029(uParam0->f_87, 1) };
		fVar7 = TASK::_0xB93EA7184BAA85C3(uParam0->f_87, 1);
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, fVar7, -0.284f, -4.8223f, 0f) };
		Var0.f_3 = func_305((fVar7 - 18.87f));
		uParam0->f_89 = TASK::CREATE_SCENARIO_POINT(2054734837, Var0, Var0.f_3, 0f, 0, 1);
	}
	if (TASK::_0x841475AC96E794D1(uParam0->f_89))
	{
		if (TASK::_0x841475AC96E794D1(uParam0->f_87))
		{
			TASK::_0x5AF19B6CC2115D34(uParam0->f_87, 14, 1);
			TASK::_0x5AF19B6CC2115D34(uParam0->f_87, 22, 1);
			TASK::_0x5AF19B6CC2115D34(uParam0->f_89, 14, 1);
			TASK::_0x5AF19B6CC2115D34(uParam0->f_89, 22, 1);
			return 1;
		}
	}
	return 0;
}

void func_1399(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

int func_1400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1230431605;
		
		case 1:
			return 1615856661;
		
		case 2:
			return 1615856661;
		
		case 3:
			return -1483557278;
		
		case 4:
			return -1483557278;
		
		default:
			break;
	}
	return -1483557278;
}

void func_1401(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_1928(uParam0, 1, 3, 1, 3, 0);
		return;
	}
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					func_1928(uParam0, 0, 0, 0, 0, 0);
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 0:
					func_1928(uParam0, 0, 1, 0, 1, 2);
					break;
				
				case 1:
					func_1928(uParam0, 1, 0, 1, 0, 0);
					break;
			}
			break;
		
		case 6:
			switch (iParam2)
			{
				case 0:
					func_1928(uParam0, 0, 3, 0, 3, 0);
					break;
				
				case 1:
					func_1928(uParam0, 1, 1, 1, 1, 2);
					break;
			}
			break;
		
		case 9:
			switch (iParam2)
			{
				case 0:
					func_1928(uParam0, 0, 4, 0, 4, 2);
					break;
				
				case 1:
					func_1928(uParam0, 0, 5, 0, 5, 0);
					break;
			}
			break;
		
		case 10:
			switch (iParam2)
			{
				case 0:
					func_1928(uParam0, 0, 8, 0, 8, 0);
					break;
				
				case 1:
					func_1928(uParam0, 0, 6, 0, 6, 0);
					break;
			}
			break;
		
		case 11:
			switch (iParam2)
			{
				case 0:
					func_1928(uParam0, 0, 9, 0, 9, 0);
					break;
				
				case 1:
					func_1928(uParam0, 0, 10, 0, 10, 2);
					break;
				
				case 2:
					func_1928(uParam0, 0, 11, 0, 11, 0);
					break;
				
				case 3:
					func_1928(uParam0, 0, 12, 0, 12, 2);
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					func_1928(uParam0, 0, 13, 0, 13, 0);
					break;
				
				case 1:
					func_1928(uParam0, 0, 14, 0, 14, 2);
					break;
				
				case 2:
					func_1928(uParam0, 0, 15, 0, 15, 0);
					break;
			}
			break;
		
		case 15:
			switch (iParam2)
			{
				case 0:
					func_1928(uParam0, 1, 2, 1, 2, 2);
					break;
			}
			break;
	}
}

char* func_1402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_idle";
		
		case 1:
			return "pl_exit";
		
		case 2:
			return "pl_leadin_A";
		
		case 3:
			return "pl_lookdown_leadin_B";
		
		case 4:
			return "pl_lookup_f";
		
		case 5:
			return "pl_lookup_r";
		
		case 6:
			return "pl_quickexit";
		
		case 7:
			return "pl_reactshot_f";
		
		case 8:
			return "pl_reactshot_r";
		
		case 9:
			return "pl_transition_leadin_a";
		
		case 10:
			return "pl_waveover_f";
		
		case 11:
			return "pl_waveover_r";
		
		default:
			break;
	}
	return "INVALID PBL";
}

void func_1403(var uParam0)
{
}

int func_1404(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
{
	uParam0->f_2 = iParam4;
	uParam0->f_3 = iParam6;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, sParam7, false, true);
	}
	else if (iParam4 != -1)
	{
		Stack.Push(sParam1);
		Stack.Push(iParam5);
		Stack.Push(iParam4);
		Call_Loc(iParam2);
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(StackVal, StackVal, StackVal, false, true);
	}
	else
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, 0, false, true);
	}
	uParam0->f_4 = sParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_5 = iParam3;
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		if (!bParam8)
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
		}
		return 1;
	}
	return 0;
}

int func_1405(var uParam0)
{
	if (func_1929(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1406(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = func_1273(iVar0, iParam0);
		if (iVar1 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1))
			{
				bVar2 = true;
			}
		}
		iVar0++;
	}
	return !bVar2;
}

bool func_1407(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (*uParam0 != -1)
	{
		if (uParam0->f_1 > -1)
		{
			iVar1 = func_1930(*uParam0, uParam0->f_1);
			if (STREAMING::IS_MODEL_VALID(iVar1))
			{
				STREAMING::REQUEST_MODEL(iVar1, false);
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			iVar1 = func_1931(uParam0->f_2, uParam0->f_3);
			if (STREAMING::IS_MODEL_VALID(iVar1))
			{
				STREAMING::REQUEST_MODEL(iVar1, false);
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					bVar0 = true;
				}
			}
		}
	}
	return !bVar0;
}

bool func_1408(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_1932(func_1274(iParam0, 0)))
	{
		bVar0 = true;
	}
	if (!func_1932(func_1274(iParam0, 1)))
	{
		bVar0 = true;
	}
	if (!func_1932(func_1274(19, 0)))
	{
		bVar0 = true;
	}
	if (!func_1932(func_1274(43, 0)))
	{
		bVar0 = true;
	}
	if (!func_1932(func_1274(43, 1)))
	{
		bVar0 = true;
	}
	if (!func_1932("SCRIPT_RE@HERBALISTCAMP"))
	{
		bVar0 = true;
	}
	if (!func_1932("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER"))
	{
		bVar0 = true;
	}
	if (!func_1932("script_common@shared_scenarios@stand@random@herbalist@stand@base"))
	{
		bVar0 = true;
	}
	if (!func_1932("SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@LEAN_READ@TRANSITIONS"))
	{
		bVar0 = true;
	}
	if (!func_1932("SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS"))
	{
		bVar0 = true;
	}
	if (!func_1932("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER"))
	{
		bVar0 = true;
	}
	return !bVar0;
}

int func_1409(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	switch (*uParam1)
	{
		case 0:
			if (!func_1934(uParam2, iParam0, 1, func_1933(iParam0, 0, 1, 2, 3)))
			{
				return 0;
			}
			if (!func_1404(uParam3, "script@beat@wilderness@herbalistCamp@playerScene", 324999/*func_1935*/, 229881/*func_1403*/, func_1936(iParam0), 0, 0, 0, 0))
			{
				return 0;
			}
			if (!func_1404(uParam4, "script@beat@wilderness@herbalistcamp@directional_exchange_new", 324999/*func_1935*/, 229881/*func_1403*/, 4, 0, 0, 0, 0))
			{
				return 0;
			}
			if (!func_1404(uParam5, "script@beat@wilderness@herbalistcamp@forward_exchange_new", 324999/*func_1935*/, 229881/*func_1403*/, 4, 0, 0, 0, 0))
			{
				return 0;
			}
			*uParam1 = 1;
			break;
		
		case 1:
			if (((!func_1410(uParam2) || !func_1410(uParam3)) || !func_1410(uParam4)) || !func_1410(uParam5))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_1410(var uParam0)
{
	if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0) && ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1, 1, 0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_1, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
	}
	return 0;
}

bool func_1411()
{
	return func_412(10);
}

int func_1412(var uParam0, vector3 vParam1, float fParam4)
{
	return func_1937(uParam0->f_1, uParam0, vParam1, fParam4, 1, 0, 1, 0, 1);
}

void func_1413(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[uParam0->f_174 /*49*/])->f_21))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_21))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_21);
	}
}

void func_1414(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_947(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_1415()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
	{
		if (func_197(131072) && func_284() == 0)
		{
			ENTITY::_0x203BEFFDBE12E96A(Local_14.f_7, 560.3453f, 170f, 133.3503f, 45.6863f, 1, false, 1);
			PED::_0x7DE9692C6F64CFE8(Local_14.f_7, true, 0, 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(Local_14.f_7, 557.4182f, 171.7201f, 134.3552f, 45.6863f, 1, false, 1);
			PED::_0x7DE9692C6F64CFE8(Local_14.f_7, false, 0, 0);
		}
	}
}

int func_1416(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1417()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_741(iVar0, 43))
		{
			if (!func_1422(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_1418(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7)
{
	int iVar0;
	struct<4> Var1;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]))
		{
			if (func_741(iVar0, iParam1))
			{
				iVar7 = func_1273(iVar0, iParam1);
				if (func_1938(iVar0))
				{
					Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam2, fParam5, func_1939(iVar0)) };
					if (bParam7)
					{
						(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT(iVar7, Var1, true, true, false, false, true);
					}
					else
					{
						iVar8 = func_1940(iVar7, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar8))
						{
							(*uParam0)[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar8);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]))
					{
						ENTITY::SET_ENTITY_HEADING(uParam0[iVar0], func_305((fParam5 + func_1941(iVar0))));
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0[iVar0], true, true);
						func_1942(uParam0[iVar0]);
					}
				}
				else
				{
					Var1 = { func_304(iVar0) };
					if (!func_242(Var1))
					{
						if (bParam7)
						{
							(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vParam2, true, true, false, true);
						}
						else
						{
							iVar9 = func_1940(iVar7, 1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9))
							{
								(*uParam0)[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar9);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]))
						{
							func_1942(uParam0[iVar0]);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]) && func_1943(iVar0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0[iVar0], iParam6, -1, Var1, Var1.f_3, 1, 1, 0, 0, 2, 1, 0, 0);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0[iVar0], true, true);
						}
					}
				}
				if (iVar0 == 19)
				{
					if (!bParam7)
					{
						(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vParam2, true, true, false, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0], false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1419(int iParam0, int iParam1)
{
	func_1944(iParam0, iParam1);
}

void func_1420(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_741(iVar0, iParam1))
		{
			if (!func_1946(iParam2, func_1273(iVar0, iParam1), (*uParam0)[iVar0], func_1945(iVar0), -1535066799))
			{
			}
		}
		iVar0++;
	}
}

void func_1421(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		if (*uParam0 != -1)
		{
			if (uParam0->f_1 > -1)
			{
				iVar0 = func_1930(*uParam0, uParam0->f_1);
				if (STREAMING::IS_MODEL_VALID(iVar0))
				{
					if (STREAMING::HAS_MODEL_LOADED(iVar0) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
					{
						uParam0->f_5 = func_1947(*uParam0, uParam0->f_1);
						PED::_0x931B241409216C1F(iParam1, uParam0->f_5, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
					}
				}
			}
		}
	}
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			iVar0 = func_1931(uParam0->f_2, uParam0->f_3);
			if (STREAMING::IS_MODEL_VALID(iVar0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iVar0) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
				{
					uParam0->f_6 = func_1948(uParam0->f_2, uParam0->f_3);
				}
			}
		}
	}
}

int func_1422(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_90[iParam0])))
	{
		if (ENTITY::IS_ENTITY_AN_OBJECT(&(Local_14.f_90[iParam0])))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_1423(var uParam0, var uParam1, float fParam2, float fParam3)
{
	func_383(uParam0->f_531);
	uParam0->f_531 = VOLUME::_CREATE_VOLUME_CYLINDER(func_186(uParam1), 0f, 0f, 0f, fParam2, fParam2, fParam3);
	func_1949(uParam0->f_531, 1);
}

void func_1424(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				func_1950(uParam0, uParam1, iVar0, -1612834106, 1.55f, -3.1f, 0.96f, 0f, 0f, 28.075f, 6.256512f, 3.460136f, 3f);
				break;
			
			case 1:
				func_1950(uParam0, uParam1, iVar0, -1612834106, -4.76f, -1.15f, 0.96f, 0f, 0f, 25.075f, 3.083873f, 3.275494f, 3f);
				break;
			
			case 2:
				func_1950(uParam0, uParam1, iVar0, -1612834106, 1.56f, -2.29f, -0.11f, 0f, 0f, 25.075f, 2.312612f, 2.058657f, 2.086685f);
				break;
			
			case 3:
				func_1950(uParam0, uParam1, iVar0, -1612834106, -2.88f, -0.27f, 0.96f, 0f, 0f, 25.075f, 1.708217f, 3.275494f, 3f);
				break;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 11)
	{
		switch (iVar1)
		{
			case 0:
				func_1951(uParam0, uParam1, iVar1, 1, 0f, 0f, 0f, 7f, 0);
				break;
			
			case 7:
				func_1952(uParam0, iVar1, 2, 0, 0);
				break;
			
			case 1:
				func_1951(uParam0, uParam1, iVar1, 1, 0f, 0f, 0f, 1.5f, 1);
				break;
			
			case 8:
				func_1951(uParam0, uParam1, iVar1, 2, 0f, 0f, 0f, 2.5f, 0);
				break;
			
			case 9:
				func_1952(uParam0, iVar1, 2, 1, 0);
				break;
			
			case 2:
				func_1952(uParam0, iVar1, 1, 2, 1);
				break;
			
			case 3:
				func_1952(uParam0, iVar1, 1, 3, 1);
				break;
			
			case 4:
				func_1951(uParam0, uParam1, iVar1, 1, 2.03f, 0.67f, 0f, 1f, 1);
				break;
			
			case 5:
				func_1951(uParam0, uParam1, iVar1, 1, 2.48f, 0.21f, 0f, 1f, 1);
				break;
			
			case 6:
				func_1951(uParam0, uParam1, iVar1, 1, 2.89f, 0.69f, 0f, 1.25f, 1);
				break;
			
			case 10:
				func_1951(uParam0, uParam1, iVar1, 2, 0.4f, 3.33f, 0f, 1.25f, 0);
				break;
		}
		iVar1++;
	}
}

void func_1425(var uParam0, var uParam1)
{
	func_1953(&(uParam0->f_239), 665633627, func_186(uParam1), 0f, 0f, 0f, 5f, 5f, 5f);
}

void func_1426()
{
	func_1954(&Local_776, "ARTHUR", Global_35, 0);
	func_1954(&Local_776, "GenStoryMale", Local_14.f_7, 0);
	func_1954(&Local_776, "p_mortarPestle02x", &(Local_14.f_90[3]), 0);
	func_474(&Local_776, "Loop_Idle", 0);
	func_474(&Local_776, "Loop_Idle_2", 0);
	func_1955(&Local_776, 557.91f, 170.81f, 133.35f, 7.25f, 0f, 18.758f, 2);
	if (func_339())
	{
		func_562(&uLocal_815, Global_35, "ARTHUR", 0);
	}
	else
	{
		func_562(&uLocal_815, Global_35, "JOHN", 0);
	}
	func_562(&uLocal_815, Local_14.f_7, "herbalist", 0);
	func_1500(&Local_776);
}

void func_1427(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, float fParam6)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		return;
	}
	iParam1 = 0;
	iParam2 = -1904017806;
	if (bParam5)
	{
		if (PED::_0x9C54041BB66BCF9E(iParam0->f_7, iParam0->f_87) || func_971(iParam0->f_7, -76381094))
		{
			return;
		}
	}
	if (!bParam3)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
	}
	TASK::_TASK_USE_SCENARIO_POINT(0, iParam0->f_87, func_1956(iParam2), -1, !bParam4, bParam4, 0, 0, 4f, 0);
	iParam0->f_521 = 1;
	if (!bParam3)
	{
		func_1519(iParam0->f_7, &iVar0, fParam6, fParam6, 1, 1);
	}
}

void func_1428(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_434.f_5))
	{
		switch (iParam0->f_434.f_4)
		{
			case 0:
				func_1957(iParam0->f_434.f_5, -1587187585, -1, 1, 0, -1082130432);
				break;
			
			case 1:
				func_1957(iParam0->f_434.f_5, 441729777, -1, 1, 0, -1082130432);
				break;
			
			case 2:
				func_1957(iParam0->f_434.f_5, 696740378, -1, 1, 0, -1082130432);
				break;
			
			case 3:
				func_1957(iParam0->f_434.f_5, -203162028, -1, 1, 0, -1082130432);
				break;
		}
	}
}

bool func_1429(var uParam0, var uParam1)
{
	char* sVar0;
	
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_1, sVar0);
}

bool func_1430(int iParam0)
{
	return (!ANIMSCENE::_0x25557E324489393C(iParam0) || ANIMSCENE::_0xD8254CB2C586412B(iParam0, 0));
}

int func_1431(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_1323(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_1335(uParam1, 4000))
				{
					if ((func_1336(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_1337(uParam1, iParam0)) && func_1338(uParam1, iParam0))
					{
						func_1340();
						*uParam2 = 2;
						func_1325(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_1335(uParam1, 4000))
				{
					if ((func_1336(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_1337(uParam1, iParam0)) && func_1338(uParam1, iParam0))
					{
						func_1340();
						*uParam2 = 2;
						func_1325(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_1339(iParam0, Global_1935630->f_41))
							{
								func_1340();
								*uParam2 = 2;
								func_1325(iParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_1339(iParam0, Global_1935630->f_41))
						{
							func_1340();
							*uParam2 = 2;
							func_1325(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_1342())
					{
						if (func_1339(iParam0, Global_1935630->f_42))
						{
							func_1340();
							*uParam2 = 2;
							func_1325(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_1329(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_1330(Global_35, iParam0, uParam1))
					{
						func_1340();
						*uParam2 = 4;
						func_1325(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_1331(Global_35, iParam0, uParam1))
					{
						func_1340();
						*uParam2 = 256;
						func_1325(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_1958(iParam0, uParam1))
			{
				func_1340();
				*uParam2 = 131072;
				func_1325(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_1959(iParam0, uParam1))
			{
				func_1340();
				*uParam2 = 262144;
				func_1325(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_1432(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_282(iParam0, 11))
	{
		bVar1 = func_1960(iParam0);
		if (func_832(iParam0->f_7, 0, uParam1, &iVar0, 1, 0) || bVar1)
		{
			if (!bVar1 && iVar0 == 256)
			{
				if (!func_279(Global_35, iParam0->f_7, 7f, 1))
				{
					if (EVENT::_0xC6A7DC546E94FED5(iParam0->f_7, -1102089407, 0, 0) > -1 || EVENT::_0xC6A7DC546E94FED5(iParam0->f_7, -1507090758, 0, 0) > -1)
					{
					}
					else
					{
						return 0;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
			{
				func_319(&(iParam0->f_9));
				bVar2 = false;
				if (func_282(iParam0, 12))
				{
					if (iParam0->f_1 == 3 && !func_282(iParam0, 15))
					{
						bVar2 = true;
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
				{
					if (bVar2)
					{
						func_668(4, 1142025875, 0, 0, 0, 0, 1065353216, 0);
					}
					else
					{
						func_668(3, 1142025875, 0, 0, 0, 0, 1065353216, 0);
					}
				}
				else if (bVar2)
				{
					func_668(4, 1877013492, 0, 0, 0, 0, 1065353216, 0);
				}
				else
				{
					func_668(3, 1877013492, 0, 0, 0, 0, 1065353216, 0);
				}
				TASK::CLEAR_PED_SECONDARY_TASK(iParam0->f_7);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0->f_7, 0);
				func_1526(iParam0);
				func_1524(&(iParam0->f_284));
				func_1557(&(iParam0->f_7));
				func_1961(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
				func_925(iParam0, 3, 3);
				if (!iParam0->f_221)
				{
					if (!func_1962(iVar0, 1024))
					{
						iParam0->f_221 = 1;
					}
				}
				else
				{
					iParam0->f_221 = 0;
				}
				iParam0->f_1 = 9;
			}
			else
			{
				iParam0->f_1 = 11;
			}
			func_1523(iParam0);
			func_176(iParam0, 11);
			return 1;
		}
	}
	return 0;
}

int func_1433(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_1434(int iParam0, int iParam1)
{
	func_319(&(iParam0->f_9));
	func_914(iParam0, 262144);
	func_1524(&(iParam0->f_284));
	func_1557(&(iParam0->f_7));
	func_1961(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
	TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0->f_7, Global_35, 3, 0, -1082130432, -1, iParam0->f_434.f_5);
	PED::SET_PED_KEEP_TASK(iParam0->f_7, true);
}

int func_1435()
{
	if (func_1481())
	{
		if (!func_412(5))
		{
			return 1;
		}
	}
	return 0;
}

void func_1436(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			func_1963(iParam0, Global_35, 2, 28, bParam2);
			func_1963(iParam0, Global_35, 2, 29, bParam2);
		}
		else
		{
			func_1963(iParam0, Global_35, 0, 9, bParam2);
			func_1963(iParam0, Global_35, 0, 14, bParam2);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -469521200) && !bParam2)
		{
			bVar0 = func_1481();
			if (bParam3)
			{
				if (!bVar0)
				{
					func_945(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_945(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_INTRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!bParam4)
			{
				func_945(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_2ND", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_945(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_LEFT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		func_1963(iParam0, Global_35, 0, 3, 0);
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			func_1963(iParam0, Global_35, 1, 20, 0);
		}
		else
		{
			func_1963(iParam0, Global_35, 1, 21, 0);
		}
		func_1963(iParam0, Global_35, 6, 53, 0);
		func_1963(iParam0, Global_35, 6, 54, 0);
		func_1963(iParam0, Global_35, 6, 51, 0);
		func_1963(iParam0, Global_35, 6, 52, 0);
		func_1963(iParam0, Global_35, 6, 55, 0);
		func_1963(iParam0, Global_35, 6, 56, 0);
		func_1963(iParam0, Global_35, 4, 41, 0);
		func_1963(iParam0, Global_35, 4, 42, 0);
		func_1963(iParam0, Global_35, 4, 39, 0);
		func_1963(iParam0, Global_35, 4, 40, 0);
		func_1963(iParam0, Global_35, 4, 43, 0);
		func_1963(iParam0, Global_35, 4, 44, 0);
		func_1963(iParam0, Global_35, 3, 35, 0);
		func_1963(iParam0, Global_35, 3, 36, 0);
		func_1963(iParam0, Global_35, 3, 33, 0);
		func_1963(iParam0, Global_35, 3, 34, 0);
		func_1963(iParam0, Global_35, 3, 37, 0);
		func_1963(iParam0, Global_35, 3, 38, 0);
		func_1963(iParam0, Global_35, 5, 47, 0);
		func_1963(iParam0, Global_35, 5, 48, 0);
		func_1963(iParam0, Global_35, 5, 45, 0);
		func_1963(iParam0, Global_35, 5, 46, 0);
		func_1963(iParam0, Global_35, 5, 49, 0);
		func_1963(iParam0, Global_35, 5, 50, 0);
	}
}

void func_1437(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (func_1964(iParam0))
	{
		func_1965(iParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 > iParam0->f_523)
			{
				if (func_1448(iParam0, iVar0))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 != 0)
		{
			if (!func_1438(iParam0, 0))
			{
				func_1966(iParam0, iVar1);
			}
			else
			{
				func_1967(iParam0, iVar1);
			}
		}
	}
}

int func_1438(int iParam0, int iParam1)
{
	if (iParam1 && !func_1964(iParam0))
	{
		return 0;
	}
	return func_282(iParam0, 41);
}

void func_1439(int iParam0)
{
	struct<23> Var0;
	
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		func_1968(&Var0, Global_35, 0, 0, 1, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
	}
}

bool func_1440(int iParam0, var uParam1, var uParam2)
{
	return func_1969(iParam0, uParam1);
}

void func_1441(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			func_925(iParam0, 2, 2);
			break;
		
		case 3:
			func_925(iParam0, 3, 2);
			break;
		
		case 4:
			func_925(iParam0, 1, 1);
			break;
	}
}

bool func_1442(int iParam0, var uParam1, var uParam2)
{
	return func_1970(iParam0, uParam1);
}

int func_1443(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return iParam0->f_525;
		
		case 3:
			return iParam0->f_526;
		
		case 1:
			return iParam0->f_219;
		
		case 5:
			return iParam0->f_527;
		
		case 6:
			return iParam0->f_528;
		
		default:
			break;
	}
	return 0;
}

int func_1444(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 3;
				
				default:
					break;
			}
			return 5;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
				
				case 1:
					return 3;
				
				default:
					break;
			}
			return 5;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 3;
				
				default:
					break;
			}
			return 5;
		
		case 5:
			return 1;
		
		case 6:
			switch (iParam1)
			{
				case 1:
					return 4;
				
				default:
					break;
			}
			return 3;
		
		case 7:
			return 4;
		
		case 4:
			return 2;
	}
	return 0;
}

int func_1445(int iParam0, var uParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = false;
	switch (func_1971(iParam0, uParam1, iParam2, iParam0->f_529))
	{
		case 4:
			switch (iParam2)
			{
				case 5:
					func_176(iParam0, 51);
					break;
				
				case 6:
					func_176(iParam0, 53);
					break;
				
				case 7:
					func_176(iParam0, 55);
					break;
			}
			return 1;
		
		case 1:
			if (iParam2 == 5)
			{
				bVar0 = func_282(iParam0, 67);
			}
			func_945(iParam0->f_7, Global_35, func_1972(iParam2, func_1443(iParam0, iParam2), bVar0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_1973(iParam0, iParam2);
			break;
		
		case 2:
			iParam0->f_524 = 0;
			break;
		
		case 5:
			func_176(iParam0, 44);
			break;
	}
	return 0;
}

float func_1446(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3f;
		
		case 3:
			return 3f;
		
		case 1:
			return 3f;
		
		case 5:
			return 3f;
		
		case 6:
			return 3f;
		
		case 7:
			return 3f;
		
		case 4:
			return 3f;
		
		default:
			break;
	}
	return 1f;
}

int func_1447(int iParam0)
{
	if (iParam0->f_523 != 1)
	{
		if (func_1448(iParam0, 1))
		{
			if (!func_1448(iParam0, iParam0->f_523))
			{
				if (!func_944(iParam0->f_7, 0))
				{
					if (!func_73(&(iParam0->f_496)) || func_955(&(iParam0->f_496), 1.5f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_1448(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0->f_511, iParam1);
}

int func_1449(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = func_282(iParam0, 47);
	if (!bVar1 && PED::_0x9C54041BB66BCF9E(iParam0->f_7, iParam0->f_87))
	{
		if (iParam0->f_514)
		{
			if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
			{
				func_1521(iParam0, -1f);
			}
			else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
			{
				return 1;
			}
		}
		else
		{
			if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
			{
				func_1974(iParam0);
			}
			return 1;
		}
	}
	else if (func_1975(iParam0))
	{
		iParam0->f_512 = -1;
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, BUILTIN::FLOOR(((6f * 0.5f) * 1000f)), -1082130432, -1082130432, -1082130432);
		iParam0->f_512++;
		if (!bVar1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, TASK::_0xA8452DD321607029(iParam0->f_87, 1), 1f, -1, 3f, false, TASK::_0xB93EA7184BAA85C3(iParam0->f_87, 1));
		}
		if (func_1433(iParam0->f_7, 0, 1, 0) != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("weapon_unarmed"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		}
		if (func_282(iParam0, 47))
		{
			TASK::TASK_WANDER_IN_AREA(0, func_186(uParam1), 5f, 1077936128, 1086324736, 1);
		}
		else
		{
			TASK::_TASK_USE_SCENARIO_POINT(0, iParam0->f_87, func_1956(2093245709), -1, 1, 0, 0, 0, -1082130432, 0);
		}
		func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
		if (func_73(&(iParam0->f_502)))
		{
			func_257(&(iParam0->f_502));
		}
		iParam0->f_519 = 1;
	}
	else if (bVar1)
	{
		if (func_971(iParam0->f_7, 242628503))
		{
			if (TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam0->f_512)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1450(int iParam0)
{
	if (func_282(iParam0, 63))
	{
		func_1976(iParam0->f_284.f_97[0 /*17*/], iParam0->f_284.f_21[0 /*17*/], 1);
		func_913(iParam0, 63);
	}
}

void func_1451(int iParam0)
{
	if (func_1438(iParam0, 1))
	{
		func_913(iParam0, 41);
		if (func_73(&(iParam0->f_212)))
		{
			func_257(&(iParam0->f_212));
		}
		if (func_73(&(iParam0->f_496)))
		{
			func_228(&(iParam0->f_496));
		}
		if (func_73(&(iParam0->f_499)))
		{
			func_228(&(iParam0->f_499));
		}
		if (func_73(&(iParam0->f_459)))
		{
			if (func_258(&(iParam0->f_459)))
			{
				func_1977(&(iParam0->f_459));
			}
		}
		if (iParam0->f_515 && !func_282(iParam0, 46))
		{
			func_935(iParam0, 262144);
			func_1490(iParam0, 5f, 0);
		}
		iParam0->f_514 = 0;
		iParam0->f_515 = 0;
		iParam0->f_518 = 0;
		iParam0->f_516 = 0;
		iParam0->f_517 = 0;
		iParam0->f_524 = 0;
		func_935(iParam0, 64);
		func_1978(&(iParam0->f_284));
		iParam0->f_523 = 0;
	}
}

int func_1452(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1979();
	if (iParam1 && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_1453(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1979();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_1452(iParam1, iParam2);
			if (iVar2 != -1)
			{
				iVar1 = ((*Global_1955500)[iVar2 /*16*/])->f_2;
				if (func_1980(iVar2, 512))
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				}
			}
		}
		TASK::TASK_CLEAR_LOOK_AT(iVar0);
		PED::_0xAAC0EE3B4999ABB5(iVar0, 0);
		PAD::ENABLE_CONTROL_ACTION(0, -128997553, true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					TASK::TASK_CLEAR_LOOK_AT(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_1454(var uParam0)
{
	func_1981(&(uParam0->f_21), 0, 0, 0, 1);
	func_1982(uParam0, 0, 1);
	func_1982(uParam0, 1, 1);
}

void func_1455(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_282(iParam0, 21))
		{
			func_1538(&(iParam0->f_284));
			func_176(iParam0, 21);
		}
	}
	else if (func_282(iParam0, 21))
	{
		func_1538(&(iParam0->f_284));
		func_913(iParam0, 21);
	}
}

void func_1456(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_1983(uParam0, iParam1, iParam3);
	func_1984(uParam0, iParam2, iParam3);
}

int func_1457(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_1985();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		((*Global_1955500)[iVar0 /*16*/])->f_1 = iParam1;
		((*Global_1955500)[iVar0 /*16*/])->f_2 = iParam0;
		(*Global_1955500)[iVar0 /*16*/] = 0;
		((*Global_1955500)[iVar0 /*16*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_797(iParam2, 128))
		{
			PED::_0x7C00CFC48A782DC0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_433(Global_1955500[iVar0 /*16*/], 0))
		{
			func_1986(iVar0, 1024);
			func_1986(iVar0, 16);
			func_1986(iVar0, 256);
		}
		func_1986(iVar0, iParam2);
	}
	return iVar0;
}

void func_1458(int iParam0, int iParam1)
{
	if (func_916(iParam0, 1, 1))
	{
		func_602((*Global_1955500)[iParam0 /*16*/], iParam1);
	}
}

void func_1459(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_796(uParam0, 512);
	}
	else
	{
		func_795(uParam0, 512);
	}
}

void func_1460(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_796(uParam0, 2);
	}
	else
	{
		func_795(uParam0, 2);
	}
}

void func_1461(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_796(uParam0, 8);
	}
	else
	{
		func_795(uParam0, 8);
	}
}

int func_1462(int iParam0)
{
	int iVar0;
	
	iVar0 = func_1987(iParam0);
	if (iVar0 != -1)
	{
		return func_412(iVar0);
	}
	return 0;
}

void func_1463(int iParam0)
{
	func_914(iParam0, 131072);
	func_1988(iParam0, 0, 1);
}

bool func_1464(int iParam0, int iParam1)
{
	return func_797(iParam0->f_473, iParam1);
}

int func_1465(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, int iParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	bVar1 = false;
	fVar2 = func_1989(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_1990())
	{
		bVar1 = true;
		fVar3 = func_290(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_965(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_965(uParam0->f_121[0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_966(&(uParam0->f_121), iParam4, fParam1))
		{
			func_1399(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_1991(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_121[iVar0 /*9*/])->f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_121[iVar0 /*9*/])->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) && !(iParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_1992(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_1399(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_1991(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1466(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_1993(iParam0);
	if (iVar0 == 2)
	{
		if (bParam1)
		{
			return 1;
		}
		else if (iParam0->f_203 == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_1467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 131072;
		
		case 2:
			return 5;
		
		case 3:
			return 13;
		
		case 4:
			return 262144;
		
		default:
			break;
	}
	return 262144;
}

int func_1468(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_944(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_1994(fParam0))
	{
		return 0;
	}
	return 1;
}

void func_1469(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, iParam1);
}

void func_1470(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, bool bParam6)
{
	TASK::TASK_PLAY_ANIM(iParam0, func_1274(iParam1, bParam6), func_1485(iParam1, sParam2, sParam5, sParam3, sParam4), 4f, -4f, -1, 8208, 0, 0, 1118217, 0, 0, 0);
}

void func_1471(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_6 = uParam1;
	uParam0->f_3 = { vParam3 };
	uParam0->f_2 = 0;
	uParam0->f_7 = MISC::GET_GAME_TIMER();
	*uParam0 = *uParam2;
	uParam0->f_8 = iParam8;
}

void func_1472(int* iParam0, var uParam1, bool bParam2)
{
	if (!iParam0->f_2 && iParam0->f_7 != 0)
	{
		if ((!bParam2 && !func_1995(0)) || (MISC::GET_GAME_TIMER() - iParam0->f_7) > 3500)
		{
			if (MAP::DOES_BLIP_EXIST(*iParam0))
			{
				MAP::REMOVE_BLIP(iParam0);
			}
			if (!func_242(iParam0->f_3))
			{
				*uParam1 = MAP::_0x554D9D53F696D002(iParam0->f_1, iParam0->f_3);
				iParam0->f_2 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_6))
			{
				*uParam1 = MAP::_0x23F74C2FDA6E7C61(iParam0->f_1, iParam0->f_6);
				iParam0->f_2 = 1;
			}
			if (iParam0->f_2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_9))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, iParam0->f_9);
				}
			}
		}
	}
}

char* func_1473(int iParam0)
{
	if (func_1996(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			
			case 1:
				return "GREET_NEG";
			
			case 2:
				return "GREET_SPOS";
			
			case 3:
				return "GREET_SNEG";
			
			case 4:
				return "GREET_ACC";
			
			case 5:
				return "GREET_REJ";
			
			case 6:
				return "BEAT_GRT_NEG";
			
			case 7:
				return "INTERACT_GREET";
			
			case 8:
				return "INTERACT_DEFUSE";
			
			case 9:
				return "INTERACT_LET_GO";
			
			case 10:
				return "INTERACT_INSULT";
			
			case 11:
				return "INTERACT_THREATEN";
			
			case 12:
				return "INTERACT_ROB";
			
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			
			case 14:
				return "INTERACT_ROB_ACCEPT";
			
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			
			case 16:
				return "INTERACT_STOP_WITNESS";
			
			case 17:
				return "INTERACT_STOP_VEHICLE";
			
			case 18:
				return "INTERACT_STOP_HORSE";
			
			case 19:
				return "INTERACT_REQUEST_RIDE";
			
			case 20:
				return "INTERACT_STEAL_HORSE";
			
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			
			case 22:
				return "INTERACT_HORSE";
			
			case 23:
				return "INTERACT_CALLOUT";
			
			case 24:
				return "INTERACT_QUESTION";
			
			case 25:
				return "INTERACT_ENCOURAGE";
			
			case 26:
				return "INTERACT_INTERVENE";
			
			case 27:
				return "INTERACT_CONFRONT";
			
			case 28:
				return "RE_INTER_TRUTH";
			
			case 29:
				return "RE_INTER_LIE";
			
			case 30:
				return "INTERACT_QUIT";
			
			case 31:
				return "RE_INTER_DIRECT";
			
			case 32:
				return "INTERACT_SCOLD";
			
			case 33:
				return "INTERACT_PRAISE";
			
			case 34:
				return "INTERACT_ASSIST";
			
			case 35:
				return "INTERACT_MISLEAD";
			
			case 36:
				return "INTERACT_ASK";
			
			case 37:
				return "INTERACT_DEMAND";
			
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_1474(int* iParam0, int iParam1, char* sParam2)
{
	func_1997(iParam0->f_21[iParam1 /*17*/], sParam2);
}

int func_1475(int iParam0)
{
	if (!func_1359(iParam0))
	{
		return 0;
	}
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

void func_1476(var uParam0, int iParam1, char* sParam2)
{
	(uParam0->f_21[iParam1 /*17*/])->f_13 = sParam2;
}

void func_1477(var uParam0)
{
	if (func_433(uParam0->f_73, 16))
	{
		func_1998(uParam0, 1);
	}
}

void func_1478(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_1274(43, 0), "WAIT_01_UPPER", 1))
		{
			TASK::STOP_ANIM_TASK(iParam0->f_7, func_1274(43, 0), "WAIT_01_UPPER", -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_1274(43, 0), "WAIT_02_UPPER", 1))
		{
			TASK::STOP_ANIM_TASK(iParam0->f_7, func_1274(43, 0), "WAIT_02_UPPER", -2f);
		}
	}
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0->f_7, 500);
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0->f_7, 500);
}

int func_1479(int iParam0)
{
	switch (iParam0->f_208)
	{
		case 0:
			func_257(&(iParam0->f_212));
			iParam0->f_208 = 3;
			break;
		
		case 3:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_7))
			{
				if (func_955(&(iParam0->f_212), 10f))
				{
					TASK::TASK_PLAY_ANIM(iParam0->f_7, func_1274(43, 0), "WAIT_02_UPPER", 1090519040, -1056964608, -1, 67117072, 0, 0, 0, 0, 0, 0);
					iParam0->f_208++;
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_1274(43, 0), "WAIT_02_UPPER", 1))
			{
				func_257(&(iParam0->f_212));
				iParam0->f_208++;
			}
			break;
		
		case 5:
			if (func_955(&(iParam0->f_212), 20f))
			{
				TASK::TASK_PLAY_ANIM(iParam0->f_7, func_1274(19, 0), "NEGATIVE_UPPER", 1090519040, -1056964608, -1, 67117072, 0, 0, 0, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_1480(int iParam0)
{
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_1274(43, 0), "WAIT_01_UPPER", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_1274(43, 0), "WAIT_02_UPPER", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_1274(43, 0), "NEGATIVE_UPPER", 1))
	{
		return 1;
	}
	return 0;
}

int func_1481()
{
	if (func_203() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_1482(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0->f_7, &iVar0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), iVar0, iVar1);
}

int func_1483(int iParam0)
{
	return func_1108(func_1999(iParam0), 0, 0);
}

int func_1484(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 4;
		
		default:
			break;
	}
	return 2;
}

char* func_1485(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	switch (iParam0)
	{
		case 43:
			return sParam1;
		
		case 19:
			return sParam2;
		
		case 18:
			return sParam3;
		
		case 40:
			return sParam4;
		
		default:
			break;
	}
	return func_2000("[REHOC]", "PICK_HERB_STRING: Invalid Herb Index.");
}

bool func_1486(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, bool bParam6, bool bParam7)
{
	if (bParam7)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, 1775034443))
		{
			return true;
		}
	}
	return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_1274(iParam1, bParam6), func_1485(iParam1, sParam2, sParam5, sParam3, sParam4), 1);
}

void func_1487(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_2001(iParam0))
	{
		return;
	}
	if (func_2002(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_2003(iParam0);
	}
	if (!bParam1)
	{
		if (func_203() != -1)
		{
		}
		else
		{
			func_2004(iParam0);
		}
	}
	func_2005(iParam0, 1);
	if (func_203() == -1)
	{
		func_2006(iParam0, func_339());
	}
	func_2007(iParam0, 1);
	if (bParam2)
	{
		if (!func_139(0, 0, 1))
		{
			func_715(1, 6);
		}
	}
}

int func_1488(int iParam0)
{
	if (func_1483(*iParam0) >= func_1484(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_1489(int iParam0)
{
	if (!func_282(iParam0, 1))
	{
		if (!func_282(iParam0, 40))
		{
			func_2008(119);
			func_271(Global_1935630, 4);
			func_176(iParam0, 40);
		}
	}
}

void func_1490(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 || !func_73(&(iParam0->f_459)))
	{
		func_257(&(iParam0->f_459));
	}
	iParam0->f_471 = (iParam0->f_471 + (fParam1 + 5f));
}

int func_1491(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (PED::_0x569F1E1237508DEB(iParam0->f_7))
	{
		case 494354620:
			if (iParam3 || ((!bParam1 && !bParam2) && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.25f))
			{
				iParam0->f_468 = -576322004;
				iParam0->f_469 = 2093245709;
				iParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f);
				func_1515(iParam0, 1);
			}
			else
			{
				iParam0->f_468 = -816791935;
				iParam0->f_469 = -1904017806;
				iParam0->f_470 = 1f;
			}
			func_257(&(iParam0->f_441));
			return 1;
		
		case -1904017806:
			if (!bParam1 || iParam3)
			{
				iParam0->f_468 = 1747427334;
				iParam0->f_469 = 494354620;
				iParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
			}
			else
			{
				iParam0->f_469 = -1904017806;
				iParam0->f_470 = 1f;
			}
			func_257(&(iParam0->f_441));
			return 1;
		
		case 2093245709:
			if (iParam3 || (!bParam1 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.25f))
			{
				iParam0->f_468 = -2040485339;
				iParam0->f_469 = 494354620;
				iParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
			}
			else
			{
				iParam0->f_468 = 601769528;
				iParam0->f_469 = -1904017806;
				iParam0->f_470 = 1f;
			}
			func_257(&(iParam0->f_441));
			return 1;
	}
	return 0;
}

void func_1492(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::_0x23F74C2FDA6E7C61(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_0x662D364ABF16DE2F(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_1493(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_1484(*iParam0);
	sVar1 = func_1485(*iParam0, "REHEC_COL_YARROW", "REHEC_COL_HBSAGE", "REHEC_COL_GCURRANT", "REHEC_COL_VSNOWDROP");
	if (iParam1 >= func_1484(*iParam0) || iParam2)
	{
		if (!func_282(iParam0, 1))
		{
			func_918("HERB_DONE", 7500, 0, 0, -1, -1, 0);
		}
		else
		{
			func_918("HERB_DONE_RC", 7500, 0, 0, -1, -1, 0);
		}
		func_374(MISC::_CREATE_VAR_STRING(2, sVar1, iVar0, iVar0), 10000, 0, 0, 0, 1);
	}
	else
	{
		func_374(MISC::_CREATE_VAR_STRING(2, sVar1, iParam1, iVar0), 10000, 0, 0, 0, 1);
	}
}

void func_1494(int iParam0, bool bParam1)
{
	func_1455(iParam0, 1);
	func_960(&(iParam0->f_284), 1);
	if (!func_282(iParam0, 9) || func_282(iParam0, 28))
	{
		func_1476(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LOOKING");
	}
	else
	{
		func_1476(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_HANDOVER_PLAYER");
	}
	func_1474(&(iParam0->f_284), 0, "BEAT_CON_GIVE_PLANTS");
	if (!func_1528(iParam0, 9))
	{
		func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
		func_1474(&(iParam0->f_284), 1, func_1473(6));
		func_176(iParam0, 62);
	}
	else
	{
		func_475(&(iParam0->f_284), 1, 0);
	}
	if (!func_282(iParam0, 1))
	{
		if (!MAP::DOES_BLIP_EXIST(iParam0->f_9))
		{
		}
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
	{
		MAP::_0x662D364ABF16DE2F(iParam0->f_9, -981020806);
	}
	if (bParam1)
	{
		func_1493(iParam0, func_1483(*iParam0), 1);
	}
	func_1477(&(iParam0->f_284));
	iParam0->f_198 = 5;
}

void func_1495(int iParam0, bool bParam1)
{
	func_1455(iParam0, 0);
	if (!func_1528(iParam0, 8))
	{
		func_2009(&(iParam0->f_284), 1);
		func_475(&(iParam0->f_284), 0, 1);
		func_1476(&(iParam0->f_284), 0, func_2010(iParam0));
	}
	else
	{
		func_475(&(iParam0->f_284), 0, 0);
	}
	if (!func_282(iParam0, 1))
	{
		if (!func_1528(iParam0, 9))
		{
			func_475(&(iParam0->f_284), 1, 1);
			func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
			func_1474(&(iParam0->f_284), 1, func_1473(6));
			func_176(iParam0, 62);
		}
		else
		{
			func_913(iParam0, 62);
			func_475(&(iParam0->f_284), 1, 0);
		}
	}
	else
	{
		func_475(&(iParam0->f_284), 1, 0);
		func_1474(&(iParam0->f_284), 1, func_1473(10));
		func_913(iParam0, 62);
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
	{
		MAP::_0xB059D7BD3D78C16F(iParam0->f_9, -981020806);
	}
	if (bParam1)
	{
		func_918(func_1485(*iParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, func_1484(*iParam0), -1, 1);
	}
	func_1477(&(iParam0->f_284));
	iParam0->f_198 = 0;
}

int func_1496(int iParam0, var uParam1)
{
	if (!iParam0->f_536)
	{
		if (iParam0->f_535)
		{
			if (func_2011(iParam0))
			{
				iParam0->f_536 = 1;
			}
		}
	}
	switch (iParam0->f_198)
	{
		case 0:
			func_2012(iParam0);
			switch (func_2013(iParam0))
			{
				case 3:
					func_1494(iParam0, 1);
					break;
				
				case 1:
					func_257(&(iParam0->f_278));
					func_927(iParam0, 7);
					func_1463(iParam0);
					iParam0->f_198 = 1;
					break;
			}
			break;
		
		case 1:
			if (!func_1438(iParam0, 1))
			{
				if ((func_955(&(iParam0->f_278), 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
				{
					func_945(iParam0->f_7, Global_35, func_2014(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_257(&(iParam0->f_278));
					iParam0->f_198 = 2;
				}
			}
			break;
		
		case 2:
			if (func_955(&(iParam0->f_278), 3f) && !func_944(iParam0->f_7, 1))
			{
				func_228(&(iParam0->f_278));
				func_935(iParam0, 131072);
				func_1530(iParam0, 7);
				func_1490(iParam0, 5f, 0);
				func_2015(iParam0, 10f);
				func_1495(iParam0, 0);
			}
			break;
		
		case 3:
			if (func_1438(iParam0, 1))
			{
				func_46();
				func_228(&(iParam0->f_278));
				func_913(iParam0, 13);
				func_935(iParam0, 131072);
				func_915(iParam0);
				func_319(&(iParam0->f_9));
				iParam0->f_198 = 4;
			}
			break;
		
		case 4:
			if (!func_1438(iParam0, 1))
			{
				func_1490(iParam0, 3f, 0);
				iParam0->f_1 = 11;
			}
			break;
		
		case 5:
			if (!func_1488(iParam0))
			{
				if (func_1464(iParam0, 131072))
				{
					func_1490(iParam0, 3f, 0);
					func_935(iParam0, 131072);
				}
				func_1495(iParam0, 1);
			}
			else
			{
				switch (iParam0->f_534)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_532, false, 0))
						{
							func_475(&(iParam0->f_284), 0, 0);
							iParam0->f_534++;
						}
						break;
					
					case 1:
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_532, false, 0))
						{
							func_475(&(iParam0->f_284), 0, 1);
							iParam0->f_534 = (iParam0->f_534 - 1);
						}
						break;
				}
				switch (func_2016(iParam0, uParam1))
				{
					case 4:
						iParam0->f_535 = 1;
						func_2017(iParam0);
						func_914(iParam0, 262144);
						func_1455(iParam0, 0);
						func_960(&(iParam0->f_284), 0);
						func_176(iParam0, 17);
						func_2018(&(iParam0->f_133), *iParam0, &(iParam0->f_112), &(iParam0->f_90));
						func_2019(&(iParam0->f_133), func_1936(*iParam0));
						func_2019(&(iParam0->f_154), 5);
						func_2019(&(iParam0->f_175), 5);
						iParam0->f_495 = 0;
						iParam0->f_198 = 6;
						break;
					
					default:
						func_2019(&(iParam0->f_133), func_1936(*iParam0));
						func_2019(&(iParam0->f_154), 5);
						func_2019(&(iParam0->f_175), 5);
						break;
				}
			}
			break;
		
		case 6:
			if (func_2020(iParam0))
			{
				iParam0->f_198 = 7;
			}
			break;
		
		case 7:
			if (ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_133.f_1, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_915(iParam0);
				iParam0->f_198 = 8;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 993600644))
			{
				func_46();
				func_374("HRB_SUCCESS", 10000, 0, 0, 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_1196(func_2021(*iParam0), func_1484(*iParam0), 0, -142743235, 0);
				func_668(12, 0, 0, 0, 0, 0, 1065353216, 0);
				func_176(iParam0, 15);
				func_2022(*iParam0);
				func_2023(&(iParam0->f_90[19]), 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					MAP::_0xB059D7BD3D78C16F(iParam0->f_9, -981020806);
				}
				func_182(3);
				iParam0->f_198 = 8;
			}
			break;
		
		case 8:
			if (iParam0->f_536)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1497(var uParam0, int iParam1)
{
	func_1955(uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(uParam0->f_1, iParam1, -1);
}

int func_1498(int iParam0)
{
	if (func_282(iParam0, 36))
	{
		if (!TASK::_0x841475AC96E794D1(iParam0->f_87))
		{
			return 0;
		}
		if (!TASK::_0x6EF4E31B4D5D2DA0(iParam0->f_87, "p_mortarPestle02x_PH_R_HAND"))
		{
			return 0;
		}
		func_913(iParam0, 36);
	}
	return 1;
}

void func_1499(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_2024(uParam0, "objBook", uParam3[0], 0);
	func_2024(uParam0, "objBottle01", uParam3[11], 0);
	func_2024(uParam0, "objBurdock01", uParam3[4], 0);
	func_2024(uParam0, "objKnife", uParam3[1], 0);
	func_2024(uParam0, "objMBottle01", uParam3[9], 0);
	func_2024(uParam0, "objMBottle02", uParam3[10], 0);
	func_2024(uParam0, "objMortar", uParam3[3], 0);
	func_2024(uParam0, "ped_herbalist", iParam2, 0);
	if (bParam4)
	{
		switch (iParam1)
		{
			case 43:
				func_2024(uParam0, "objYarrow02", uParam3[19], 0);
				break;
			
			case 40:
				func_2024(uParam0, "Snoedrop", uParam3[19], 0);
				break;
			
			case 18:
				func_2024(uParam0, "Goldcurrant", uParam3[19], 0);
				break;
			
			case 19:
				func_2024(uParam0, "Hbsage", uParam3[19], 0);
				break;
		}
	}
}

void func_1500(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
	}
}

void func_1501(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_7, -944481653))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_242, uParam0->f_7, PED::GET_PED_BONE_INDEX(uParam0->f_7, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_242, true);
		func_945(uParam0->f_7, Global_35, func_2025(uParam0->f_240), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_7, -228458952))
	{
		func_2023(uParam0->f_242, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_242, false);
		func_2027(uParam0->f_7, func_2026(uParam0->f_240), 1, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 227258506) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1308194400))
	{
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -228458952))
	{
		func_2023(uParam0->f_242, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_242, false);
		func_945(uParam0->f_7, Global_35, func_2028(uParam0->f_240), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		if (func_1503(uParam0) != 4)
		{
			func_672(func_2026(uParam0->f_240), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else
		{
			func_2029(-1768086120, 0, 1065353216, 1, 0, 0);
		}
	}
}

void func_1502(int iParam0)
{
	int iVar0;
	
	if (func_1503(iParam0) == 2 || func_1503(iParam0) == 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 500, -1082130432, -1082130432, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST", Global_35, func_2030("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST"), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "PAMP_LOOP_HERBALIST", Global_35, -1, 1090519040, -1056964608, 8201, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 500, -1082130432, -1082130432, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST", Global_35, func_2030("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST"), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_LOOP_HERBALIST", Global_35, -1, 1090519040, -1056964608, 8201, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
}

int func_1503(int iParam0)
{
	switch (func_2031(iParam0))
	{
		case 43:
			if (func_1108(func_2026(0), 0, 0) < 3)
			{
				return 0;
			}
			else if (func_1108(func_2026(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
		
		case 19:
			if (!func_698(-142033055, 1, 0) && !func_698(544037666, 1, 0))
			{
				return 1;
			}
			else if (func_1108(func_2026(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
		
		case 18:
			if (func_1108(func_2026(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
		
		case 40:
			if (!func_698(2141714005, 1, 0) && !func_698(-770894319, 1, 0))
			{
				return 2;
			}
			else if (func_1108(func_2026(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
	}
	return 3;
}

void func_1504(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_1954(uParam0, "herbalist", iParam2, 0);
	func_1954(uParam0, "player", Global_35, 0);
	func_1954(uParam1, "herbalist", iParam2, 0);
	func_1954(uParam1, "player", Global_35, 0);
	if (iParam5 == 2 || iParam5 == 1)
	{
		func_1954(uParam0, "object_pamphlet", iParam4, 0);
		func_1954(uParam1, "object_pamphlet", iParam4, 0);
	}
	else
	{
		func_1954(uParam0, "object", iParam4, 0);
		func_1954(uParam1, "object", iParam4, 0);
	}
	func_1497(uParam1, iParam3);
}

char* func_1505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HOC_REWARD_REMEDY";
		
		case 1:
			return "RE_HOC_REWARD_RECIPE";
		
		case 2:
			return "RE_HOC_REWARD_RECIPE";
		
		case 3:
			return "RE_HOC_REWARD_TONIC";
		
		case 4:
			return "RE_HOC_REWARD_TONIC";
		
		default:
			break;
	}
	return func_2000("[RESS]", "REHOC_REWARD_TYPE_INITIAL_DIALOGUE_CONTEXT: Invalid Reward.");
}

void func_1506(var uParam0, int iParam1, float fParam2)
{
	func_2032(uParam0->f_21[iParam1 /*17*/], fParam2);
}

void func_1507(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar0 = { vVar0 - Vector(1f, 0f, 0f) };
	func_1955(uParam0, vVar0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
}

int func_1508(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0[4];
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	bool bVar32;
	vector3 vVar33;
	vector3 vVar36;
	vector3 vVar39;
	float fVar42;
	
	vVar17 = { -2.4f, 2.68f, 0f };
	vVar20 = { 0.77f, 4f, 0f };
	vVar23 = { -2.15f, 1.32f, 0f };
	vVar26 = { 0.21f, 2.2f, 0f };
	vVar29 = { func_2033(Global_35, iParam0->f_175.f_1, "player", "PB_HANDOVER", 1) };
	*(Var0[0 /*4*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_186(uParam1), func_187(uParam1), vVar17) };
	*(Var0[1 /*4*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_186(uParam1), func_187(uParam1), vVar20) };
	*(Var0[2 /*4*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_186(uParam1), func_187(uParam1), vVar23) };
	*(Var0[3 /*4*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_186(uParam1), func_187(uParam1), vVar26) };
	(Var0[0 /*4*/])->f_3 = func_727(Global_36, *(Var0[0 /*4*/]));
	(Var0[1 /*4*/])->f_3 = func_727(Global_36, *(Var0[1 /*4*/]));
	(Var0[2 /*4*/])->f_3 = func_727(Global_36, *(Var0[2 /*4*/]));
	(Var0[3 /*4*/])->f_3 = func_727(Global_36, *(Var0[3 /*4*/]));
	bVar32 = true;
	if (func_834(*(Var0[0 /*4*/]), *(Var0[1 /*4*/]), Global_36))
	{
		bVar32 = true;
	}
	else if (func_834(*(Var0[3 /*4*/]), *(Var0[2 /*4*/]), Global_36))
	{
		bVar32 = false;
	}
	else if ((Var0[0 /*4*/])->f_3 + (Var0[1 /*4*/])->f_3) > ((Var0[0 /*4*/])->f_3 + (Var0[1 /*4*/])->f_3)
	{
		bVar32 = false;
	}
	if (bVar32)
	{
		*uParam2 = { vVar29 };
		uParam2->f_3 = func_1035(*uParam2, ENTITY::GET_ENTITY_COORDS(iParam0->f_7, true, false), 1);
		return 0;
	}
	else if (func_834(*(Var0[2 /*4*/]), *(Var0[3 /*4*/]), Global_36))
	{
		vVar33 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_7, true, false) };
		vVar36 = { func_2033(Global_35, iParam0->f_154.f_1, "herbalist", "PB_HANDOVER", 1) };
		vVar39 = { func_2033(Global_35, iParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		fVar42 = BUILTIN::VDIST(vVar36, vVar39);
		if ((Var0[2 /*4*/])->f_3 < (Var0[3 /*4*/])->f_3)
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * func_2034(vVar33, *(Var0[2 /*4*/]), 1065353216) };
		}
		else
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * func_2034(vVar33, *(Var0[3 /*4*/]), 1065353216) };
		}
		uParam2->f_3 = func_1035(*uParam2, vVar33, 1);
	}
	else
	{
		*uParam2 = { func_2033(Global_35, iParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		uParam2->f_3 = func_1035(*uParam2, ENTITY::GET_ENTITY_COORDS(iParam0->f_7, true, false), 1);
	}
	return 1;
}

void func_1509(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_228(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

int func_1510(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;
	
	if (!func_2035(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_124(7);
		}
		else
		{
			iVar0 = PED::_0x4C8B59171957BCF7(iParam0);
		}
		if (!func_756(iVar0, 1) || (!(VOLUME::_0x92A78D0BEDB332A3(iParam5) && func_2036(iVar0, iParam5, 1, 0)) && func_553(iParam0, iVar0, 1, 1) > fParam6))
		{
			return 1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (func_1277(iVar0) && func_1278(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_2037(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					*uParam1 = iVar0;
				}
			}
			else
			{
				*uParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return 1;
		}
		if (func_756(*uParam1, 1))
		{
			if (!(func_971(*uParam1, 518218985) || func_971(*uParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*uParam1, 0);
				POPULATION::_0xF74E134F40192884(*uParam1, 2);
				if (!func_242(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vParam2, fParam12, -1, 0.25f, false, 40000f);
				}
				if (VOLUME::_0x92A78D0BEDB332A3(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*uParam1, VOLUME::_0xF70F00013A62F866(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && func_242(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return 0;
}

int func_1511(int iParam0)
{
	switch (iParam0->f_210)
	{
		case 0:
			func_257(&(iParam0->f_212));
			iParam0->f_210++;
			break;
		
		case 1:
			if (func_955(&(iParam0->f_212), 14f))
			{
				func_945(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_TAKEORNOT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (func_1503(iParam0) == 2 || func_1503(iParam0) == 1)
				{
					func_2038(iParam0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DO_U_WANT_IT_PAMP_HERBALIST");
				}
				else
				{
					func_2038(iParam0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "DO_U_WANT_IT_HERBALIST");
				}
				iParam0->f_210++;
			}
			break;
		
		case 2:
			if (TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) == 1)
			{
				func_257(&(iParam0->f_212));
				iParam0->f_210++;
			}
			break;
		
		case 3:
			if (func_955(&(iParam0->f_212), 5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1512(var uParam0, int iParam1)
{
	func_2039(uParam0->f_21[iParam1 /*17*/], 0);
}

bool func_1513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return STREAMING::_0x19A6BE7D9C6884D3(iParam0, iParam1, iParam2, iParam3);
}

bool func_1514(int iParam0)
{
	return STREAMING::_0x9427C94D2E4094A4(iParam0, 0);
}

int func_1515(int iParam0, int iParam1)
{
	if (iParam1 || !func_282(iParam0, 36))
	{
		if (!TASK::_0x841475AC96E794D1(iParam0->f_87))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_ATTACHED(&(iParam0->f_90[3])))
		{
			ENTITY::DETACH_ENTITY(&(iParam0->f_90[3]), false, true);
		}
		if (!TASK::_0x8360C47380B6F351(iParam0->f_87, &(iParam0->f_90[3]), "p_mortarPestle02x_PH_R_HAND", 0))
		{
			return 0;
		}
		else
		{
			func_176(iParam0, 36);
		}
	}
	return 1;
}

void func_1516(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	func_1490(iParam0, 10f, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam2)
	{
		if (func_1503(iParam0) == 2 || func_1503(iParam0) == 1)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST", Global_35, func_2030("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST"), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		}
		else
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", Global_35, func_2030("SCRIPT_RE@SUSPENSION_TRAP@HANDOVER", "DONT_TAKE_OFFER_VICTIM"), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		}
	}
	func_1427(iParam0, 1, iParam1, 1, 0, 1, 0);
	func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
}

int func_1517(int iParam0)
{
	switch (iParam0->f_241)
	{
		case 0:
			if (func_1503(iParam0) == 2 || func_1503(iParam0) == 1)
			{
				return func_2040(Global_35, &(iParam0->f_175), "player", 5, &(iParam0->f_495), 1065353216, 1, 1);
			}
			else
			{
				return func_2040(Global_35, &(iParam0->f_175), "player", 4, &(iParam0->f_495), 1065353216, 1, 1);
			}
			break;
		
		case 1:
			if (func_1503(iParam0) == 2 || func_1503(iParam0) == 1)
			{
				return func_2040(Global_35, &(iParam0->f_154), "player", 5, &(iParam0->f_495), 1065353216, 1, 1);
			}
			else
			{
				return func_2040(Global_35, &(iParam0->f_154), "player", 4, &(iParam0->f_495), 1065353216, 1, 1);
			}
			break;
	}
	return 0;
}

void func_1518(int iParam0)
{
	int iVar0;
	
	func_1536(&(iParam0->f_9), iParam0->f_7, 0);
	PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 3);
	if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
	{
		if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
		{
			PED::_0xF1C03A5352243A30(iParam0->f_7);
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_1433(iParam0->f_7, 0, 1, 0) == joaat("weapon_unarmed"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, -618550132, false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	}
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
}

void func_1519(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_1520(var uParam0, float fParam1)
{
	if (func_955(uParam0, fParam1))
	{
		func_228(uParam0);
		return 1;
	}
	return 0;
}

void func_1521(int iParam0, float fParam1)
{
	if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1) || TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
	{
		TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, iParam0->f_483, iParam0->f_484, fParam1, 1, 0, 0, 0);
	}
}

int func_1522(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;
	
	uParam5 = uParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_2041())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_2042(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_553(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_257(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_2043(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = uParam15;
				Var3.f_2 = uParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_1802(func_2044(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_1523(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_434.f_5))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_434.f_5, 0))
		{
			if (!PED::_0xEEED8FAFEC331A70(iParam0->f_7, Global_36, 3))
			{
				if (!PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 3))
				{
					PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
				}
			}
			TASK::CLEAR_PED_TASKS(iParam0->f_434.f_5, 1, 0);
			if (ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0->f_434.f_5, Global_35, 3, 0, -1082130432, -1, 0);
			}
			else
			{
				TASK::_0x2E1D6D87346BB7D2(iParam0->f_7, Global_35, 1, 0);
			}
		}
	}
}

void func_1524(var uParam0)
{
	func_409(&(uParam0->f_73), 4);
}

void func_1525(var uParam0, var uParam1, int* iParam2, var uParam3, int iParam4)
{
	func_1961(uParam0, iParam2, uParam3, 1, 1);
	func_2045(*uParam0, uParam1, iParam4);
}

void func_1526(int iParam0)
{
	func_382(&(iParam0->f_112));
	func_382(&(iParam0->f_133));
	func_382(&(iParam0->f_154));
	func_382(&(iParam0->f_175));
	func_2023(iParam0->f_242, 1, 1);
	func_2023(&(iParam0->f_90[3]), 1, 1);
	func_2023(&(iParam0->f_90[19]), 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_242))
	{
		PHYSICS::ACTIVATE_PHYSICS(iParam0->f_242);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_90[3])))
	{
		PHYSICS::ACTIVATE_PHYSICS(&(iParam0->f_90[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_90[19])))
	{
		PHYSICS::ACTIVATE_PHYSICS(&(iParam0->f_90[19]));
	}
}

int func_1527(int iParam0)
{
	if (((iParam0->f_203 == 6 || iParam0->f_203 == 7) || iParam0->f_203 == 14) || iParam0->f_203 == 15)
	{
		return 1;
	}
	return 0;
}

bool func_1528(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0->f_6, iParam1);
}

void func_1529(int iParam0)
{
	if (func_2046(iParam0, 2))
	{
		if (iParam0->f_203 != 20)
		{
			func_257(&(iParam0->f_441));
		}
	}
}

void func_1530(int iParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(iParam0->f_6), iParam1);
}

char* func_1531(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	if (func_1481())
	{
		StringConCat(&cVar0, "_J", 64);
	}
	return func_1048(cVar0);
}

void func_1532(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (iParam1)
	{
		case 0:
			sVar0 = func_1531("RE_HEC_UNI_V1_UNDERSTAND");
			break;
		
		case 1:
			sVar0 = func_1531("RE_HEC_UNI_V1_LEAVEME");
			break;
		
		case 2:
			sVar0 = func_1531("RE_HEC_UNI_V1_YOURECRAZY");
			break;
		
		case 3:
			sVar0 = func_1531("RE_HEC_UNI_V1_HADENOUGH");
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_945(iParam0->f_7, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
	}
}

int func_1533(int iParam0)
{
	if ((AUDIO::_0xFE5C6177064BD390(1) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
	{
		func_958(iParam0->f_284.f_21[0 /*17*/]);
		func_958(iParam0->f_284.f_21[1 /*17*/]);
	}
	switch (iParam0->f_474)
	{
		case 0:
			if (!func_1528(iParam0, 0))
			{
				func_475(&(iParam0->f_284), 0, 1);
			}
			func_475(&(iParam0->f_284), 1, 1);
			func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTING");
			func_1477(&(iParam0->f_284));
			iParam0->f_474 = 1;
			break;
		
		case 1:
			func_927(iParam0, 0);
			func_927(iParam0, 1);
			func_960(&(iParam0->f_284), 1);
			func_1476(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LEAVEYOU");
			func_1474(&(iParam0->f_284), 0, func_1473(8));
			func_1476(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_KILLYOU");
			func_1474(&(iParam0->f_284), 1, func_1473(10));
			func_1477(&(iParam0->f_284));
			iParam0->f_474 = 2;
			break;
		
		case 2:
		case 3:
			return 1;
	}
	return 0;
}

void func_1534(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
	}
	PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 2);
	if (func_1433(Global_35, 0, 1, 0) != joaat("weapon_unarmed") && !WEAPON::_0x959383DCD42040DA(func_1433(Global_35, 0, 1, 0)))
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
	}
	else
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_176(iParam0, 26);
		func_961(&(iParam0->f_284), &(iParam0->f_7), 1);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 297, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 301, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 315, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 130, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 178, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 330, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 317, true);
	}
	if (!bParam1)
	{
		func_1519(iParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	func_1536(&(iParam0->f_9), iParam0->f_7, 0);
}

void func_1535(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_923((*uParam0)[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_1536(int* iParam0, int iParam1, bool bParam2)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	func_1492(iParam1, iParam0, 831283580, 580546400, 0, 0);
	if (bParam2)
	{
		func_2047(iParam1, -1034486097, 1);
	}
	else
	{
		func_2047(iParam1, 942020339, 1);
	}
}

void func_1537(int* iParam0)
{
	func_960(iParam0, 0);
	func_1474(iParam0, 0, func_1473(7));
	func_1474(iParam0, 1, func_1473(10));
}

void func_1538(var uParam0)
{
	func_601(uParam0, 0);
	uParam0->f_75 = 0;
}

int func_1539(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_7, 0))
	{
		if (uParam0->f_203 != 0)
		{
			uParam0->f_203 = 0;
		}
		return 0;
	}
	if (func_1464(uParam0, 262144))
	{
		return 0;
	}
	*uParam1 = func_2048(uParam0);
	*uParam2 = 0;
	*uParam3 = (func_1464(uParam0, 65536) || func_2049(uParam0, *uParam1, 0));
	*uParam4 = (*uParam3 && !func_2050(uParam0, -1904017806));
	*uParam5 = (func_1464(uParam0, 16) && PED::_0x569F1E1237508DEB(uParam0->f_7) == 2093245709);
	return 1;
}

int func_1540(var uParam0, int iParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (bParam4 && func_2050(uParam0, -1904017806))
	{
		func_257(&(uParam0->f_441));
		return 4;
	}
	else if (func_2051(uParam0, &bParam2, iParam1, 1))
	{
		return func_1988(uParam0, bParam2, 1);
	}
	else if (func_1491(uParam0, bParam4, bParam5, 0))
	{
		return 3;
	}
	return 2;
}

int func_1541(var uParam0, int iParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 1;
	bVar1 = PED::_0x68821369A2CEADD5(uParam0->f_7, uParam0->f_468);
	bVar2 = (bParam5 || ((uParam3 && func_2050(uParam0, 2093245709)) && uParam0->f_469 != 2093245709));
	iVar3 = TASK::_0xA92450B5AE687AAF(uParam0->f_87);
	if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 1))
	{
		return 19;
	}
	if (!bVar1)
	{
		if (bParam5)
		{
			if (uParam0->f_469 == 2093245709)
			{
				if (func_2052(uParam0, 0, 0))
				{
					return 0;
				}
			}
		}
		if (!bVar2)
		{
			if (func_2051(uParam0, &bParam2, iParam1, 1))
			{
				return func_1988(uParam0, bParam2, 1);
			}
		}
		else if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 1))
		{
			func_257(&(uParam0->f_444));
			return 20;
		}
	}
	if (func_2050(uParam0, uParam0->f_469))
	{
		if (func_2052(uParam0, 0, 0))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					func_2053(uParam0, -1891374763, 5);
					break;
				
				default:
					func_2053(uParam0, -756969178, 5);
					break;
			}
			func_257(&(uParam0->f_441));
			uParam0->f_468 = 0;
			return 4;
		}
	}
	else
	{
		if (!STREAMING::_0x19A6BE7D9C6884D3(iVar3, 262144, ENTITY::GET_ENTITY_MODEL(uParam0->f_7), PED::_0x569F1E1237508DEB(uParam0->f_7)))
		{
			iVar0 = 0;
		}
		if (!STREAMING::_0x19A6BE7D9C6884D3(iVar3, 262145, ENTITY::GET_ENTITY_MODEL(uParam0->f_7), uParam0->f_469))
		{
			iVar0 = 0;
		}
		if (iVar0 && func_2052(uParam0, 0, 1))
		{
			if (!bVar1)
			{
				PED::_0xD65FDC686A031C83(uParam0->f_7, uParam0->f_468, 0.5f);
			}
			func_2054(uParam0);
		}
	}
	return 3;
}

int func_1542(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if ((bParam5 || bParam4) || !PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_7))
	{
		return 0;
	}
	else if (func_2051(uParam0, &bParam2, iParam1, 1))
	{
		return func_1988(uParam0, bParam2, 1);
	}
	else if (func_2055(uParam0) && func_2049(uParam0, iParam1, 1))
	{
		if (!func_73(&(uParam0->f_441)) || func_955(&(uParam0->f_441), uParam0->f_470))
		{
			if (func_2052(uParam0, 0, 1))
			{
				return 6;
			}
		}
	}
	else if (!bParam3)
	{
		if (!func_73(&(uParam0->f_441)) || func_955(&(uParam0->f_441), func_290(func_2050(uParam0, -1904017806), 3f, uParam0->f_470)))
		{
			return 0;
		}
	}
	return 4;
}

int func_1543(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::_0x79197F7D2BB5E73A(uParam0->f_7, uParam0->f_89, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@STAND_2_SIT", "STAND_2_SIT", func_1956(-1189657660), 0))
	{
		return 7;
	}
	return 6;
}

int func_1544(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_7, 0) && PED::_0x9C54041BB66BCF9E(uParam0->f_7, uParam0->f_89))
	{
		if (func_2052(uParam0, 0, 1))
		{
			if (!func_1464(uParam0, 64))
			{
				if (func_2051(uParam0, &bParam2, iParam1, 1))
				{
					return func_1988(uParam0, bParam2, 1);
				}
				else
				{
					return 10;
				}
			}
		}
	}
	return 7;
}

int func_1545(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_257(&(uParam0->f_447));
	return 12;
}

int func_1546(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_2051(uParam0, &bParam2, iParam1, 1))
	{
		return func_1988(uParam0, bParam2, 1);
	}
	else
	{
		if (!func_73(&(uParam0->f_447)))
		{
			func_257(&(uParam0->f_447));
		}
		if ((!func_797(iParam1, 8) || !func_73(&(uParam0->f_447))) || func_955(&(uParam0->f_447), (7f * 60f)))
		{
			if (func_2052(uParam0, 0, 1))
			{
				return 14;
			}
		}
	}
	return 12;
}

int func_1547(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::_0x79197F7D2BB5E73A(uParam0->f_7, uParam0->f_87, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@SIT_2_STAND", "SIT_2_STAND", func_1956(-1904017806), 0))
	{
		return 15;
	}
	return 14;
}

int func_1548(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_7, 0) && PED::_0x9C54041BB66BCF9E(uParam0->f_7, uParam0->f_87))
	{
		if (func_2052(uParam0, 0, 1))
		{
			if (!func_1464(uParam0, 64))
			{
				if (func_2051(uParam0, &bParam2, iParam1, 1))
				{
					return func_1988(uParam0, bParam2, 1);
				}
				else
				{
					return 2;
				}
			}
		}
	}
	return 15;
}

int func_1549(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_1439(uParam0->f_7);
	if (bParam5)
	{
		func_257(&(uParam0->f_444));
		return 20;
	}
	else if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 1))
	{
		if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 0))
		{
			func_257(&(uParam0->f_444));
			return 19;
		}
	}
	else if (func_2052(uParam0, 0, 1))
	{
		if (!func_73(&(uParam0->f_444)) || func_955(&(uParam0->f_444), 2f))
		{
			func_257(&(uParam0->f_444));
			func_1521(uParam0, -1f);
		}
	}
	return 18;
}

int func_1550(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_1439(uParam0->f_7);
	switch (func_2056(uParam0, iParam1))
	{
		case 0:
			func_2057(uParam0);
			break;
		
		case 1:
			func_2057(uParam0);
			break;
		
		case 2:
			func_257(&(uParam0->f_444));
			return 20;
	}
	return 19;
}

int func_1551(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	
	bVar0 = func_2052(uParam0, 0, 1);
	if (bParam4 || bParam5)
	{
		if (bVar0)
		{
			return 0;
		}
		else
		{
			func_2017(uParam0);
		}
	}
	else if (func_2051(uParam0, &bParam2, iParam1, 0))
	{
		return func_1988(uParam0, 0, 1);
	}
	else if (func_955(&(uParam0->f_444), 2f))
	{
		if (bVar0 && !TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 1))
		{
			if (!func_2050(uParam0, -1189657660))
			{
				func_1490(uParam0, MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 14f), 0);
				if (!func_2050(uParam0, -1904017806) && func_797(iParam1, 65536))
				{
					return 2;
				}
				else
				{
					return 4;
				}
			}
			else
			{
				func_1490(uParam0, MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 14f), 0);
				return 12;
			}
		}
		else
		{
			func_2017(uParam0);
		}
	}
	return 20;
}

bool func_1552(int iParam0)
{
	return func_433(iLocal_808, iParam0);
}

void func_1553(int iParam0)
{
	func_409(&iLocal_808, iParam0);
}

int func_1554(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		
		case 3:
			iVar0 = 192;
			break;
		
		case 2:
			iVar0 = 208;
			break;
		
		case 4:
			iVar0 = 212;
			break;
		
		case 5:
			iVar0 = 77;
			break;
		
		case 7:
			iVar0 = 76;
			break;
		
		case 6:
			iVar0 = 96;
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_1555(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam9;
	func_2058(&iVar0);
	if (func_797(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_2059(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_797(iVar0, 134217728))
	{
		func_2060(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_491(558))
				{
					func_299(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

void func_1556(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_838((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

void func_1557(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_1558(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;
	
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_2061(iParam0, uParam1, 1);
	func_2062(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_1559(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

void func_1560(int* iParam0, bool bParam1)
{
	func_960(iParam0, !bParam1);
}

int func_1561(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_1562(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (func_1561(uParam0, fParam1, fParam2, uParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_844() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

void func_1563(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

char* func_1564(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_862(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_2063(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_2064(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_1565(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1566(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0 /*12*/]);
		}
		iVar0++;
	}
	return 0;
}

void func_1567(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 27)
	{
		if (&uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			*(uParam0->f_13[iVar12 /*12*/]) = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1568(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1569(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1570(int iParam0)
{
	return iParam0 != 0;
}

bool func_1571(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_1572(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1571(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_2065(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1573(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_1357(iParam0))
	{
		return;
	}
	iVar0 = func_1904(iParam0);
	func_2066(iVar0, iParam1);
}

void func_1574(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_1357(iParam0))
	{
		return;
	}
	iVar0 = func_1904(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

void func_1575(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_1357(iParam0))
	{
		return;
	}
	iVar0 = func_1904(iParam0);
	if (bParam1)
	{
		func_2067(iParam0, 4);
		func_2066(iVar0, 1);
		func_2068(iVar0, 1);
	}
	else
	{
		func_2069(iParam0, 4);
		func_2068(iVar0, 0);
	}
}

float func_1576(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_1357(iParam0))
	{
		return 0f;
	}
	iVar0 = func_1904(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_1577(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_1357(iParam0))
	{
		return false;
	}
	iVar0 = func_1904(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_1578(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	
	Var0 = { func_239(uParam0) };
	Var8 = { func_495(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

int func_1579(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_2070(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1580(var uParam0, char* sParam1)
{
	struct<8> Var0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_239(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_348, sParam1);
	}
}

int func_1581(var uParam0)
{
	if (-1829635046 == func_2071(81053684))
	{
		if (func_2072(uParam0))
		{
			return 1;
		}
	}
	else if (func_2073(-525676072, uParam0))
	{
		if (func_2072(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1582(int iParam0)
{
	int iVar0;
	
	if (func_203() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_0x675680D089BFA21F(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

void func_1583(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_891(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_2074(1);
	}
}

void func_1584()
{
	int iVar0;
	
	iVar0 = func_1433(Global_35, 9, 1, 0);
	if (func_891(iVar0))
	{
		return;
	}
	iVar0 = func_1433(Global_35, 7, 1, 0);
	if (func_891(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1433(Global_35, 0, 1, 0);
	if (func_891(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1433(Global_35, 1, 1, 0);
	if (func_891(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1433(Global_35, 18, 1, 0);
	if (func_891(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_2075();
	if (func_891(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_545(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2076(3072, 0);
	if (func_891(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_545(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

void func_1585(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1586()
{
	return &Global_1899515;
}

void func_1587(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

var func_1588()
{
	return (func_2077() || func_2078());
}

Vector3 func_1589(var uParam0)
{
	return uParam0->f_409;
}

float func_1590(var uParam0)
{
	return uParam0->f_412;
}

void func_1591(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_2079(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_1663(iParam0))
	{
		if (func_1307(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_433(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1591(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1591(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_433(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_433(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_433(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_433(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_433(iParam5, 129))
	{
		if (func_433(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_433(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_433(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_433(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_1663(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_433(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_433(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_1592(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1593(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1598(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_2080(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_1594(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_1595(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1200(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

bool func_1596(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_1597(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 10;
	if (func_1595(1108822547, 6))
	{
		if (bParam2)
		{
			func_1593(iParam0, iVar0, func_203() != -1, 0, 0);
			func_1599(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1600(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

int func_1598(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		
		case 1:
			return -1130352927;
		
		case 2:
			return 389988485;
		
		case 3:
			return 1780904876;
		
		case 4:
			return 1367443060;
		
		case 5:
			return -1506259487;
		
		case 6:
			return -676503695;
		
		case 7:
			return 383349088;
		
		case 8:
			return -1292426046;
		
		case 9:
			return 1422688607;
		
		case 10:
			return 1108822547;
		
		case 11:
			return -338487716;
		
		case 12:
			return 1742327865;
		
		case 13:
			return 1600962399;
		
		case 14:
			return 1849504272;
		
		case 15:
			return 1672288269;
		
		case 16:
			return 1250092473;
		
		case 17:
			return -893163968;
		
		case 18:
			return -450913544;
		
		case 19:
			return -1364808185;
		
		case 20:
			return -1197751823;
		
		case 21:
			return 304805134;
		
		case 22:
			return -1505978566;
		
		case 23:
			return 1145151482;
		
		case 24:
			return -1176744536;
		
		case 25:
			return 673166414;
		
		case 26:
			return -207860920;
		
		case 27:
			return 99217379;
		
		case 28:
			return -735900586;
		
		case 29:
			return -426430150;
		
		case 30:
			return 1788623170;
		
		case 31:
			return -1130865351;
		
		case 32:
			return -1884748965;
		
		case 33:
			return -1586649372;
		
		case 34:
			return 788010710;
		
		case 35:
			return 1958421083;
		
		case 36:
			return -1944638739;
		
		case 37:
			return 1900541263;
		
		case 38:
			return -1489346253;
		
		case 39:
			return -358215195;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1599(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1200(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_1200(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_1600(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1200(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_1200(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_1200(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1601(var uParam0)
{
	struct<8> Var0;
	
	uParam0->f_358 = { Var0 };
}

void func_1602(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_366[iVar0 /*9*/], "", 64);
		iVar0++;
	}
}

void func_1603()
{
	Global_1911774 = 1;
}

void func_1604(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

int func_1605(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	func_2081();
	if (iParam2 == 39)
	{
		Var0 = { func_1209(iParam0, 1, 0) };
		iParam2 = func_1200(func_1210(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_1124(iParam0, 866047851) && func_2082(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_1594(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_2083(func_1598(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_2084(iParam2);
	func_2085(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1788(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1788(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1794(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_2086(iParam0, iParam2, iParam1, func_203() != -1);
	if (bParam4)
	{
		func_2087(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_2087(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_1600(func_1598(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_1606(bool bParam0, bool bParam1, bool bParam2)
{
	func_2088(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1607()
{
	func_2089(&(Global_1946804->f_2776));
	func_2090(32768);
	func_1600(1108822547, 8, 6);
}

int func_1608(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_1200(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1609(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_863(Var0);
}

int func_1610(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	
	if (!func_1104(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1389(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_1295(bParam6), &Var0, 0);
	return uVar4;
}

bool func_1611()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

void func_1612(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	func_383(uParam0->f_1771);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_1771 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630->f_12)
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1771, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_565(uParam0, 1048576);
	func_565(uParam0, 2097152);
}

void func_1613(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return;
	}
	func_383(uParam0->f_1771);
	MISC::GET_MODEL_DIMENSIONS(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
	if (VEHICLE::_0xEA44E97849E9F3DD(iVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = VEHICLE::_0xA8BA0BAE0173457B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), iVar14);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
	}
	uParam0->f_1771 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1771, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	func_618(uParam0, 2097152);
	func_565(uParam0, 1048576);
}

void func_1614(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	func_383(uParam0->f_1771);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_1778 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1778 * FtoV(func_1615(iParam1)) };
	uParam0->f_1771 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1771, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_618(uParam0, 1048576);
	func_565(uParam0, 2097152);
}

float func_1615(int iParam0)
{
	if (TASK::IS_PED_SPRINTING(iParam0))
	{
		return 1f;
	}
	if (TASK::IS_PED_RUNNING(iParam0))
	{
		return 0.9f;
	}
	if (TASK::IS_PED_WALKING(iParam0))
	{
		return 0.8f;
	}
	return 0.7f;
}

int func_1616(int iParam0)
{
	switch (func_203())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

int func_1617(int iParam0)
{
	switch (func_203())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

bool func_1618(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

void func_1619()
{
	PAD::DISABLE_CONTROL_ACTION(0, -349518703, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1098542161, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1591726981, false);
}

void func_1620(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (func_1621(uParam0->f_1529[iParam1 /*15*/]))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!func_979((uParam0->f_1529[iParam1 /*15*/])->f_10, 256))
			{
				if (func_1581(&(uParam0->f_1799)))
				{
					func_1641(uParam0->f_1799, 0);
					func_2091(uParam0->f_1529[iParam1 /*15*/], 2);
				}
			}
			break;
		
		case 1:
			if (!func_979((uParam0->f_1529[iParam1 /*15*/])->f_10, 256))
			{
				if (!func_2092())
				{
					func_2091(uParam0->f_1529[iParam1 /*15*/], 0);
				}
			}
			else
			{
				func_2091(uParam0->f_1529[iParam1 /*15*/], 0);
			}
			break;
		
		case 2:
			if (!func_2093())
			{
				func_2091(uParam0->f_1529[iParam1 /*15*/], 0);
			}
			break;
	}
}

int func_1621(var uParam0)
{
	return uParam0->f_14;
}

int func_1622(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { vParam4 - vParam1 };
	vVar3 = { vParam1 - vParam10 };
	fVar6 = func_2094(vParam7, vVar0);
	fVar7 = -func_2094(vParam7, vVar3);
	if (MISC::ABSF(fVar6) < 1E-08f)
	{
		return 0;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { vParam1 + Vector(fVar8, fVar8, fVar8) * vVar0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return 0;
	}
	return 1;
}

void func_1623(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, var uParam8, var uParam9)
{
	vector3 vVar0;
	vector3 vVar3[4];
	vector3 vVar16[4];
	float fVar29[4];
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar45;
	
	if (!func_2095(uParam0, iParam1))
	{
		*uParam2 = { (uParam0->f_912[iParam1 /*41*/])->f_1 + Vector(0f, (BUILTIN::COS((uParam0->f_912[iParam1 /*41*/])->f_12) * (uParam0->f_912[iParam1 /*41*/])->f_11), (BUILTIN::SIN((uParam0->f_912[iParam1 /*41*/])->f_12) * (uParam0->f_912[iParam1 /*41*/])->f_11)) };
		vParam3 = { (uParam0->f_912[iParam1 /*41*/])->f_1 + Vector(0f, (BUILTIN::COS((uParam0->f_912[iParam1 /*41*/])->f_13) * (uParam0->f_912[iParam1 /*41*/])->f_11), (BUILTIN::SIN((uParam0->f_912[iParam1 /*41*/])->f_13) * (uParam0->f_912[iParam1 /*41*/])->f_11)) };
	}
	else
	{
		*uParam2 = { (uParam0->f_912[iParam1 /*41*/])->f_1 + Vector(0f, ((BUILTIN::COS((uParam0->f_912[iParam1 /*41*/])->f_12) * (uParam0->f_912[iParam1 /*41*/])->f_11) + (uParam0->f_912[iParam1 /*41*/])->f_18), ((BUILTIN::SIN((uParam0->f_912[iParam1 /*41*/])->f_12) * (uParam0->f_912[iParam1 /*41*/])->f_11) + (uParam0->f_912[iParam1 /*41*/])->f_18)) };
		vParam3 = { (uParam0->f_912[iParam1 /*41*/])->f_1 + Vector(0f, ((BUILTIN::COS((uParam0->f_912[iParam1 /*41*/])->f_13) * (uParam0->f_912[iParam1 /*41*/])->f_11) + (uParam0->f_912[iParam1 /*41*/])->f_18), ((BUILTIN::SIN((uParam0->f_912[iParam1 /*41*/])->f_13) * (uParam0->f_912[iParam1 /*41*/])->f_11) + (uParam0->f_912[iParam1 /*41*/])->f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1793 && VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771)) && func_584(uParam0->f_1794, (uParam0->f_912[iParam1 /*41*/])->f_1, (uParam0->f_912[iParam1 /*41*/])->f_17, 1, 1))
	{
		vVar34 = { VOLUME::_0x3E2A25B2416DD67E(uParam0->f_1771) };
		vVar37 = { VOLUME::_0xF70F00013A62F866(uParam0->f_1771) };
		*(vVar3[0 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1794), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		*(vVar3[1 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1794), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		*(vVar3[2 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1794), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		*(vVar3[3 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1794), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		*(vVar16[0 /*3*/]) = { MISC::_0x83ACC65D9ACEC5EF((uParam0->f_912[iParam1 /*41*/])->f_1, *(vVar3[0 /*3*/]), *(vVar3[1 /*3*/]), true) };
		*(vVar16[1 /*3*/]) = { MISC::_0x83ACC65D9ACEC5EF((uParam0->f_912[iParam1 /*41*/])->f_1, *(vVar3[0 /*3*/]), *(vVar3[2 /*3*/]), true) };
		*(vVar16[2 /*3*/]) = { MISC::_0x83ACC65D9ACEC5EF((uParam0->f_912[iParam1 /*41*/])->f_1, *(vVar3[3 /*3*/]), *(vVar3[1 /*3*/]), true) };
		*(vVar16[3 /*3*/]) = { MISC::_0x83ACC65D9ACEC5EF((uParam0->f_912[iParam1 /*41*/])->f_1, *(vVar3[3 /*3*/]), *(vVar3[2 /*3*/]), true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0->f_912[iParam1 /*41*/])->f_1, *(vVar16[0 /*3*/]), true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0->f_912[iParam1 /*41*/])->f_1, *(vVar16[1 /*3*/]), true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0->f_912[iParam1 /*41*/])->f_1, *(vVar16[2 /*3*/]), true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0->f_912[iParam1 /*41*/])->f_1, *(vVar16[3 /*3*/]), true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (&fVar29[iVar40] < &fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { *(vVar16[iVar41 /*3*/]) };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*uParam8 = func_1035((uParam0->f_912[iParam1 /*41*/])->f_1, vVar0, 0);
	if (*uParam8 < (uParam0->f_912[iParam1 /*41*/])->f_12)
	{
		*uParam8 = (*uParam8 + 360f);
	}
	if ((uParam0->f_912[iParam1 /*41*/])->f_13 < (uParam0->f_912[iParam1 /*41*/])->f_12)
	{
		*uParam9 = ((uParam0->f_912[iParam1 /*41*/])->f_13 + 360f);
	}
	else
	{
		*uParam9 = (uParam0->f_912[iParam1 /*41*/])->f_13;
	}
	if (*uParam8 < *uParam9)
	{
		vVar42 = { (uParam0->f_912[iParam1 /*41*/])->f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1772 = { vVar42 + Vector(0f, (BUILTIN::COS(*uParam8) * (uParam0->f_912[iParam1 /*41*/])->f_11), (BUILTIN::SIN(*uParam8) * (uParam0->f_912[iParam1 /*41*/])->f_11)) };
		fVar45 = 0f;
		uParam0->f_1775 = { vVar42 + Vector(0f, ((BUILTIN::COS(*uParam8) * (uParam0->f_912[iParam1 /*41*/])->f_17) + fVar45), ((BUILTIN::SIN(*uParam8) * (uParam0->f_912[iParam1 /*41*/])->f_17) + fVar45)) };
	}
}

void func_1624(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((uParam0->f_3[iVar0 /*13*/])->f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_3[iVar0 /*13*/])->f_4)))
			{
				func_562(&(uParam0->f_1667), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), &((uParam0->f_3[iVar0 /*13*/])->f_4), 0);
			}
		}
		iVar0++;
	}
}

int func_1625(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == (uParam0->f_371[iVar0 /*18*/])->f_2 && &uParam0->f_371[iVar0 /*18*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1626(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((uParam0->f_912[iVar0 /*41*/])->f_29)
		{
			{
				return 1;
			}
		}
		iVar0++;
	}