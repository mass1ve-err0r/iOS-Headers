//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class GEOLocation, NSString, _INPBImageValue;

@protocol _INPBRideVehicle <NSObject>
@property(readonly, nonatomic) _Bool hasRegistrationPlate;
@property(copy, nonatomic) NSString *registrationPlate;
@property(readonly, nonatomic) _Bool hasModel;
@property(copy, nonatomic) NSString *model;
@property(readonly, nonatomic) _Bool hasMapAnnotationImage;
@property(retain, nonatomic) _INPBImageValue *mapAnnotationImage;
@property(readonly, nonatomic) _Bool hasManufacturer;
@property(copy, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) _Bool hasLocation;
@property(retain, nonatomic) GEOLocation *location;
@end

