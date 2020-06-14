//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>

@class NSString;

@interface _TIKeyboardSecureCandidate : NSObject <NSCopying>
{
    NSString *_secureHeader;
    NSString *_secureContent;
    NSString *_secureFormattedContent;
    NSString *_input;
    NSString *_truncationSentinel;
}

@property(readonly, nonatomic) NSString *truncationSentinel; // @synthesize truncationSentinel=_truncationSentinel;
@property(readonly, nonatomic) NSString *input; // @synthesize input=_input;
@property(readonly, nonatomic) NSString *secureFormattedContent; // @synthesize secureFormattedContent=_secureFormattedContent;
@property(readonly, nonatomic) NSString *secureContent; // @synthesize secureContent=_secureContent;
@property(readonly, nonatomic) NSString *secureHeader; // @synthesize secureHeader=_secureHeader;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSecureHeader:(id)arg1 secureContent:(id)arg2 secureFormattedContent:(id)arg3 input:(id)arg4 truncationSentinel:(id)arg5;

@end

