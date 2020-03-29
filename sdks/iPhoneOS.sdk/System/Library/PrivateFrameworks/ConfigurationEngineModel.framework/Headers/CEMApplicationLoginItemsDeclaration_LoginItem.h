//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMApplicationLoginItemsDeclaration_LoginItem : CEMPayloadBase
{
    NSString *_payloadPath;
    NSNumber *_payloadHide;
}

+ (id)buildRequiredOnlyWithPath:(id)arg1;
+ (id)buildWithPath:(id)arg1 withHide:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadHide; // @synthesize payloadHide=_payloadHide;
@property(copy, nonatomic) NSString *payloadPath; // @synthesize payloadPath=_payloadPath;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end
