//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADCalStoreInfo-Protocol.h>

@class NSString;

@interface CADMutableCalStoreInfo : NSObject <CADCalStoreInfo>
{
    BOOL _isLocalStore;
    BOOL _isEnabled;
    int _rowID;
    NSString *_storeName;
    NSString *_accountIdentifier;
    NSString *_delegatedAccountOwnerAccountIdentifier;
}

@property(copy, nonatomic) NSString *delegatedAccountOwnerAccountIdentifier; // @synthesize delegatedAccountOwnerAccountIdentifier=_delegatedAccountOwnerAccountIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) BOOL isLocalStore; // @synthesize isLocalStore=_isLocalStore;
@property(nonatomic) int rowID; // @synthesize rowID=_rowID;
// - (void).cxx_destruct;

@end
