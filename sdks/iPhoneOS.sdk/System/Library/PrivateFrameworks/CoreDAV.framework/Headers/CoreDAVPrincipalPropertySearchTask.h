//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSDictionary, NSSet;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask
{
    NSSet *_searchItems;
    BOOL _applyToPrincipalCollectionSet;
    NSDictionary *_extraAttributes;
}

@property(nonatomic) BOOL applyToPrincipalCollectionSet; // @synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet;
@property(retain, nonatomic) NSDictionary *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
@property(retain, nonatomic) NSSet *searchItems; // @synthesize searchItems=_searchItems;
// - (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(BOOL)arg4 extraAttributes:(id)arg5;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;

@end
