//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface QLImageItemContents : NSObject <NSSecureCoding>
{
    UIImage *_image;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

