//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@class CLLocation, NSData, NSNumber, NSString;

@interface STMapItem : STSiriModelObject
{
    NSString *_title;
    CLLocation *_location;
    NSData *_placeData;
    _Bool _isCurrentLocation;
    NSNumber *_businessID;
    NSNumber *_localSearchProviderID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)_aceCollectionClass;
- (id)_aceContextObjectValue;
- (id)initWithMKMapItem:(id)arg1;

@end

