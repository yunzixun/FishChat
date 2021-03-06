//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ChatMigrationGetConnectInfoDelegate.h"
#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "WXGBackupEntryViewControllerDelegate.h"
#import "WXGBackupImportMessageHelperDelegate.h"
#import "WXGBackupLogicDelegate.h"

@class ChatMigrationGetConnectInfo, NSArray, NSData, NSString, WXGBackupEntryViewController, WXGBackupImportMessageHelper, WXGBackupLogic;

@interface WXGBackupMgr : MMService <IMsgExt, MMKernelExt, ChatMigrationGetConnectInfoDelegate, WXGBackupLogicDelegate, WXGBackupEntryViewControllerDelegate, WXGBackupImportMessageHelperDelegate, MMService>
{
    WXGBackupEntryViewController *m_backupEntryViewController;
    ChatMigrationGetConnectInfo *m_getConnectionInfo;
    WXGBackupLogic *m_backupLogic;
    unsigned long long m_sessionPointer;
    unsigned long long m_sessionCount;
    unsigned long long m_msgCount;
    NSString *deviceName;
    NSString *vendorID;
    unsigned int wechatVersion;
    WXGBackupImportMessageHelper *m_importMessageHelper;
    _Bool m_bShouldNotInterruption;
    unsigned long long m_workType;
    _Bool m_checkState;
    _Bool m_bNeedReloadBanner;
    unsigned short _server_port;
    NSString *_server_id;
    NSData *_server_key;
    NSString *_server_hello;
    NSString *_server_ok;
    NSString *_server_ip;
    NSArray *_sessionArray;
    unsigned long long _bigDataSize;
    NSString *_pcName;
    NSString *_wifiName;
    NSString *_selfWifiName;
    unsigned long long _notifyCode;
}

@property(nonatomic) unsigned long long notifyCode; // @synthesize notifyCode=_notifyCode;
@property(retain, nonatomic) NSString *selfWifiName; // @synthesize selfWifiName=_selfWifiName;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(retain, nonatomic) NSString *pcName; // @synthesize pcName=_pcName;
@property(nonatomic) unsigned long long bigDataSize; // @synthesize bigDataSize=_bigDataSize;
@property(retain, nonatomic) NSArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(retain, nonatomic) NSString *server_ok; // @synthesize server_ok=_server_ok;
@property(retain, nonatomic) NSString *server_hello; // @synthesize server_hello=_server_hello;
@property(retain, nonatomic) NSData *server_key; // @synthesize server_key=_server_key;
@property(retain, nonatomic) NSString *server_id; // @synthesize server_id=_server_id;
- (void).cxx_destruct;
- (void)onManulLogOut;
- (void)onKickQuit;
- (void)onAuthOK;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)showLocalNotification;
- (void)onBackupImportMessageCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupImportMessageFinish;
- (void)onBackupImportMessageError;
- (void)onBackupImportMessageStart;
- (void)onFirstPacketOK:(_Bool)arg1;
- (void)onBackupLogicAlert:(unsigned long long)arg1;
- (void)onBackupTransferSpeed:(float)arg1;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (id)getProgress;
- (void)onBackupLogicNotify:(unsigned long long)arg1;
- (void)onCancelEntryViewController;
- (void)onMinimizeEntryViewController;
- (_Bool)isSameNetGateWay:(id)arg1;
- (_Bool)isSameWifi:(id)arg1;
- (_Bool)isSameAccount:(id)arg1;
- (id)convertDataToHexStr:(id)arg1;
- (void)onGetConnectInfo:(id)arg1;
- (id)getConnectURL:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (unsigned long long)getMsgCount;
- (unsigned long long)getSessionCount;
- (id)getNextSessionArray;
- (id)getAllSessionArray;
- (_Bool)isBackupMgrWorking;
- (unsigned long long)getWorkType;
- (void)clearBackupTmpStateData;
- (void)p_setCanInterrutpion;
- (void)p_setShouldNotInterruption;
- (void)stopRecover;
- (void)startRecover;
- (void)cancelLogic;
- (void)confirmLogic;
- (void)terminateLogic;
- (void)stopLogic;
- (void)startLogic;
- (void)reloadBanner;
- (void)showBackupEntryViewController;
- (void)showBackupEntryViewControllerOnMainThreadWithNotifyCode:(unsigned long long)arg1;
- (void)checkState;
- (void)p_clearBackupInfo;
- (void)p_createPath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

