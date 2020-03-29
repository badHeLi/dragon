//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAGradientLayer, CALayer;

@interface CAMStageLightAnimator : NSObject
{
    CAGradientLayer *_gradientLayer;
    CALayer *_circleLayer;
    NSUInteger _state;
    NSUInteger __appearingAnimationCount;
    CGRect _circleBaseFrame;
}

@property(nonatomic, setter=_setAppearingAnimationCount:) NSUInteger _appearingAnimationCount; // @synthesize _appearingAnimationCount=__appearingAnimationCount;
@property(nonatomic) CGRect circleBaseFrame; // @synthesize circleBaseFrame=_circleBaseFrame;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
@property(readonly, nonatomic) CALayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
// - (void).cxx_destruct;
- (void)_animateCircleGeometry:(CDStruct_f31c9284 )arg1 count:(NSUInteger)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)_animateCircleFromGeometry:(CDStruct_f31c9284)arg1 toGeometry:(CDStruct_f31c9284)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)_animateCircleToGeometry:(CDStruct_f31c9284)arg1 duration:(double)arg2 timing:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_animateGradientProperties:(CDStruct_9c823225 )arg1 count:(NSUInteger)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5;
- (void)_animateGradientFromProperties:(CDStruct_9c823225)arg1 toProperties:(CDStruct_9c823225)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5;
- (void)_animateGradientToProperties:(CDStruct_9c823225)arg1 duration:(double)arg2 timing:(id)arg3;
- (CDStruct_9c823225)_currentGradientProperties;
- (CDStruct_f31c9284)_currentCircleGeometry;
- (CDStruct_9c823225)_gradientPropertiesForGeometry:(CDStruct_d1ca95b4)arg1;
- (double)_circleLineWidth;
- (CDStruct_f31c9284)_circleGeometryForState:(NSUInteger)arg1;
- (CDStruct_d1ca95b4)_gradientGeometryForState:(NSUInteger)arg1;
- (void)_animateHidden;
- (void)_animateBounceIfNeeded;
- (void)_animateSearchingIfNeededFromState:(NSUInteger)arg1;
@property(readonly, nonatomic, getter=_isAppearing) BOOL _appearing;
- (void)_didFinishAppearing;
- (void)_animateAppearing;
- (void)setCircleBaseFrame:(CGRect)arg1 animated:(BOOL)arg2;
- (id)initWithGradientLayer:(id)arg1 circleLayer:(id)arg2;

@end
