//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@class NSData, NSString, UIImage;

@interface _MXExtensionBaseMapNamedImage : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

