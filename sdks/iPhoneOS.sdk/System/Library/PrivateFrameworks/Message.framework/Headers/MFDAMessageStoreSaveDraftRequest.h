//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DADraftMessageRequest.h>

#import <Message/MFDAMailAccountRequest-Protocol.h>

@class NSString;

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest>
{
    NSString *_messageIDHeader;
    NSString *_folderID;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isUserRequested;
@property(readonly, nonatomic) BOOL shouldSend;
- (NSUInteger)generationNumber;
- (id)initWithMessage:(id)arg1 mailbox:(id)arg2;

@end
