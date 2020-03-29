//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class AVTAvatarActionButtonBlockHandler;

@interface AVTAvatarActionButton : UIButton
{
    BOOL _isDestructive;
    AVTAvatarActionButtonBlockHandler *_blockHandler;
}

+ (id)destructiveButtonWithTitle:(id)arg1 actionBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)defaultButtonWithTitle:(id)arg1 actionBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)buttonWithTitle:(id)arg1 actionBlock:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) AVTAvatarActionButtonBlockHandler *blockHandler; // @synthesize blockHandler=_blockHandler;
@property(nonatomic) BOOL isDestructive; // @synthesize isDestructive=_isDestructive;
// - (void).cxx_destruct;
- (void)performActionBlock;
- (id)initWithFrame:(CGRect)arg1;

@end
