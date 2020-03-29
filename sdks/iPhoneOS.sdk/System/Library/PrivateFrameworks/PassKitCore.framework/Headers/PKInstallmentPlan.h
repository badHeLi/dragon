//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSDecimalNumber, NSString, PKInstallmentPlanMerchant, PKInstallmentPlanPayment, PKInstallmentPlanProduct, PKInstallmentPlanSummary, PKPaymentTransactionRewards;

@interface PKInstallmentPlan : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _userViewedIntroduction;
    NSString *_identifier;
    long long _state;
    NSDate *_lastUpdated;
    NSDecimalNumber *_apr;
    NSUInteger _duration;
    NSString *_currencyCode;
    NSDecimalNumber *_totalAmount;
    NSDecimalNumber *_totalProductAmount;
    NSDecimalNumber *_totalInterestAmount;
    long long _periodType;
    NSString *_transactionReferenceIdentifier;
    PKInstallmentPlanSummary *_summary;
    PKInstallmentPlanMerchant *_merchant;
    PKInstallmentPlanProduct *_product;
    NSArray *_lineItems;
    NSArray *_payments;
    PKPaymentTransactionRewards *_rewards;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL userViewedIntroduction; // @synthesize userViewedIntroduction=_userViewedIntroduction;
@property(retain, nonatomic) PKPaymentTransactionRewards *rewards; // @synthesize rewards=_rewards;
@property(copy, nonatomic) NSArray *payments; // @synthesize payments=_payments;
@property(copy, nonatomic) NSArray *lineItems; // @synthesize lineItems=_lineItems;
@property(retain, nonatomic) PKInstallmentPlanProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) PKInstallmentPlanMerchant *merchant; // @synthesize merchant=_merchant;
@property(retain, nonatomic) PKInstallmentPlanSummary *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *transactionReferenceIdentifier; // @synthesize transactionReferenceIdentifier=_transactionReferenceIdentifier;
@property(nonatomic) long long periodType; // @synthesize periodType=_periodType;
@property(retain, nonatomic) NSDecimalNumber *totalInterestAmount; // @synthesize totalInterestAmount=_totalInterestAmount;
@property(retain, nonatomic) NSDecimalNumber *totalProductAmount; // @synthesize totalProductAmount=_totalProductAmount;
@property(retain, nonatomic) NSDecimalNumber *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) NSUInteger duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDecimalNumber *apr; // @synthesize apr=_apr;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToInstallmentPlan:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isComplete) BOOL complete;
@property(readonly, nonatomic) PKInstallmentPlanPayment *nextPaymentDue;
@property(readonly, nonatomic) NSDecimalNumber *totalBilled;
@property(readonly, nonatomic) NSDecimalNumber *remainingAmount;
- (id)initWithDictionary:(id)arg1;

@end
