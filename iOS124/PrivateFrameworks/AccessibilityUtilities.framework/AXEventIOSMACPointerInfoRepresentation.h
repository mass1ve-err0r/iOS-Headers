//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@interface AXEventIOSMACPointerInfoRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _pressed;
    long long _buttonIndex;
    struct CGPoint _location;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) long long buttonIndex; // @synthesize buttonIndex=_buttonIndex;
@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

