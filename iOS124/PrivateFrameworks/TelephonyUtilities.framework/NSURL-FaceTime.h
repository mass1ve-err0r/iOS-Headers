//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FaceTime)
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeLaunchForOutgoingConversationURL;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
- (_Bool)isShowInCallUIURL;
- (_Bool)isLaunchForOutgoingConversationURL;
- (_Bool)isLaunchForIncomingCallURL;
- (_Bool)isDialCallURL;
- (_Bool)hasNoPromptOption;
- (_Bool)isFaceTimeMultiwayURL;
- (_Bool)isFaceTimeAudioPromptURL;
- (_Bool)isFaceTimeAudioURL;
- (_Bool)isFaceTimePromptURL;
- (_Bool)isFaceTimeURL;
- (_Bool)_isPhoneNumberID:(id)arg1;
- (id)faceTimeDestinationAccount;
@end

