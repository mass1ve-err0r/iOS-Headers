//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@interface AXPathWrapper : NSObject <NSSecureCoding>
{
    struct CGPath *_path;
}

+ (id)currentSharedInstance;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

