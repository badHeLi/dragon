//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;

@protocol PLFileManager <NSObject>
- (BOOL)fileExistsAtPath:(NSString *)arg1 isDirectory:(BOOL )arg2;
- (BOOL)fileExistsAtPath:(NSString *)arg1;
- (NSDictionary *)attributesOfItemAtPath:(NSString *)arg1 error:(id )arg2;
@end
