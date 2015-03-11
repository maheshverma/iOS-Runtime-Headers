/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class CoreCECDevice;

@interface CoreCECDeviceProvider : CoreCECDevice {
    struct { 
        unsigned char destination; 
        struct CECUserControl { 
            unsigned char command; 
            union CECUICommandOperand { 
                struct CECChannelIdentifier { 
                    unsigned int channelNumberFormat : 6; 
                    unsigned int majorChannelNumber : 10; 
                    unsigned int minorChannelNumber : 16; 
                } channelIdentifier; 
                unsigned char playMode; 
                unsigned char broadcastType; 
                unsigned char mediaNumber; 
                unsigned char avInput; 
                unsigned char audioInput; 
                unsigned char soundPresentationControl; 
            } operand; 
        } control; 
        BOOL isValid; 
    struct { 
        CoreCECDevice *sender; 
        struct CECUserControl { 
            unsigned char command; 
            union CECUICommandOperand { 
                struct CECChannelIdentifier { 
                    unsigned int channelNumberFormat : 6; 
                    unsigned int majorChannelNumber : 10; 
                    unsigned int minorChannelNumber : 16; 
                } channelIdentifier; 
                unsigned char playMode; 
                unsigned char broadcastType; 
                unsigned char mediaNumber; 
                unsigned char avInput; 
                unsigned char audioInput; 
                unsigned char soundPresentationControl; 
            } operand; 
        } control; 
        BOOL isValid; 
    unsigned short _deckStatusRequestMask;
    unsigned char _sendFromAddress;
    unsigned int _userControlFollowerSafetyTimeoutGeneration;
    } _userControlFollowerState;
    unsigned int _userControlInitiatorRepetitionTimeoutGeneration;
    } _userControlInitiatorState;
}

@property(readonly) unsigned short deckStatusRequestMask;
@property unsigned char sendFromAddress;

+ (BOOL)supportsSecureCoding;

- (BOOL)abortTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)activeSource:(id*)arg1;
- (id)busProvider;
- (BOOL)cecVersion:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)deckControlCommandWithMode:(unsigned int)arg1 target:(id)arg2 error:(id*)arg3;
- (BOOL)deckControlPlayWithMode:(unsigned int)arg1 target:(id)arg2 error:(id*)arg3;
- (BOOL)deckControlRefreshStatus:(id)arg1 requestType:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)deckControlSetDeckStatus:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)deckControlWithMode:(unsigned int)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (unsigned short)deckStatusRequestMask;
- (BOOL)deckStatusWithInfo:(unsigned int)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)deviceVendorID:(unsigned int)arg1 error:(id*)arg2;
- (void)didNotHandleMessage:(id)arg1 unsupportedOperand:(BOOL)arg2;
- (void)didReceiveMessage:(id)arg1 fromDevice:(id)arg2;
- (void)error:(id)arg1 handlingMessage:(id)arg2 fromDevice:(id)arg3;
- (BOOL)featureAbort:(unsigned char)arg1 reason:(unsigned char)arg2 to:(unsigned char)arg3 error:(id*)arg4;
- (id)filterMessage:(id)arg1 fromDevice:(id)arg2;
- (id)filterMessage:(id)arg1 toDevice:(id)arg2;
- (BOOL)getCECVersionTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)getMenuLanguageTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)getRemoteControlDestination:(id*)arg1 logicalAddress:(unsigned char*)arg2 forTargetDevice:(id)arg3 command:(unsigned char)arg4 error:(id*)arg5;
- (BOOL)giveDeckStatusWithRequest:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)giveDevicePowerStatusTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)giveDeviceVendorIDTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)giveOSDNameTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)givePhysicalAddressTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)giveSystemAudioModeStatusTo:(unsigned char)arg1 error:(id*)arg2;
- (void)handleCECVersionMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleDeviceVendorIDMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGetCECVersionMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGiveDeckStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGiveDevicePowerStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGiveDeviceVendorIDMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleMessage:(id)arg1 fromDevice:(id)arg2 broadcast:(BOOL)arg3;
- (void)handleReportPowerStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleSetSystemAudioModeMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleSystemAudioModeStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (BOOL)handleUserControl:(struct CECUserControl { unsigned char x1; union CECUICommandOperand { struct CECChannelIdentifier { unsigned int x_1_2_1 : 6; unsigned int x_1_2_2 : 10; unsigned int x_1_2_3 : 16; } x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned char x_2_1_5; unsigned char x_2_1_6; unsigned char x_2_1_7; } x2; })arg1 pressed:(BOOL)arg2 fromDevice:(id)arg3 abortReason:(unsigned char*)arg4;
- (void)handleUserControlPressedMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleUserControlReleasedMessage:(id)arg1 fromDevice:(id)arg2;
- (unsigned int)hash;
- (BOOL)imageViewOnTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)inactiveSourceTo:(unsigned char)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithBus:(id)arg1 logicalAddress:(unsigned char)arg2 physicalAddress:(unsigned int)arg3 deviceType:(unsigned int)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)makeActiveSourceWithTVMenus:(BOOL)arg1 error:(id*)arg2;
- (BOOL)oneTouchPlayWithMenu:(BOOL)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2;
- (BOOL)playWithMode:(unsigned int)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)pollTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3;
- (BOOL)reportPhysicalAddress:(id*)arg1;
- (BOOL)reportPowerStatus:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)requestActiveSource:(id*)arg1;
- (BOOL)resignActiveSource:(id*)arg1;
- (BOOL)routingChangeOriginalAddress:(unsigned int)arg1 newAddress:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)routingInformationPhysicalAddress:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)sendActiveSourceStatus:(BOOL)arg1 error:(id*)arg2;
- (void)sendDeckStatusToDevice:(id)arg1;
- (void)sendFeatureAbort:(unsigned char)arg1 forMessage:(id)arg2;
- (unsigned char)sendFromAddress;
- (BOOL)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3;
- (BOOL)sendMessage:(id)arg1 error:(id*)arg2;
- (BOOL)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)setMenuLanguage:(struct CECLanguage { unsigned char x1[3]; })arg1 error:(id*)arg2;
- (BOOL)setOSDName:(union CECOSDName { unsigned char x1[15]; struct { unsigned char x_2_1_1; unsigned char x_2_1_2[14]; } x2; })arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (void)setSendFromAddress:(unsigned char)arg1;
- (BOOL)setStreamPathPhysicalAddress:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)setSystemAudioControlEnabled:(BOOL)arg1 error:(id*)arg2;
- (BOOL)standbyTo:(unsigned char)arg1 error:(id*)arg2;
- (BOOL)systemAudioModeRequest:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)systemAudioModeRequest:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)textViewOnTo:(unsigned char)arg1 error:(id*)arg2;
- (void)trackMessage:(id)arg1 fromDevice:(id)arg2;
- (void)trackMessage:(id)arg1 toDevice:(id)arg2;
- (BOOL)updateActiveSourceStatus:(BOOL)arg1 error:(id*)arg2;
- (void)userControlCancelFollowerSafetyTimeout;
- (void)userControlCancelInitiatorRepetitionTimeout;
- (void)userControlFollowerSafetyTimeoutExpired;
- (void)userControlFollowerSynthesizeRelease;
- (void)userControlInitiatorRepetitionTimeoutExpired;
- (BOOL)userControlPressed:(struct CECUserControl { unsigned char x1; union CECUICommandOperand { struct CECChannelIdentifier { unsigned int x_1_2_1 : 6; unsigned int x_1_2_2 : 10; unsigned int x_1_2_3 : 16; } x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned char x_2_1_5; unsigned char x_2_1_6; unsigned char x_2_1_7; } x2; })arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)userControlReleasedTo:(unsigned char)arg1 error:(id*)arg2;
- (void)userControlScheduleFollowerSafetyTimeout;
- (void)userControlScheduleInitiatorRepetitionTimeout;

@end