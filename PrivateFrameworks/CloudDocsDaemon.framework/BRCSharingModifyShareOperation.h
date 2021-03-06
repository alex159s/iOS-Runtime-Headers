/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCItemID *_itemID;
    BRCServerZone *_serverZone;
    CKShare *_share;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_modifyShareAccessIfNecessaryGrantingAccess:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1;
- (void)_updateDocumentWithShareID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3;
- (void)main;
- (void)performAfterFetchingBaseTokenIfNecessary:(id /* block */)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (unsigned long long)startActivity;

@end
