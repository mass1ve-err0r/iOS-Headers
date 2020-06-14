//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PPLocationNamedEntities : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_locationName;
    NSString *_streetAddress;
    NSString *_city;
    NSString *_stateOrProvince;
    NSString *_postalCode;
    NSString *_country;
    NSString *_unstructuredLocationString;
    double _score;
    NSString *_documentId;
    NSData *_mapItem;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSString *documentId; // @synthesize documentId=_documentId;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *unstructuredLocationString; // @synthesize unstructuredLocationString=_unstructuredLocationString;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *stateOrProvince; // @synthesize stateOrProvince=_stateOrProvince;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *streetAddress; // @synthesize streetAddress=_streetAddress;
@property(retain, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

