//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AceObject, NSDictionary, NSError, NSString, SiriCoreAceConnectionAnalysisInfo, SiriCoreConnectionType, SiriCoreSiriBackgroundConnection;

@protocol SiriCoreSiriBackgroundConnectionDelegate <NSObject>
- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 didEncounterIntermediateError:(NSError *)arg2;
- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 didEncounterError:(NSError *)arg2 analysisInfo:(SiriCoreAceConnectionAnalysisInfo *)arg3;
- (void)siriBackgroundConnectionDidClose:(SiriCoreSiriBackgroundConnection *)arg1;
- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 didReceiveAceObject:(AceObject *)arg2;
- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 didOpenWithConnectionType:(SiriCoreConnectionType *)arg2 routeId:(NSString *)arg3 delay:(double)arg4;
- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 willStartWithConnectionType:(SiriCoreConnectionType *)arg2;

@optional
- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 willStartConnectionWithHTTPHeader:(NSDictionary *)arg2;
@end
