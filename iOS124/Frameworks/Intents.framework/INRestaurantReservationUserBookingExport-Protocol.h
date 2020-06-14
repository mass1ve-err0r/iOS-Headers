//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INRestaurantGuest, INRestaurantOffer, NSDate, NSString;

@protocol INRestaurantReservationUserBookingExport <NSObject, JSExport>
@property(copy, nonatomic) NSDate *dateStatusModified;
@property(nonatomic) unsigned long long status;
@property(copy, nonatomic) NSString *guestProvidedSpecialRequestText;
@property(copy, nonatomic) INRestaurantOffer *selectedOffer;
@property(copy, nonatomic) NSString *advisementText;
@property(copy, nonatomic) INRestaurantGuest *guest;
- (id)init;
@end

