//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptMessageCell.h>

@class CKAvatarView;

@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell
{
    CKAvatarView *_avatarView;
}

@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
// - (void).cxx_destruct;
- (void)setShowAvatarView:(BOOL)arg1 withContact:(id)arg2 preferredHandle:(id)arg3 avatarViewDelegate:(id)arg4;
- (void)layoutSubviewsForContents;
- (id)contactImageView;
- (void)dealloc;

@end
