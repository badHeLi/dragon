//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HAPRelayStream, NSData, NSError, NSString;

@protocol HAPStreamDelegate <NSObject>
- (void)stream:(HAPRelayStream *)arg1 didReceiveData:(NSData *)arg2 withIdentifier:(NSString *)arg3;
- (void)stream:(HAPRelayStream *)arg1 didFailToWriteDataWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)stream:(HAPRelayStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)streamDidResume:(HAPRelayStream *)arg1;
- (void)streamDidSuspend:(HAPRelayStream *)arg1;
@end
