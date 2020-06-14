//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

@interface HAPMetadataProperty : HMFObject
{
    NSString *_propertyDescription;
    NSString *_propertyType;
    NSNumber *_bitPosition;
}

+ (id)init:(id)arg1 withDictionary:(id)arg2;
@property(retain, nonatomic) NSNumber *bitPosition; // @synthesize bitPosition=_bitPosition;
@property(retain, nonatomic) NSString *propertyType; // @synthesize propertyType=_propertyType;
@property(copy) NSString *propertyDescription; // @synthesize propertyDescription=_propertyDescription;
- (void).cxx_destruct;
- (void)dump;
- (id)description;
- (id)generateDictionary;
- (id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3;

@end

