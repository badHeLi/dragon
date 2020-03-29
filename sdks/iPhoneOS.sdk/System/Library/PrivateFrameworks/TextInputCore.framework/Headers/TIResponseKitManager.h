//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIResponseKitManaging-Protocol.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface TIResponseKitManager : NSObject <TIResponseKitManaging>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_conversationTurns;
}

+ (id)rewriteMoneyAttributes:(id)arg1;
+ (id)singletonInstance;
+ (id)sharedTIResponseKitManager;
// - (void).cxx_destruct;
- (id)cannedResponsesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(NSUInteger)arg6 shouldDisableAutoCaps:(BOOL)arg7 isBlacklisted:(BOOL)arg8;
- (id)indexesOfDuplicatesInCandidates:(id)arg1;
- (id)responseKitResponseCandidatesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 shouldDisableAutoCaps:(BOOL)arg5;
- (void)addNewConversationTurnToHistory:(id)arg1;
- (void)persistResponseKitDynamicDataToDisk;
- (void)resetResponseKit;
- (void)resetResponseKitConversationHistory;
- (void)updateResponseKitConversationHistoryWithMessage:(id)arg1 withSenderID:(id)arg2 withTimestamp:(id)arg3;
- (void)registerResponseKitResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 withClientID:(id)arg4 withSenderID:(id)arg5 withRecipientID:(id)arg6 withTimestamp:(id)arg7 shouldUpdateConversationHistory:(BOOL)arg8;
- (void)generateResponseKitSuggestionsForString:(id)arg1 withLanguage:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(NSUInteger)arg6 shouldDisableAutoCaps:(BOOL)arg7 stringIsBlacklisted:(BOOL)arg8 async:(BOOL)arg9 completionHandler:(id /* CDUnknownBlockType */)arg10;
- (id)init;

@end
