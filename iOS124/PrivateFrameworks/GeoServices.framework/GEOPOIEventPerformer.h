//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface GEOPOIEventPerformer : NSObject <NSSecureCoding>
{
    NSString *_localizedName;
    NSString *_iTunesIdentifier;
    NSURL *_iTunesURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)poiEventPerformersForPerformers:(id)arg1;
@property(retain, nonatomic) NSURL *iTunesURL; // @synthesize iTunesURL=_iTunesURL;
@property(retain, nonatomic) NSString *iTunesIdentifier; // @synthesize iTunesIdentifier=_iTunesIdentifier;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerformer:(id)arg1;

@end

