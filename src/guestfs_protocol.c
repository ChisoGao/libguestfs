/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "guestfs_protocol.h"

bool_t
xdr_str (XDR *xdrs, str *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvm_int_pv (XDR *xdrs, guestfs_lvm_int_pv *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_string (xdrs, &objp->pv_name, ~0))
		 return FALSE;
	 if (!xdr_opaque (xdrs, objp->pv_uuid, 32))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->pv_fmt, ~0))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->pv_size))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->dev_size))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->pv_free))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->pv_used))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->pv_attr, ~0))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->pv_pe_count))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->pv_pe_alloc_count))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->pv_tags, ~0))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->pe_start))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->pv_mda_count))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->pv_mda_free))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvm_int_pv_list (XDR *xdrs, guestfs_lvm_int_pv_list *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->guestfs_lvm_int_pv_list_val, (u_int *) &objp->guestfs_lvm_int_pv_list_len, ~0,
		sizeof (guestfs_lvm_int_pv), (xdrproc_t) xdr_guestfs_lvm_int_pv))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvm_int_vg (XDR *xdrs, guestfs_lvm_int_vg *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_string (xdrs, &objp->vg_name, ~0))
		 return FALSE;
	 if (!xdr_opaque (xdrs, objp->vg_uuid, 32))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->vg_fmt, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->vg_attr, ~0))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->vg_size))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->vg_free))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->vg_sysid, ~0))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->vg_extent_size))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->vg_extent_count))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->vg_free_count))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->max_lv))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->max_pv))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->pv_count))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->lv_count))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->snap_count))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->vg_seqno))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->vg_tags, ~0))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->vg_mda_count))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->vg_mda_free))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvm_int_vg_list (XDR *xdrs, guestfs_lvm_int_vg_list *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->guestfs_lvm_int_vg_list_val, (u_int *) &objp->guestfs_lvm_int_vg_list_len, ~0,
		sizeof (guestfs_lvm_int_vg), (xdrproc_t) xdr_guestfs_lvm_int_vg))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvm_int_lv (XDR *xdrs, guestfs_lvm_int_lv *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_string (xdrs, &objp->lv_name, ~0))
		 return FALSE;
	 if (!xdr_opaque (xdrs, objp->lv_uuid, 32))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->lv_attr, ~0))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->lv_major))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->lv_minor))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->lv_kernel_major))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->lv_kernel_minor))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->lv_size))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->seg_count))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->origin, ~0))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->snap_percent))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->copy_percent))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->move_pv, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->lv_tags, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->mirror_log, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->modules, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvm_int_lv_list (XDR *xdrs, guestfs_lvm_int_lv_list *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->guestfs_lvm_int_lv_list_val, (u_int *) &objp->guestfs_lvm_int_lv_list_len, ~0,
		sizeof (guestfs_lvm_int_lv), (xdrproc_t) xdr_guestfs_lvm_int_lv))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_int_stat (XDR *xdrs, guestfs_int_stat *objp)
{
	register int32_t *buf;

	 if (!xdr_quad_t (xdrs, &objp->dev))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->ino))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->mode))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->nlink))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->uid))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->gid))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->rdev))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->size))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->blksize))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->blocks))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->atime))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->mtime))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->ctime))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_int_statvfs (XDR *xdrs, guestfs_int_statvfs *objp)
{
	register int32_t *buf;

	 if (!xdr_quad_t (xdrs, &objp->bsize))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->frsize))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->blocks))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->bfree))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->bavail))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->files))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->ffree))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->favail))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->fsid))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->flag))
		 return FALSE;
	 if (!xdr_quad_t (xdrs, &objp->namemax))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_mount_args (XDR *xdrs, guestfs_mount_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->mountpoint, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_touch_args (XDR *xdrs, guestfs_touch_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_cat_args (XDR *xdrs, guestfs_cat_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_cat_ret (XDR *xdrs, guestfs_cat_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->content, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_ll_args (XDR *xdrs, guestfs_ll_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->directory, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_ll_ret (XDR *xdrs, guestfs_ll_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->listing, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_ls_args (XDR *xdrs, guestfs_ls_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->directory, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_ls_ret (XDR *xdrs, guestfs_ls_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->listing.listing_val, (u_int *) &objp->listing.listing_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_list_devices_ret (XDR *xdrs, guestfs_list_devices_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->devices.devices_val, (u_int *) &objp->devices.devices_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_list_partitions_ret (XDR *xdrs, guestfs_list_partitions_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->partitions.partitions_val, (u_int *) &objp->partitions.partitions_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_pvs_ret (XDR *xdrs, guestfs_pvs_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->physvols.physvols_val, (u_int *) &objp->physvols.physvols_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_vgs_ret (XDR *xdrs, guestfs_vgs_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->volgroups.volgroups_val, (u_int *) &objp->volgroups.volgroups_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvs_ret (XDR *xdrs, guestfs_lvs_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->logvols.logvols_val, (u_int *) &objp->logvols.logvols_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_pvs_full_ret (XDR *xdrs, guestfs_pvs_full_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_guestfs_lvm_int_pv_list (xdrs, &objp->physvols))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_vgs_full_ret (XDR *xdrs, guestfs_vgs_full_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_guestfs_lvm_int_vg_list (xdrs, &objp->volgroups))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvs_full_ret (XDR *xdrs, guestfs_lvs_full_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_guestfs_lvm_int_lv_list (xdrs, &objp->logvols))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_read_lines_args (XDR *xdrs, guestfs_read_lines_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_read_lines_ret (XDR *xdrs, guestfs_read_lines_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->lines.lines_val, (u_int *) &objp->lines.lines_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_init_args (XDR *xdrs, guestfs_aug_init_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->root, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->flags))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_defvar_args (XDR *xdrs, guestfs_aug_defvar_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->name, ~0))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->expr, sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_defvar_ret (XDR *xdrs, guestfs_aug_defvar_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->nrnodes))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_defnode_args (XDR *xdrs, guestfs_aug_defnode_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->name, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->expr, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->val, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_defnode_ret (XDR *xdrs, guestfs_aug_defnode_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->nrnodes))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->created))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_get_args (XDR *xdrs, guestfs_aug_get_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_get_ret (XDR *xdrs, guestfs_aug_get_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->val, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_set_args (XDR *xdrs, guestfs_aug_set_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->val, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_insert_args (XDR *xdrs, guestfs_aug_insert_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->label, ~0))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->before))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_rm_args (XDR *xdrs, guestfs_aug_rm_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_rm_ret (XDR *xdrs, guestfs_aug_rm_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->nrnodes))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_mv_args (XDR *xdrs, guestfs_aug_mv_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->src, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->dest, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_match_args (XDR *xdrs, guestfs_aug_match_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_match_ret (XDR *xdrs, guestfs_aug_match_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->matches.matches_val, (u_int *) &objp->matches.matches_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_ls_args (XDR *xdrs, guestfs_aug_ls_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_aug_ls_ret (XDR *xdrs, guestfs_aug_ls_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->matches.matches_val, (u_int *) &objp->matches.matches_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_rm_args (XDR *xdrs, guestfs_rm_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_rmdir_args (XDR *xdrs, guestfs_rmdir_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_rm_rf_args (XDR *xdrs, guestfs_rm_rf_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_mkdir_args (XDR *xdrs, guestfs_mkdir_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_mkdir_p_args (XDR *xdrs, guestfs_mkdir_p_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_chmod_args (XDR *xdrs, guestfs_chmod_args *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->mode))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_chown_args (XDR *xdrs, guestfs_chown_args *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->owner))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->group))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_exists_args (XDR *xdrs, guestfs_exists_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_exists_ret (XDR *xdrs, guestfs_exists_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_bool (xdrs, &objp->existsflag))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_is_file_args (XDR *xdrs, guestfs_is_file_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_is_file_ret (XDR *xdrs, guestfs_is_file_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_bool (xdrs, &objp->fileflag))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_is_dir_args (XDR *xdrs, guestfs_is_dir_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_is_dir_ret (XDR *xdrs, guestfs_is_dir_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_bool (xdrs, &objp->dirflag))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_pvcreate_args (XDR *xdrs, guestfs_pvcreate_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_vgcreate_args (XDR *xdrs, guestfs_vgcreate_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->volgroup, ~0))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->physvols.physvols_val, (u_int *) &objp->physvols.physvols_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvcreate_args (XDR *xdrs, guestfs_lvcreate_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->logvol, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->volgroup, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->mbytes))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_mkfs_args (XDR *xdrs, guestfs_mkfs_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->fstype, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_sfdisk_args (XDR *xdrs, guestfs_sfdisk_args *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_string (xdrs, &objp->device, ~0))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->cyls))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->heads))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->sectors))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->cyls);
		IXDR_PUT_LONG(buf, objp->heads);
		IXDR_PUT_LONG(buf, objp->sectors);
		}
		 if (!xdr_array (xdrs, (char **)&objp->lines.lines_val, (u_int *) &objp->lines.lines_len, ~0,
			sizeof (str), (xdrproc_t) xdr_str))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_string (xdrs, &objp->device, ~0))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->cyls))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->heads))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->sectors))
				 return FALSE;

		} else {
		objp->cyls = IXDR_GET_LONG(buf);
		objp->heads = IXDR_GET_LONG(buf);
		objp->sectors = IXDR_GET_LONG(buf);
		}
		 if (!xdr_array (xdrs, (char **)&objp->lines.lines_val, (u_int *) &objp->lines.lines_len, ~0,
			sizeof (str), (xdrproc_t) xdr_str))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->cyls))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->heads))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->sectors))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->lines.lines_val, (u_int *) &objp->lines.lines_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_write_file_args (XDR *xdrs, guestfs_write_file_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->content, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->size))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_umount_args (XDR *xdrs, guestfs_umount_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->pathordevice, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_mounts_ret (XDR *xdrs, guestfs_mounts_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->devices.devices_val, (u_int *) &objp->devices.devices_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_file_args (XDR *xdrs, guestfs_file_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_file_ret (XDR *xdrs, guestfs_file_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->description, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_command_args (XDR *xdrs, guestfs_command_args *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->arguments.arguments_val, (u_int *) &objp->arguments.arguments_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_command_ret (XDR *xdrs, guestfs_command_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->output, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_command_lines_args (XDR *xdrs, guestfs_command_lines_args *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->arguments.arguments_val, (u_int *) &objp->arguments.arguments_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_command_lines_ret (XDR *xdrs, guestfs_command_lines_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->lines.lines_val, (u_int *) &objp->lines.lines_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_stat_args (XDR *xdrs, guestfs_stat_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_stat_ret (XDR *xdrs, guestfs_stat_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_guestfs_int_stat (xdrs, &objp->statbuf))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lstat_args (XDR *xdrs, guestfs_lstat_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lstat_ret (XDR *xdrs, guestfs_lstat_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_guestfs_int_stat (xdrs, &objp->statbuf))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_statvfs_args (XDR *xdrs, guestfs_statvfs_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_statvfs_ret (XDR *xdrs, guestfs_statvfs_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_guestfs_int_statvfs (xdrs, &objp->statbuf))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_tune2fs_l_args (XDR *xdrs, guestfs_tune2fs_l_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_tune2fs_l_ret (XDR *xdrs, guestfs_tune2fs_l_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->superblock.superblock_val, (u_int *) &objp->superblock.superblock_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_setro_args (XDR *xdrs, guestfs_blockdev_setro_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_setrw_args (XDR *xdrs, guestfs_blockdev_setrw_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getro_args (XDR *xdrs, guestfs_blockdev_getro_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getro_ret (XDR *xdrs, guestfs_blockdev_getro_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_bool (xdrs, &objp->ro))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getss_args (XDR *xdrs, guestfs_blockdev_getss_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getss_ret (XDR *xdrs, guestfs_blockdev_getss_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->sectorsize))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getbsz_args (XDR *xdrs, guestfs_blockdev_getbsz_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getbsz_ret (XDR *xdrs, guestfs_blockdev_getbsz_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->blocksize))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_setbsz_args (XDR *xdrs, guestfs_blockdev_setbsz_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->blocksize))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getsz_args (XDR *xdrs, guestfs_blockdev_getsz_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getsz_ret (XDR *xdrs, guestfs_blockdev_getsz_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_quad_t (xdrs, &objp->sizeinsectors))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getsize64_args (XDR *xdrs, guestfs_blockdev_getsize64_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_getsize64_ret (XDR *xdrs, guestfs_blockdev_getsize64_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_quad_t (xdrs, &objp->sizeinbytes))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_flushbufs_args (XDR *xdrs, guestfs_blockdev_flushbufs_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_blockdev_rereadpt_args (XDR *xdrs, guestfs_blockdev_rereadpt_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_upload_args (XDR *xdrs, guestfs_upload_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->remotefilename, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_download_args (XDR *xdrs, guestfs_download_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->remotefilename, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_checksum_args (XDR *xdrs, guestfs_checksum_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->csumtype, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_checksum_ret (XDR *xdrs, guestfs_checksum_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->checksum, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_tar_in_args (XDR *xdrs, guestfs_tar_in_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->directory, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_tar_out_args (XDR *xdrs, guestfs_tar_out_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->directory, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_tgz_in_args (XDR *xdrs, guestfs_tgz_in_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->directory, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_tgz_out_args (XDR *xdrs, guestfs_tgz_out_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->directory, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_mount_ro_args (XDR *xdrs, guestfs_mount_ro_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->mountpoint, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_mount_options_args (XDR *xdrs, guestfs_mount_options_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->options, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->mountpoint, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_mount_vfs_args (XDR *xdrs, guestfs_mount_vfs_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->options, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->vfstype, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->mountpoint, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_debug_args (XDR *xdrs, guestfs_debug_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->subcmd, ~0))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->extraargs.extraargs_val, (u_int *) &objp->extraargs.extraargs_len, ~0,
		sizeof (str), (xdrproc_t) xdr_str))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_debug_ret (XDR *xdrs, guestfs_debug_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->result, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_lvremove_args (XDR *xdrs, guestfs_lvremove_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_vgremove_args (XDR *xdrs, guestfs_vgremove_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->vgname, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_pvremove_args (XDR *xdrs, guestfs_pvremove_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_set_e2label_args (XDR *xdrs, guestfs_set_e2label_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->label, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_get_e2label_args (XDR *xdrs, guestfs_get_e2label_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_get_e2label_ret (XDR *xdrs, guestfs_get_e2label_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->label, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_set_e2uuid_args (XDR *xdrs, guestfs_set_e2uuid_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->uuid, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_get_e2uuid_args (XDR *xdrs, guestfs_get_e2uuid_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_get_e2uuid_ret (XDR *xdrs, guestfs_get_e2uuid_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->uuid, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_fsck_args (XDR *xdrs, guestfs_fsck_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->fstype, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_fsck_ret (XDR *xdrs, guestfs_fsck_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->status))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_zero_args (XDR *xdrs, guestfs_zero_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_grub_install_args (XDR *xdrs, guestfs_grub_install_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->root, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_cp_args (XDR *xdrs, guestfs_cp_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->src, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->dest, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_cp_a_args (XDR *xdrs, guestfs_cp_a_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->src, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->dest, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_mv_args (XDR *xdrs, guestfs_mv_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->src, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->dest, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_drop_caches_args (XDR *xdrs, guestfs_drop_caches_args *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->whattodrop))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_dmesg_ret (XDR *xdrs, guestfs_dmesg_ret *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->kmsgs, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_procedure (XDR *xdrs, guestfs_procedure *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_message_direction (XDR *xdrs, guestfs_message_direction *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_message_status (XDR *xdrs, guestfs_message_status *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_message_error (XDR *xdrs, guestfs_message_error *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->error_message, GUESTFS_ERROR_LEN))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_message_header (XDR *xdrs, guestfs_message_header *objp)
{
	register int32_t *buf;

	 if (!xdr_u_int (xdrs, &objp->prog))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->vers))
		 return FALSE;
	 if (!xdr_guestfs_procedure (xdrs, &objp->proc))
		 return FALSE;
	 if (!xdr_guestfs_message_direction (xdrs, &objp->direction))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->serial))
		 return FALSE;
	 if (!xdr_guestfs_message_status (xdrs, &objp->status))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_chunk (XDR *xdrs, guestfs_chunk *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->cancel))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->data.data_val, (u_int *) &objp->data.data_len, GUESTFS_MAX_CHUNK_SIZE))
		 return FALSE;
	return TRUE;
}
