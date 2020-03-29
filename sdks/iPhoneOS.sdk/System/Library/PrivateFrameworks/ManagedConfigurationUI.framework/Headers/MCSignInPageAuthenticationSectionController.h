//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfigurationUI/MCProfileTitlePageSectionController-Protocol.h>

@class AKInlineSignInViewController, MCSignInPageAuthenticationCell;

__attribute__((visibility("hidden")))
@interface MCSignInPageAuthenticationSectionController : NSObject <MCProfileTitlePageSectionController>
{
    MCSignInPageAuthenticationCell *_cell;
    AKInlineSignInViewController *_inlineSignInViewController;
    double _authSectionHeight;
}

@property(nonatomic) double authSectionHeight; // @synthesize authSectionHeight=_authSectionHeight;
@property(retain, nonatomic) AKInlineSignInViewController *inlineSignInViewController; // @synthesize inlineSignInViewController=_inlineSignInViewController;
@property(retain, nonatomic) MCSignInPageAuthenticationCell *cell; // @synthesize cell=_cell;
// - (void).cxx_destruct;
- (double)heightForRowAtIndex:(NSUInteger)arg1;
- (double)heightForHeader;
- (id)titleForHeader;
- (id)cellForRowAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfRows;
- (void)registerCellClassWithTableView:(id)arg1;

@end
