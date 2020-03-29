//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NTKComplication, UIImage, UIView;
@protocol NTKComplicationDisplay, NTKEditOptionContainerView, NTKKeylineView;

@protocol NTKFaceViewComplicationFactory <NSObject>
- (NSUInteger)keylineLabelAlignmentForComplicationSlot:(NSString *)arg1;
- (UIView<NTKKeylineView> *)keylineViewForComplicationSlot:(NSString *)arg1;
- (void)configureComplicationView:(UIView *)arg1 forSlot:(NSString *)arg2;
- (UIView<NTKComplicationDisplay> *)newLegacyViewForComplication:(NTKComplication *)arg1 family:(long long)arg2 slot:(NSString *)arg3;
- (void)loadLayoutRules;

@optional
- (long long)legacyLayoutOverrideforComplicationType:(NSUInteger)arg1 slot:(NSString *)arg2;
- (UIView<NTKEditOptionContainerView> *)customEditOptionContainerViewForSlot:(NSString *)arg1;
- (BOOL)slotSupportsCurvedText:(NSString *)arg1;
- (void)curvedComplicationCircleRadius:(double )arg1 centerAngle:(double )arg2 maxAngularWidth:(double )arg3 circleCenter:(CGPoint )arg4 interior:(BOOL )arg5 forSlot:(NSString *)arg6;
- (UIImage *)pickerMaskForSlot:(NSString *)arg1;
- (long long)complicationPickerStyleForSlot:(NSString *)arg1;
@end
