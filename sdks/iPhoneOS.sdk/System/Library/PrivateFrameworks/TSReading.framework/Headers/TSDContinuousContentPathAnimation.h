//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDContentAnimation.h>

@interface TSDContinuousContentPathAnimation : TSDContentAnimation
{
    id /* CDUnknownBlockType */ _tick;
    id /* CDUnknownBlockType */ _isFinished;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ isFinished; // @synthesize isFinished=_isFinished;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tick; // @synthesize tick=_tick;
- (void)i_applyToLayer:(id)arg1 withTransformBlock:(id /* CDUnknownBlockType */)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;

@end
