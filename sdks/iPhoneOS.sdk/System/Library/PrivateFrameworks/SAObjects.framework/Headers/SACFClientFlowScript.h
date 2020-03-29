//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString, SACFScriptEncryptionParameters, SACFScriptUrlInformation;

@interface SACFClientFlowScript : SABaseAceObject
{
}

+ (id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientFlowScript;
@property(retain, nonatomic) SACFScriptUrlInformation *urlInformation;
@property(nonatomic) BOOL shouldSkipExecution;
@property(nonatomic) BOOL shouldCacheScript;
@property(copy, nonatomic) NSString *jsScriptIdentifier;
@property(copy, nonatomic) NSData *jsScriptChecksum;
@property(copy, nonatomic) NSString *jsScript;
@property(copy, nonatomic) NSString *fileContentType;
@property(retain, nonatomic) SACFScriptEncryptionParameters *encryptionParameters;
@property(copy, nonatomic) NSData *compressedScript;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
