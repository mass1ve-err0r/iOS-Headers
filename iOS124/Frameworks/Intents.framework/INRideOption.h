//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INRideOptionExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INPriceRange, NSArray, NSDate, NSNumber, NSString, NSUserActivity;

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSArray *_availablePartySizeOptions;
    NSArray *_fareLineItems;
    NSString *_name;
    NSDate *_estimatedPickupDate;
    INPriceRange *_priceRange;
    NSNumber *_usesMeteredFare;
    NSString *_disclaimerMessage;
    NSString *_availablePartySizeOptionsSelectionPrompt;
    NSString *_specialPricing;
    INImage *_specialPricingBadgeImage;
    NSUserActivity *_userActivityForBookingInApplication;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUserActivity *userActivityForBookingInApplication; // @synthesize userActivityForBookingInApplication=_userActivityForBookingInApplication;
@property(copy, nonatomic) INImage *specialPricingBadgeImage; // @synthesize specialPricingBadgeImage=_specialPricingBadgeImage;
@property(copy, nonatomic) NSString *specialPricing; // @synthesize specialPricing=_specialPricing;
@property(copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt; // @synthesize availablePartySizeOptionsSelectionPrompt=_availablePartySizeOptionsSelectionPrompt;
@property(copy, nonatomic) NSString *disclaimerMessage; // @synthesize disclaimerMessage=_disclaimerMessage;
@property(copy, nonatomic) NSNumber *usesMeteredFare; // @synthesize usesMeteredFare=_usesMeteredFare;
@property(copy, nonatomic) INPriceRange *priceRange; // @synthesize priceRange=_priceRange;
@property(copy, nonatomic) NSDate *estimatedPickupDate; // @synthesize estimatedPickupDate=_estimatedPickupDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *fareLineItems; // @synthesize fareLineItems=_fareLineItems;
@property(copy, nonatomic) NSArray *availablePartySizeOptions; // @synthesize availablePartySizeOptions=_availablePartySizeOptions;
- (id)initWithName:(id)arg1 estimatedPickupDate:(id)arg2;
@property(copy, nonatomic) NSString *identifier;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

