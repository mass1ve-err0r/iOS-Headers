//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class UIStoryboard;

__attribute__((visibility("hidden")))
@interface _UIStoryboardProxy : NSObject <NSSecureCoding>
{
    UIStoryboard *_storyboard;
}

+ (_Bool)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoryboard:(id)arg1;

@end

