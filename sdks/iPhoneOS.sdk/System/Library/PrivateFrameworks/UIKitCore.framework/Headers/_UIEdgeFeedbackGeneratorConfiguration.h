//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;

@interface _UIEdgeFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_userInteractingThresholdFeedback;
    id /* CDUnknownBlockType */ _userInteractingThresholdFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_userInteractingBeyondEdgeFeedback;
    id /* CDUnknownBlockType */ _userInteractingBeyondEdgeFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_userInteractingReleaseFeedback;
    id /* CDUnknownBlockType */ _userInteractingReleaseFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_animatingThresholdFeedback;
    id /* CDUnknownBlockType */ _animatingThresholdFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_animatingMaximumExtentFeedback;
    id /* CDUnknownBlockType */ _animatingMaximumExtentFeedbackUpdateBlock;
    long long _defaultAxis;
    double _minDistanceFromEdge;
}

+ (id)_zoomConfiguration;
+ (id)swipePresentationConfiguration;
+ (id)sliderConfiguration;
+ (id)horizontalScrollConfiguration;
+ (id)verticalScrollConfiguration;
+ (id)defaultConfiguration;
+ (id)_scrollConfigurationWithAxis:(long long)arg1;
@property(nonatomic) double minDistanceFromEdge; // @synthesize minDistanceFromEdge=_minDistanceFromEdge;
@property(nonatomic, getter=_defaultAxis, setter=_setDefaultAxis:) long long defaultAxis; // @synthesize defaultAxis=_defaultAxis;
// - (void).cxx_destruct;
@property(copy, nonatomic) id /* CDUnknownBlockType */ animatingMaximumExtentFeedbackUpdateBlock; // @synthesize animatingMaximumExtentFeedbackUpdateBlock=_animatingMaximumExtentFeedbackUpdateBlock;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingMaximumExtentFeedback; // @synthesize animatingMaximumExtentFeedback=_animatingMaximumExtentFeedback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ animatingThresholdFeedbackUpdateBlock; // @synthesize animatingThresholdFeedbackUpdateBlock=_animatingThresholdFeedbackUpdateBlock;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingThresholdFeedback; // @synthesize animatingThresholdFeedback=_animatingThresholdFeedback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ userInteractingReleaseFeedbackUpdateBlock; // @synthesize userInteractingReleaseFeedbackUpdateBlock=_userInteractingReleaseFeedbackUpdateBlock;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingReleaseFeedback; // @synthesize userInteractingReleaseFeedback=_userInteractingReleaseFeedback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ userInteractingBeyondEdgeFeedbackUpdateBlock; // @synthesize userInteractingBeyondEdgeFeedbackUpdateBlock=_userInteractingBeyondEdgeFeedbackUpdateBlock;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *userInteractingBeyondEdgeFeedback; // @synthesize userInteractingBeyondEdgeFeedback=_userInteractingBeyondEdgeFeedback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ userInteractingThresholdFeedbackUpdateBlock; // @synthesize userInteractingThresholdFeedbackUpdateBlock=_userInteractingThresholdFeedbackUpdateBlock;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingThresholdFeedback; // @synthesize userInteractingThresholdFeedback=_userInteractingThresholdFeedback;
- (id)feedbackKeyPaths;
// - (id)copyWithZone:(_NSZone )arg1;
- (long long)requiredSupportLevel;

@end
