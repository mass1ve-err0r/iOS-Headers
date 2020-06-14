//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface _DUIPotentialDrop : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _forbidden;
    _Bool _precise;
    _Bool _prefersFullSizePreview;
    unsigned long long _operation;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool prefersFullSizePreview; // @synthesize prefersFullSizePreview=_prefersFullSizePreview;
@property(nonatomic) _Bool precise; // @synthesize precise=_precise;
@property(nonatomic) _Bool forbidden; // @synthesize forbidden=_forbidden;
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

