//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface MSEmailModel : NSObject <NSSecureCoding>
{
    _Bool _skipAddingSignature;
    int _type;
    NSString *_subject;
    NSString *_sender;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSString *_body;
    NSURL *_reference;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool skipAddingSignature; // @synthesize skipAddingSignature=_skipAddingSignature;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSArray *bcc; // @synthesize bcc=_bcc;
@property(copy, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property(copy, nonatomic) NSArray *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

