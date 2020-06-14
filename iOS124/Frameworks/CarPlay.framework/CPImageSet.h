//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class UIImage;

@interface CPImageSet : NSObject <NSSecureCoding>
{
    UIImage *_lightContentImage;
    UIImage *_darkContentImage;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIImage *darkContentImage; // @synthesize darkContentImage=_darkContentImage;
@property(retain, nonatomic) UIImage *lightContentImage; // @synthesize lightContentImage=_lightContentImage;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithLightContentImage:(id)arg1 darkContentImage:(id)arg2;

@end

